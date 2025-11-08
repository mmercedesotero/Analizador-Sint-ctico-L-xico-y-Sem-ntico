%{
#include <math.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#include "tabla_simbolos.h"

/* Acceso directo a la lista de variables declarada en tabla_simbolos.c */
extern Variable listaVariables[];
extern int cantidadSimbolos;

int yyerror(const char *s);
int yywrap() { return 1; }

extern FILE *yyin;
int erroresSintacticos = 0;
int erroresLexicos = 0;
int erroresSemanticos = 0; /* definicion global usada tambien por tabla_simbolos.c */


/* Nombre del archivo actual para prefijar mensajes */
const char* current_file = NULL;

int yylex(void);
extern int yylineno;
%}

%define parse.error verbose
%locations


%union {
    char* str;
    int num;
    float real;
    ListaVariables* lvars;
    struct {
        char* tipo;
        char* valor;
    } expr;
};
%token <str> TIPO_DATO IDENTIFICADOR LITERAL_CADENA CONST_OCTAL CONST_HEXADECIMAL CONST_CARACTER
%token <num> CONST_ENTERA
%token <real> CONST_REAL

%token IF ELSE WHILE FOR RETURN SWITCH BREAK CONTINUE DO SIZEOF CASE DEFAULT
%token IGUAL DISTINTO MAYOR_IGUAL MENOR_IGUAL AND OR 
%token INCREMENTO DECREMENTO ASIGNACION MAS_IGUAL

%token ERROR_LEXICO

%start programa

%type <str> declaracion unaVarSimple inicializacion_op inicializacion expresionop
%type <lvars> listaParametrosop listaParametros
%type <expr> expresion expAsignacion expCondicional expOr expAnd expIgualdad expRelacional expAditiva expMultiplicativa expPostfijo expPrimaria
%type <expr> expUnaria constante literalCadena
%type <str> operUnario nombreTipo
%type <lvars> listaVarSimples

%left '+' '-'
%left '*' '/'
%left '<' '>' MENOR_IGUAL MAYOR_IGUAL
%left IGUAL DISTINTO
%left AND OR
%right ASIGNACION MAS_IGUAL
%right '?'

%%

                 /* Registrar la funcion en la tabla de simbolos: nombre, tipo retorno, sin valor, parametros */
// Programa
programa: listaTopLevel {
                printf("=========================================\n");
                printf("Programa valido.\n");
            }
            ;

listaTopLevel: /* vacío */
            | listaTopLevel declaracion
            | listaTopLevel sentencia
            ;

// Declaraciones FUNCIONA
listaDeclaracionesop:
            /* vacío */
            | listaDeclaraciones
            ;

listaSentenciasop:
            /* vacío */
            | listaSentencias
            ;
        
listaDeclaraciones: declaracion
            | listaDeclaraciones declaracion
            ;

declaracion: declaVarSimples {
                printf("Se reconocio la declaracion de variables simples.\n");
            }
            | declaracionFuncion { 
                printf("Se reconocio una declaracion de funcion.\n"); 

            }
            | error ';' { yyerrok; }
            ;
            
