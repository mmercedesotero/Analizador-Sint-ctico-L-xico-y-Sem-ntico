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
};
%token <str> TIPO_DATO IDENTIFICADOR LITERAL_CADENA CONST_OCTAL CONST_HEXADECIMAL CONST_CARACTER
%token <num> CONST_ENTERA
%token <real> CONST_REAL

%token IF ELSE WHILE FOR RETURN SWITCH BREAK CONTINUE DO SIZEOF CASE DEFAULT
%token IGUAL DISTINTO MAYOR_IGUAL MENOR_IGUAL AND OR 
%token INCREMENTO DECREMENTO ASIGNACION MAS_IGUAL

%token ERROR_LEXICO

%start programa

%type <str> declaracion unaVarSimple inicializacion_op inicializacion expresion expresionop
%type <str> expAsignacion expCondicional expOr expAnd expIgualdad expRelacional expAditiva expMultiplicativa expPostfijo expPrimaria
%type <str> expUnaria operUnario constante literalCadena nombreTipo
%type <lvars> listaVarSimples

%left '+' '-'
%left '*' '/'
%left '<' '>' MENOR_IGUAL MAYOR_IGUAL
%left IGUAL DISTINTO
%left AND OR
%right ASIGNACION MAS_IGUAL
%right '?'

%%


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
                 printf("Se reconocio la declaracion de la funcion: %s.\n", $2);
};

listaParametrosop:
            /* vacío */
            | listaParametros
            ;
listaParametros: TIPO_DATO IDENTIFICADOR {
                /* Registrar parametros como variables declaradas */
                insertarSimbolo($2, $1, "-", @2.first_line);
            }
            | listaParametros ',' TIPO_DATO IDENTIFICADOR {
                insertarSimbolo($4, $3, "-", @4.first_line);
            }
            ;
            

