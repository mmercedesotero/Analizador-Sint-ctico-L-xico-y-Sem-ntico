%{
#include <math.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

extern int yylex();
int yyerror(const char *mensaje);  
int yywrap() { return 1; }

extern FILE *yyin;
int errorCount = 0;
%}

%define parse.error verbose
%locations


%union {
    char* str;
    int num;
    float real;
}

%token <str> TIPO_DATO IDENTIFICADOR LITERAL_CADENA
%token <num> CONST_ENTERA
%token <real> CONST_REAL
%token CONST_OCTAL CONST_HEXADECIMAL CONST_CARACTER

%token IF ELSE WHILE FOR RETURN SWITCH BREAK CONTINUE DO SIZEOF
%token IGUAL DISTINTO MAYOR_IGUAL MENOR_IGUAL AND OR 
%token INCREMENTO DECREMENTO ASIGNACION MAS_IGUAL

%token ERROR_LEXICO

%start programa

%type <str> declaracion declaVarSimples listaVarSimples unaVarSimple inicializacion_op inicializacion expresion
%type <str> expAsignacion expCondicional expOr expAnd expIgualdad expRelacional expAditiva expMultiplicativa expPostfijo expPrimaria
%type <str> expUnaria operUnario constante literalCadena nombreTipo

%left '+' '-'
%left '*' '/'
%left '<' '>' MENOR_IGUAL MAYOR_IGUAL
%left IGUAL DISTINTO
%left AND OR
%right '=' MAS_IGUAL
%right '?'

%%


// Programa
programa: listaTopLevel {
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
        
listaDeclaraciones:
            declaracion
            | listaDeclaraciones declaracion
        ;

declaracion: declaVarSimples {
                printf("Se reconocio la declaracion: %s\n", $1);
                free($1);
            }
            | error ';' { yyerrok; }
            ;
            

declaVarSimples: TIPO_DATO listaVarSimples ';' {
                char* temp = malloc(strlen($1) + strlen($2) + 3); // tipo + espacio + lista + ;
                sprintf(temp, "%s %s;", $1, $2);
                $$ = temp;
                free($1);
                free($2);
            }
            ;

listaVarSimples: unaVarSimple {
                $$ = strdup($1);
                free($1);
            }
            | listaVarSimples ',' unaVarSimple {
                char* temp = malloc(strlen($1) + strlen($3) + 3); // ", " y '\0'
                sprintf(temp, "%s, %s", $1, $3);
                free($1);
                free($3);
                $$ = temp;
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
            char* temp = malloc(strlen($2) + 4); // " = valor" + '\0'
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
            | sentSalto
            | error ';' { yyerrok; }
            ;

setCompuesta:
            '{' listaDeclaracionesop listaSentenciasop '}' 
            ;

listaSentencias: sentencia      
            | listaSentencias sentencia
            ;

sentExpresion: expresionop ';'

sentSeleccion:
            IF '(' expresion ')' sentencia {
                printf("Se reconocio una sentencia if sin else.\n");
            }
            | IF '(' expresion ')' sentencia ELSE sentencia {
                printf("Se reconocio una sentencia if con else.\n");
            }
            ;


sentIteracion: 
            WHILE '(' expresion ')' sentencia {
                printf("Se reconocio una sentencia while.\n");
            }
            | DO sentencia WHILE '(' expresion ')' ';' {
                printf("Se reconocio una sentencia DO y WHILE.\n");
            }
            | FOR '(' expresionop ';' expresionop ';' expresionop ')' sentencia {
                printf("Se reconocio una sentencia FOR.\n");
            }
            ;

sentSalto: RETURN expresionop ';'
            ;

//Expresiones

expresionop:
            /* vacío */
            | expresion
            ; 
            
expresion: expAsignacion
            ;

expAsignacion: expCondicional    
            | expUnaria operAsignacion expAsignacion  
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
expAditiva:  expMultiplicativa  
            |expAditiva '+' expMultiplicativa 
            |expAditiva '-' expMultiplicativa 
            ;
            
expMultiplicativa:  expUnaria  
            | expMultiplicativa '*' expUnaria 
            | expMultiplicativa '/' expUnaria 
            ;

expUnaria:
            expPostfijo {
                $$ = strdup($1);
            }
            | INCREMENTO expUnaria {
                $$ = strdup($2);
            }
            | DECREMENTO expUnaria {
                $$ = strdup($2);
            }
            | expUnaria INCREMENTO {
                $$ = strdup($1);
            }
            | expUnaria DECREMENTO {
                $$ = strdup($1);
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
                $$ = strdup($1);
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
                $$ = strdup("octal");
            }
            | CONST_HEXADECIMAL {
                $$ = strdup("hexadecimal");
            }
            | CONST_REAL {
                char buf[64];
                sprintf(buf, "%g", $1);
                $$ = strdup(buf);
            }
            | CONST_CARACTER {
                $$ = strdup("caracter");
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

int yyerror(const char *mensaje) {
    fprintf(stderr, "Error sintáctico <línea:%d columna:[%d:%d]> %s\n",
            yylloc.first_line, yylloc.first_column, yylloc.last_column - 1, mensaje);
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

    yyin = fopen(argv[1], "r");
    if (!yyin) {
        fprintf(stderr, "No se pudo abrir el archivo %s\n", argv[1]);
        return 1;
    }

    int resultado = yyparse();

    if (resultado == 0 && errorCount == 0)
        fprintf(stdout, "El archivo %s es válido\n", argv[1]);
    else
        fprintf(stdout, "El archivo %s contiene %d errores\n", argv[1], errorCount);

    return 0;
}