declaracionFuncion: TIPO_DATO IDENTIFICADOR '(' listaParametrosop ')' sentencia {
                 /* Registrar la funcion en la tabla de simbolos: nombre, tipo retorno, sin valor, parametros */
                 ListaVariables* params = $4; /* puede ser NULL si no hay parametros */
                 Parametro* parray = NULL;
                 int pcnt = 0;
                 if (params) {
                     pcnt = params->cantidad;
                     parray = malloc(sizeof(Parametro) * pcnt);
                     for (int i = 0; i < pcnt; ++i) {
                         parray[i].nombre = params->variables[i].nombre ? strdup(params->variables[i].nombre) : NULL;
                         parray[i].tipo = params->variables[i].tipo ? strdup(params->variables[i].tipo) : NULL;
                     }
                 }
                 insertarFuncion($2, $1, "-", pcnt, parray);
                 /* liberar la estructura temporal de parametros (insertarFuncion hizo sus propias copias) */
                 if (parray) {
                     for (int i = 0; i < pcnt; ++i) {
                         if (parray[i].nombre) free(parray[i].nombre);
                         if (parray[i].tipo) free(parray[i].tipo);
                     }
                     free(parray);
                 }
                 if (params) {
                     for (int i = 0; i < params->cantidad; ++i) {
                         if (params->variables[i].nombre) free(params->variables[i].nombre);
                         if (params->variables[i].valor) free(params->variables[i].valor);
                         if (params->variables[i].tipo) free(params->variables[i].tipo);
                     }
                     free(params->variables);
                     free(params);
                 }
                 printf("Se reconocio la declaracion de la funcion: %s.\n", $2);
};

listaParametrosop:
            /* vacío */
            | listaParametros
            ;
listaParametros: TIPO_DATO IDENTIFICADOR {
                ListaVariables* lista = malloc(sizeof(ListaVariables));
                lista->variables = malloc(sizeof(Variable));
                lista->variables[0].nombre = strdup($2);
                lista->variables[0].tipo = strdup($1);
                lista->variables[0].valor = NULL;
                lista->variables[0].linea = @2.first_line;
                lista->cantidad = 1;
                $$ = lista;
                free($1);
                free($2);
            }
            | listaParametros ',' TIPO_DATO IDENTIFICADOR {
                $1->variables = realloc($1->variables, sizeof(Variable) * ($1->cantidad + 1));
                $1->variables[$1->cantidad].nombre = strdup($4);
                $1->variables[$1->cantidad].tipo = strdup($3);
                $1->variables[$1->cantidad].valor = NULL;
                $1->variables[$1->cantidad].linea = @4.first_line;
                $1->cantidad++;
                $$ = $1;
                free($3);
                free($4);
            }
            ;
            

declaVarSimples: // PARA INSERTAR CADA VARIABLE EN LA TS
      TIPO_DATO listaVarSimples ';' {
          for (int i = 0; i < $2->cantidad; i++) {
              char* val = $2->variables[i].valor;
              if (val && strcmp(val, "__ERROR__") == 0) {
                  fprintf(stderr, "No se inserta '%s' por error semantico en la inicializacion (linea %d)\n", $2->variables[i].nombre, $2->variables[i].linea);
                  // ya se conto el error al evaluar la expresion
              } else {
                  insertarSimbolo($2->variables[i].nombre, $1, val ? val : "-", $2->variables[i].linea);
              }
              if ($2->variables[i].nombre) free($2->variables[i].nombre);
              if ($2->variables[i].valor) free($2->variables[i].valor);
          }
          free($2->variables);
          free($2);
          free($1);
      }
;


listaVarSimples:
      IDENTIFICADOR inicializacion_op {
          ListaVariables* lista = malloc(sizeof(ListaVariables));
          lista->variables = malloc(sizeof(Variable));
          lista->variables[0].nombre = strdup($1);
          if ($2 && strcmp($2, "__ERROR__") == 0) {
              lista->variables[0].valor = strdup("__ERROR__");
          } else if ($2 && strlen($2) > 0) {
              lista->variables[0].valor = strdup($2 + 3);
          } else {
              lista->variables[0].valor = NULL;
          }
          lista->variables[0].linea = @1.first_line;
          lista->cantidad = 1;
          $$ = lista;
          free($2);
      }
    | listaVarSimples ',' IDENTIFICADOR inicializacion_op {
          $1->variables = realloc($1->variables, sizeof(Variable) * ($1->cantidad + 1));
          $1->variables[$1->cantidad].nombre = strdup($3);
          if ($4 && strcmp($4, "__ERROR__") == 0) {
              $1->variables[$1->cantidad].valor = strdup("__ERROR__");
          } else if ($4 && strlen($4) > 0) {
              $1->variables[$1->cantidad].valor = strdup($4 + 3);
          } else {
              $1->variables[$1->cantidad].valor = NULL;
          }
          $1->variables[$1->cantidad].linea = @3.first_line;
          $1->cantidad++;
          $$ = $1;
          free($4);
      }