declaVarSimples: // PARA INSERTAR CADA VARIABLE EN LA TS
      TIPO_DATO listaVarSimples ';' {
          for (int i = 0; i < $2->cantidad; i++) {
              char* val = $2->variables[i].valor ? $2->variables[i].valor : "-";
              insertarSimbolo($2->variables[i].nombre, $1, val, $2->variables[i].linea);
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
          if ($2 && strlen($2) > 0) {
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
          if ($4 && strlen($4) > 0) {
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
            char* temp = malloc(strlen($2) + 4); 
            sprintf(temp, " = %s", $2);
            $$ = temp;
            free($2);
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
                    insertarSimbolo($2->variables[i].nombre, $1,
                                    $2->variables[i].valor ? $2->variables[i].valor : "-",
                                    $2->variables[i].linea);
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
                $$ = strdup($1);
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
            | constante {
                $$ = strdup($1);
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

            
expresion: expAsignacion
            ;

expAsignacion: expCondicional
            | IDENTIFICADOR ASIGNACION expresion {
                // Asignación simple: x = expr
                actualizarValor($1, $3, @1.first_line);
                $$ = strdup($3);
                free($3);
            }
            | IDENTIFICADOR operAsignacion expresion {
                // Evaluar asignación compuesta (ej: x += 5)
                // Obtener valor actual de la variable
                char* valorActual = NULL;
                for (int i = 0; i < cantidadSimbolos; i++) {
                    if (strcmp(listaVariables[i].nombre, $1) == 0) {
                        valorActual = listaVariables[i].valor;
                        break;
                    }
                }
                if (valorActual) {
                    double valActual = atof(valorActual);
                    double valNuevo = atof($3);
                    double resultado = valActual + valNuevo; // Solo += por ahora
                    char buffer[64];
                    sprintf(buffer, "%g", resultado);
                    actualizarValor($1, buffer, @1.first_line);
                    $$ = strdup(buffer);
                } else {
                    $$ = strdup($3);
                }
                free($3);
            }
            | expUnaria operAsignacion expAsignacion {
                $$ = strdup("asignacion compuesta");
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
                $$ = strdup($1);
            }
            | expAditiva '+' expMultiplicativa {
                double val1 = atof($1);
                double val2 = atof($3);
                double resultado = val1 + val2;
                char buffer[64];
                sprintf(buffer, "%g", resultado);
                $$ = strdup(buffer);
                free($1);
                free($3);
            }
            | expAditiva '-' expMultiplicativa {
                double val1 = atof($1);
                double val2 = atof($3);
                double resultado = val1 - val2;
                char buffer[64];
                sprintf(buffer, "%g", resultado);
                $$ = strdup(buffer);
                free($1);
                free($3);
            }
            ;
            
expMultiplicativa:  expUnaria {
                $$ = strdup($1);
            }
            | expMultiplicativa '*' expUnaria {
                double val1 = atof($1);
                double val2 = atof($3);
                double resultado = val1 * val2;
                char buffer[64];
                sprintf(buffer, "%g", resultado);
                $$ = strdup(buffer);
                free($1);
                free($3);
            }
            | expMultiplicativa '/' expUnaria {
                double val1 = atof($1);
                double val2 = atof($3);
                if (val2 != 0) {
                    double resultado = val1 / val2;
                    char buffer[64];
                    sprintf(buffer, "%g", resultado);
                    $$ = strdup(buffer);
                } else {
                    printf("Error: division por cero\n");
                    $$ = strdup("0");
                }
                free($1);
                free($3);
            }
            ;

expUnaria:
            expPostfijo {
                $$ = strdup($1);
            }
            | INCREMENTO expUnaria {
                // Pre-incremento: incrementa primero, luego retorna
                // Asumimos que expUnaria es un IDENTIFICADOR
                $$ = strdup($2);
            }
            | DECREMENTO expUnaria {
                // Pre-decremento: decrementa primero, luego retorna
                $$ = strdup($2);
            }
            | operUnario expUnaria {
                $$ = strdup($2);
            }
            | SIZEOF '(' nombreTipo ')' {
                $$ = strdup("sizeof");
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


expPostfijo: expPrimaria  
            | expPostfijo '[' expresion ']'  
            | expPostfijo '(' listaArgumentosop ')'
            | IDENTIFICADOR INCREMENTO {
                // Post-incremento: retorna valor actual, luego incrementa
                char* valorActual = NULL;
                for (int i = 0; i < cantidadSimbolos; i++) {
                    if (strcmp(listaVariables[i].nombre, $1) == 0) {
                        valorActual = listaVariables[i].valor;
                        break;
                    }
                }
                if (valorActual) {
                    double val = atof(valorActual);
                    $$ = strdup(valorActual); // Retorna valor actual
                    char buffer[64];
                    sprintf(buffer, "%g", val + 1);
                    actualizarValor($1, buffer, @1.first_line);
                } else {
                    $$ = strdup("0");
                }
            }
            | IDENTIFICADOR DECREMENTO {
                // Post-decremento: retorna valor actual, luego decrementa
                char* valorActual = NULL;
                for (int i = 0; i < cantidadSimbolos; i++) {
                    if (strcmp(listaVariables[i].nombre, $1) == 0) {
                        valorActual = listaVariables[i].valor;
                        break;
                    }
                }
                if (valorActual) {
                    double val = atof(valorActual);
                    $$ = strdup(valorActual); // Retorna valor actual
                    char buffer[64];
                    sprintf(buffer, "%g", val - 1);
                    actualizarValor($1, buffer, @1.first_line);
                } else {
                    $$ = strdup("0");
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
                    // Buscar el valor en la tabla
                    char* valor = NULL;
                    for (int i = 0; i < cantidadSimbolos; i++) {
                        if (strcmp(listaVariables[i].nombre, $1) == 0) {
                            valor = listaVariables[i].valor;
                            break;
                        }
                    }
                    $$ = strdup(valor ? valor : "0");
                }
            }
            | constante {
                $$ = strdup($1);
            }
            | literalCadena {
                $$ = strdup($1);
            }
            | '(' expresion ')' {
                int len = strlen($2) + 3;
                $$ = malloc(len);
                sprintf($$, "(%s)", $2);
                free($2);
            }
            ;


constante:
            CONST_ENTERA {
                char buf[32];
                sprintf(buf, "%d", $1);
                $$ = strdup(buf);
            }
            | CONST_OCTAL {
                $$ = strdup($1);
            }
            | CONST_HEXADECIMAL {
                $$ = strdup($1);
            }
            | CONST_REAL {
                char buf[64];
                sprintf(buf, "%g", $1);
                $$ = strdup(buf);
            }
            | CONST_CARACTER {
                $$ = strdup($1);
            }
            ;

literalCadena:
            LITERAL_CADENA {
                $$ = strdup($1);
            }
            ;

nombreTipo:  TIPO_DATO
            ;


%%

int yyerror(const char *s) {
    erroresSintacticos++;
    if (current_file) {
        fprintf(stderr, "%s:%d:%d: Error sintactico: %s\n",
                current_file, yylloc.first_line, yylloc.first_column, s);
    } else {
        fprintf(stderr, "Error sintactico <linea:%d columna:[%d:%d]> %s\n",
                yylloc.first_line, yylloc.first_column, yylloc.last_column - 1, s);
    }
    return 0;
}

int main(int argc, char *argv[]) {

    
#if YYDEBUG
    yydebug = 1;
#endif

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
    fprintf(stdout, "\nAnalisis terminado. Errores totales: %d (sintacticos: %d, lexicos: %d)\n", totalErrores, erroresSintacticos, erroresLexicos);

    mostrarTabla(current_file ? current_file : argv[1]);

    fprintf(stdout, "\n==================================================\n");
    fflush(stdout);
    return 0;


}