;


unaVarSimple: IDENTIFICADOR inicializacion_op {
            char* temp = malloc(strlen($1) + strlen($2) + 1);
            sprintf(temp, "%s%s", $1, $2);
            $$ = temp;
            free($1);
            free($2);
            }
            ;

inicializacion_op:
            /* vacío */ {
                $$ = strdup("");
            }
            | inicializacion {
                $$ = $1;
            }
            ;

inicializacion: ASIGNACION expresion {
            if ($2.tipo && strcmp($2.tipo, "indef") == 0) {
                $$ = strdup("__ERROR__");
            } else {
                size_t len = $2.valor ? strlen($2.valor) : 0;
                char* temp = malloc(len + 4);
                sprintf(temp, " = %s", $2.valor ? $2.valor : "");
                $$ = temp;
            }
            }
            ;


// Sentencias
sentencia:
            setCompuesta
            | sentExpresion
            | sentSeleccion
            | sentIteracion
            | sentSwitch
            | sentSalto
            | error ';' { yyerrok; }
            ;

setCompuesta:
            '{' listaDeclaracionesop listaSentenciasop '}' 
            ;

listaSentencias: sentencia      
            | listaSentencias sentencia
            ;

sentExpresion: expresion ';'
            ;

sentSeleccion:
            IF '(' expresion ')' sentencia {
                printf("Se reconocio una sentencia IF sin ELSE.\n");
            }
            | IF '(' expresion ')' sentencia ELSE sentencia {
                printf("Se reconocio una sentencia IF con ELSE.\n");
            }
            ;


sentIteracion: 
            WHILE '(' expresion ')' sentencia {
                printf("Se reconocio una sentencia WHILE.\n");
            }
            | DO sentencia WHILE '(' expresion ')' ';' {
                printf("Se reconocio una sentencia DO y WHILE.\n");
            }
            | FOR '(' forInit ';' expresionop ';' expresionop ')' sentencia {
                printf("Se reconocio una sentencia FOR.\n");
            }
            ;

forInit:
            declaracionFor
            | expresionop
            ;

declaracionFor:
            TIPO_DATO listaVarSimples {
                for (int i = 0; i < $2->cantidad; i++) {
                    char* val = $2->variables[i].valor;
                    if (val && strcmp(val, "__ERROR__") == 0) {
                        fprintf(stderr, "No se inserta '%s' por error semantico en la inicializacion (linea %d)\n", $2->variables[i].nombre, $2->variables[i].linea);
                    } else {
                        insertarSimbolo($2->variables[i].nombre, $1,
                                        $2->variables[i].valor ? $2->variables[i].valor : "-",
                                        $2->variables[i].linea);
                    }
                    if ($2->variables[i].nombre) free($2->variables[i].nombre);
                    if ($2->variables[i].valor) free($2->variables[i].valor);
                }
                free($2->variables);
                free($2);
                free($1);
            }
            ;

sentSwitch: SWITCH '(' expresion ')' '{' listaCases '}' {
                printf("Se reconocio una sentencia SWITCH.\n");
            }
            ;

listaCases: listaCases caseSentencia
            | caseSentencia
            ;

caseSentencia: CASE CONST_ENTERA ':' sentencia
            | DEFAULT ':' sentencia
            ;

sentSalto:
            RETURN expresionop ';' {
                printf("Se reconocio una sentencia de RETURN.\n");
            }
            | BREAK ';' {
                printf("Se reconocio una sentencia BREAK.\n");
            }
            | CONTINUE ';' {
                printf("Se reconocio una sentencia CONTINUE.\n");
            }
            ;


//Expresiones

expresionop:
            /* vacío */ {
                $$ = strdup("");
            }
            | constante {
                $$ = strdup($1.valor);
            }
            | IDENTIFICADOR {
                // Buscar el valor en la tabla de símbolos
                char* valor = NULL;
                for (int i = 0; i < cantidadSimbolos; i++) {
                    if (strcmp(listaVariables[i].nombre, $1) == 0) {
                        valor = listaVariables[i].valor;
                        break;
                    }
                }
                $$ = strdup(valor ? valor : "0");
            }
            | IDENTIFICADOR ASIGNACION expresionop {
                // Actualizar el valor en la tabla de símbolos
                if (strlen($3) > 0) {
                    actualizarValor($1, $3, @1.first_line);
                }
                $$ = strdup($3); 
            }
            | IDENTIFICADOR {
                if (!existeSimbolo($1)) {
                    printf("Error: variable '%s' usada sin declarar (linea %d)\n", $1, @1.first_line);
                }
                $$ = strdup($1);
            }
            | expresionop '+' expresionop {
                double val1 = atof($1);
                double val2 = atof($3);
                double resultado = val1 + val2;
                char buffer[64];
                sprintf(buffer, "%g", resultado);
                $$ = strdup(buffer);
                free($1);
                free($3);
            }
            | expresionop '-' expresionop {
                $$ = strdup("resta");
            }
            | expresionop '*' expresionop {
                $$ = strdup("mult");
            }
            | expresionop '/' expresionop {
                $$ = strdup("div");
            }
            | expresionop '<' expresionop {
                $$ = strdup("menor");
            }
            | expresionop '>' expresionop {
                $$ = strdup("mayor");
            }
            | IDENTIFICADOR INCREMENTO {
                // Post-incremento
                char* valorActual = NULL;
                for (int i = 0; i < cantidadSimbolos; i++) {
                    if (strcmp(listaVariables[i].nombre, $1) == 0) {
                        valorActual = listaVariables[i].valor;
                        break;
                    }
                }
                if (valorActual) {
                    double val = atof(valorActual);
                    char buffer[64];
                    sprintf(buffer, "%g", val + 1);
                    actualizarValor($1, buffer, @1.first_line);
                    $$ = strdup(buffer);
                } else {
                    $$ = strdup("1");
                }
            }
            | IDENTIFICADOR DECREMENTO {
                // Post-decremento
                char* valorActual = NULL;
                for (int i = 0; i < cantidadSimbolos; i++) {
                    if (strcmp(listaVariables[i].nombre, $1) == 0) {
                        valorActual = listaVariables[i].valor;
                        break;
                    }
                }
                if (valorActual) {
                    double val = atof(valorActual);
                    char buffer[64];
                    sprintf(buffer, "%g", val - 1);
                    actualizarValor($1, buffer, @1.first_line);
                    $$ = strdup(buffer);
                } else {
                    $$ = strdup("-1");
                }
            }
            | INCREMENTO IDENTIFICADOR {
                // Pre-incremento
                char* valorActual = NULL;
                for (int i = 0; i < cantidadSimbolos; i++) {
                    if (strcmp(listaVariables[i].nombre, $2) == 0) {
                        valorActual = listaVariables[i].valor;
                        break;
                    }
                }
                if (valorActual) {
                    double val = atof(valorActual);
                    char buffer[64];
                    sprintf(buffer, "%g", val + 1);
                    actualizarValor($2, buffer, @2.first_line);
                    $$ = strdup(buffer);
                } else {
                    $$ = strdup("1");
                }
            }
            | DECREMENTO IDENTIFICADOR {
                // Pre-decremento
                char* valorActual = NULL;
                for (int i = 0; i < cantidadSimbolos; i++) {
                    if (strcmp(listaVariables[i].nombre, $2) == 0) {
                        valorActual = listaVariables[i].valor;
                        break;
                    }
                }
                if (valorActual) {
                    double val = atof(valorActual);
                    char buffer[64];
                    sprintf(buffer, "%g", val - 1);
                    actualizarValor($2, buffer, @2.first_line);
                    $$ = strdup(buffer);
                } else {
                    $$ = strdup("-1");
                }
            }
            | IDENTIFICADOR MAS_IGUAL expresionop {
                // x += expr
                char* valorActual = NULL;
                for (int i = 0; i < cantidadSimbolos; i++) {
                    if (strcmp(listaVariables[i].nombre, $1) == 0) {
                        valorActual = listaVariables[i].valor;
                        break;
                    }
                }
                if (valorActual && strlen($3) > 0) {
                    double valActual = atof(valorActual);
                    double valNuevo = atof($3);
                    double resultado = valActual + valNuevo;
                    char buffer[64];
                    sprintf(buffer, "%g", resultado);
                    actualizarValor($1, buffer, @1.first_line);
                    $$ = strdup(buffer);
                } else {
                    $$ = strdup($3);
                }
            }
            ;

            
expresion: expAsignacion { $$.tipo = $1.tipo; $$.valor = $1.valor; }
            ;

expAsignacion: expCondicional { $$.tipo = $1.tipo; $$.valor = $1.valor; }
            | IDENTIFICADOR ASIGNACION expresion {
                // Asignación simple: x = expr
                char* tipoVar = NULL;
                for (int i = 0; i < cantidadSimbolos; i++) {
                    if (strcmp(listaVariables[i].nombre, $1) == 0) {
                        tipoVar = listaVariables[i].tipo;
                        break;
                    }
                }
                if (!tipoVar) {
                    printf("Error semantico: variable '%s' usada sin declarar (linea %d)\n", $1, @1.first_line);
                    erroresSemanticos++;
                } else if (strcmp(tipoVar, $3.tipo) != 0) {
                    fprintf(stderr, "Error semantico: tipos incompatibles en asignacion: %s = %s (linea %d)\n", tipoVar, $3.tipo ? $3.tipo : "(indef)", @1.first_line);
                    erroresSemanticos++;
                }
                actualizarValor($1, $3.valor, @1.first_line);
                $$.tipo = tipoVar ? strdup(tipoVar) : strdup("indef");
                $$.valor = strdup($3.valor);
            }
            | IDENTIFICADOR operAsignacion expresion {
                // Evaluar asignación compuesta (ej: x += expr)
                char* valorActual = NULL;
                char* tipoVar = NULL;
                for (int i = 0; i < cantidadSimbolos; i++) {
                    if (strcmp(listaVariables[i].nombre, $1) == 0) {
                        valorActual = listaVariables[i].valor;
                        tipoVar = listaVariables[i].tipo;
                        break;
                    }
                }
                char* tipoRes = NULL;
                if (!tipoVar || verificarTiposOperacion("+=", tipoVar, $3.tipo, &tipoRes) != ERR_OK) {
                    fprintf(stderr, "Error semantico: tipos incompatibles en asignacion compuesta: %s y %s (linea %d)\n", tipoVar ? tipoVar : "(indef)", $3.tipo ? $3.tipo : "(indef)", @1.first_line);
                    erroresSemanticos++;
                    $$.tipo = strdup("indef");
                    $$.valor = strdup("0");
                } else {
                    double valActual = valorActual ? atof(valorActual) : 0;
                    double valNuevo = atof($3.valor);
                    double resultado = valActual + valNuevo; // Solo += por ahora
                    char buffer[64];
                    sprintf(buffer, "%g", resultado);
                    actualizarValor($1, buffer, @1.first_line);
                    $$.tipo = strdup(tipoRes);
                    $$.valor = strdup(buffer);
                }
            }
            | expUnaria operAsignacion expAsignacion {
                $$.tipo = strdup("indef");
                $$.valor = strdup("0");
            }
            ;

operAsignacion:   ASIGNACION
            | MAS_IGUAL
            ;

expCondicional: expOr  
            | expOr '?' expresion ':' expCondicional
            ;
expOr: expAnd  
            | expOr OR expAnd 
            ;

expAnd: expIgualdad  
            | expAnd AND expIgualdad 
            ;
expIgualdad:  expRelacional  
            | expIgualdad IGUAL expRelacional 
            | expIgualdad DISTINTO expRelacional 
            ;

expRelacional: expAditiva  
            | expRelacional MAYOR_IGUAL expAditiva 
            | expRelacional '>' expAditiva 
            | expRelacional MENOR_IGUAL expAditiva 
            | expRelacional '<' expAditiva 
            ;
expAditiva:  expMultiplicativa {
                $$.tipo = $1.tipo; $$.valor = $1.valor;
            }
            | expAditiva '+' expMultiplicativa {
                char* tipoRes = NULL;
                if (verificarTiposOperacion("+", $1.tipo, $3.tipo, &tipoRes) != ERR_OK) {
                    fprintf(stderr, "Error semantico: tipos incompatibles para +: %s y %s (linea %d)\n", $1.tipo ? $1.tipo : "(indef)", $3.tipo ? $3.tipo : "(indef)", yylineno);
                    erroresSemanticos++;
                    $$.tipo = strdup("indef");
                    $$.valor = strdup("0");
                } else {
                    double val1 = atof($1.valor);
                    double val2 = atof($3.valor);
                    double resultado = val1 + val2;
                    char buffer[64];
                    sprintf(buffer, "%g", resultado);
                    $$.valor = strdup(buffer);
                    $$.tipo = strdup(tipoRes);
                }
            }
            | expAditiva '-' expMultiplicativa {
                char* tipoRes = NULL;
                if (verificarTiposOperacion("-", $1.tipo, $3.tipo, &tipoRes) != ERR_OK) {
                    fprintf(stderr, "Error semantico: tipos incompatibles para -: %s y %s (linea %d)\n", $1.tipo ? $1.tipo : "(indef)", $3.tipo ? $3.tipo : "(indef)", yylineno);
                    erroresSemanticos++;
                    $$.tipo = strdup("indef");
                    $$.valor = strdup("0");
                } else {
                    double val1 = atof($1.valor);
                    double val2 = atof($3.valor);
                    double resultado = val1 - val2;
                    char buffer[64];
                    sprintf(buffer, "%g", resultado);
                    $$.valor = strdup(buffer);
                    $$.tipo = strdup(tipoRes);
                }
            }
            ;
            
expMultiplicativa:  expUnaria {
                $$.tipo = $1.tipo; $$.valor = $1.valor;
            }
            | expMultiplicativa '*' expUnaria {
                char* tipoRes = NULL;
                if (verificarTiposOperacion("*", $1.tipo, $3.tipo, &tipoRes) != ERR_OK) {
                    fprintf(stderr, "Error semantico: tipos incompatibles para *: %s y %s (linea %d)\n", $1.tipo ? $1.tipo : "(indef)", $3.tipo ? $3.tipo : "(indef)", yylineno);
                    erroresSemanticos++;
                    $$.tipo = strdup("indef");
                    $$.valor = strdup("0");
                } else {
                    double val1 = atof($1.valor);
                    double val2 = atof($3.valor);
                    double resultado = val1 * val2;
                    char buffer[64];
                    sprintf(buffer, "%g", resultado);
                    $$.valor = strdup(buffer);
                    $$.tipo = strdup(tipoRes);
                }
            }
            | expMultiplicativa '/' expUnaria {
                char* tipoRes = NULL;
                if (verificarTiposOperacion("/", $1.tipo, $3.tipo, &tipoRes) != ERR_OK) {
                    fprintf(stderr, "Error semantico: tipos incompatibles para /: %s y %s (linea %d)\n", $1.tipo ? $1.tipo : "(indef)", $3.tipo ? $3.tipo : "(indef)", yylineno);
                    erroresSemanticos++;
                    $$.tipo = strdup("indef");
                    $$.valor = strdup("0");
                } else {
                    double val1 = atof($1.valor);
                    double val2 = atof($3.valor);
                    if (val2 != 0) {
                        double resultado = val1 / val2;
                        char buffer[64];
                        sprintf(buffer, "%g", resultado);
                        $$.valor = strdup(buffer);
                    } else {
                        printf("Error: division por cero\n");
                        $$.valor = strdup("0");
                    }
                    $$.tipo = strdup(tipoRes);
                }
            }
            ;

expUnaria:
            expPostfijo {
                $$.tipo = $1.tipo; $$.valor = $1.valor;
            }
            | INCREMENTO expUnaria {
                /* Pre-incremento: aqui solo propagamos el tipo y valor calculado */
                $$.tipo = $2.tipo; $$.valor = $2.valor;
            }
            | DECREMENTO expUnaria {
                $$.tipo = $2.tipo; $$.valor = $2.valor;
            }
            | operUnario expUnaria {
                $$.tipo = $2.tipo; $$.valor = $2.valor;
            }
            | SIZEOF '(' nombreTipo ')' {
                $$.tipo = strdup("int");
                $$.valor = strdup("0");
            }
            ;

operUnario:
            '&' {
                $$ = strdup("&");
            }
            | '*' {
                $$ = strdup("*");
            }
            | '-' {
                $$ = strdup("-");
            }
            | '!' {
                $$ = strdup("!");
            }
            ;


expPostfijo: expPrimaria  {
                $$.tipo = $1.tipo; $$.valor = $1.valor;
            }
            | expPostfijo '[' expresion ']'  {
                /* no implementado: propagar tipo/valor */
                $$.tipo = $1.tipo; $$.valor = $1.valor;
            }
            | expPostfijo '(' listaArgumentosop ')' {
                /* llamada a funcion: sin semantica, propagar */
                $$.tipo = $1.tipo; $$.valor = $1.valor;
            }
            | IDENTIFICADOR INCREMENTO {
                // Post-incremento: retorna valor actual, luego incrementa
                char* valorActual = NULL;
                char* tipoVar = NULL;
                for (int i = 0; i < cantidadSimbolos; i++) {
                    if (strcmp(listaVariables[i].nombre, $1) == 0) {
                        valorActual = listaVariables[i].valor;
                        tipoVar = listaVariables[i].tipo;
                        break;
                    }
                }
                if (valorActual) {
                    double val = atof(valorActual);
                    $$.valor = strdup(valorActual); // Retorna valor actual
                    char buffer[64];
                    sprintf(buffer, "%g", val + 1);
                    actualizarValor($1, buffer, @1.first_line);
                    $$.tipo = tipoVar ? strdup(tipoVar) : strdup("indef");
                } else {
                    $$.valor = strdup("0");
                    $$.tipo = strdup("indef");
                }
            }
            | IDENTIFICADOR DECREMENTO {
                // Post-decremento: retorna valor actual, luego decrementa
                char* valorActual = NULL;
                char* tipoVar = NULL;
                for (int i = 0; i < cantidadSimbolos; i++) {
                    if (strcmp(listaVariables[i].nombre, $1) == 0) {
                        valorActual = listaVariables[i].valor;
                        tipoVar = listaVariables[i].tipo;
                        break;
                    }
                }
                if (valorActual) {
                    double val = atof(valorActual);
                    $$.valor = strdup(valorActual); // Retorna valor actual
                    char buffer[64];
                    sprintf(buffer, "%g", val - 1);
                    actualizarValor($1, buffer, @1.first_line);
                    $$.tipo = tipoVar ? strdup(tipoVar) : strdup("indef");
                } else {
                    $$.valor = strdup("0");
                    $$.tipo = strdup("indef");
                }
            }
            ;

listaArgumentosop:
             /* vacío */
            | listaArgumentos
            ;   

listaArgumentos: expAsignacion  
            | listaArgumentos ',' expAsignacion 
            ;
 
expPrimaria:
IDENTIFICADOR {
                // Buscar el valor del identificador en la tabla de símbolos
                if (!existeSimbolo($1)) {
                    printf("Error: variable '%s' usada sin declarar (linea %d)\n", $1, @1.first_line);
                    $$ = strdup("0");
                } else {
                    char* valor = NULL;
                    char* tipo = NULL;
                    for (int i = 0; i < cantidadSimbolos; i++) {
                        if (strcmp(listaVariables[i].nombre, $1) == 0) {
                            valor = listaVariables[i].valor;
                            tipo = listaVariables[i].tipo;
                            break;
                        }
                    }
                    $$.valor = strdup(valor ? valor : "0");
                    $$.tipo = strdup(tipo ? tipo : "indef");
                }
            }
            | constante {
                $$.valor = $1.valor; $$.tipo = $1.tipo;
            }
            | literalCadena {
                $$.valor = $1.valor; $$.tipo = $1.tipo;
            }
            | '(' expresion ')' {
                $$.valor = $2.valor; $$.tipo = $2.tipo;
            }
            ;


constante:
            CONST_ENTERA {
                char buf[32];
                sprintf(buf, "%d", $1);
                $$.valor = strdup(buf);
                $$.tipo = strdup("int");
            }
            | CONST_OCTAL {
                $$.valor = strdup($1);
                $$.tipo = strdup("int");
            }
            | CONST_HEXADECIMAL {
                $$.valor = strdup($1);
                $$.tipo = strdup("int");
            }
            | CONST_REAL {
                char buf[64];
                sprintf(buf, "%g", $1);
                $$.valor = strdup(buf);
                $$.tipo = strdup("float");
            }
            | CONST_CARACTER {
                $$.valor = strdup($1);
                $$.tipo = strdup("char");
            }
            ;

literalCadena:
            LITERAL_CADENA {
                $$.valor = strdup($1);
                $$.tipo = strdup("string");
            }
            ;

nombreTipo:  TIPO_DATO
            ;


%%

int yyerror(const char *s) {
    erroresSintacticos++;
    /* Sin prefijo de nombre de archivo */
    fprintf(stderr, "Error sintactico: %s (linea %d, columna %d)\n",
            s, yylloc.first_line, yylloc.first_column);
    return 0;
}


#if YYDEBUG
    yydebug = 1;
#endif

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Uso: %s <archivo>\n", argv[0]);
        return 1;
    }

    /* Señalización del archivo actual */
    current_file = argv[1];
    printf("\n===== Ejecutando: %s =====\n", current_file);

    yyin = fopen(argv[1], "r");
    if (!yyin) {
        fprintf(stderr, "No se pudo abrir el archivo %s\n", argv[1]);
        return 1;
    }

    int resultado = yyparse();

    int totalErrores = erroresSintacticos + erroresLexicos;
    if (resultado == 0 && totalErrores == 0)
        fprintf(stdout, "El archivo %s es valido, no se encontraron errores\n", argv[1]);
    fprintf(stdout, "\nAnalisis terminado. Errores totales: %d (sintacticos: %d, lexicos: %d, semanticos: %d)\n", totalErrores, erroresSintacticos, erroresLexicos, erroresSemanticos);

    mostrarTabla(current_file ? current_file : argv[1]);
    /* Imprimir la tabla de funciones registrada en la tabla de símbolos */
    mostrarFunciones();

    fprintf(stdout, "\n==================================================\n");
    fflush(stdout);
    return 0;
}
