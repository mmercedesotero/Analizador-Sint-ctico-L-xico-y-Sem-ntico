%option noyywrap

%{
    #include <stdio.h>
    #define TIPO_DATO 1
    #define IDENTIFICADOR 2
    #define CONST_ENTERA 3
    #define CONST_REAL 4
    #define STRUC_CONTROL 5
    #define CONST_OCTAL 6
    #define CONST_HEXADECIMAL 7
    #define CONST_CARACTER 8
    #define ERROR 9

    #define IF 10
    #define ELSE 11
    #define WHILE 12
    #define FOR 13
    #define RETURN 14
    #define SWITCH 15
    #define BREAK 16
    #define CONTINUE 17
    #define DO 18

    #define IGUAL 19
    #define DISTINTO 20
    #define MAYOR_IGUAL 21
    #define MENOR_IGUAL 22
    #define AND 23
    #define OR 24
    #define INCREMENTO 25
    #define DECREMENTO 26
    
%}


DIGITO_DECIMAL [0-9]
DIGITO_OCTAL [0-7]
DIGITO_HEXADECIMAL [0-9a-fA-F]
LETRAS [a-zA-Z_]
LETRAS_Y_DIGITOS_AFTER [a-zA-Z0-9_]

%% 

"int"|"float"|"double"|"char"|"void"|"short"|"long"|"signed"|"unsigned"|"long int"|"short int"|"signed int"|"unsigned int"|"long long"|"unsigned long"|"unsigned short"|"long double" {
    printf("Tipo de dato: %s\n", yytext); 
    return TIPO_DATO; 
}

"if"        { printf("Palabra reservada: %s\n", yytext); return IF; }
"else"      { printf("Palabra reservada: %s\n", yytext); return ELSE; }
"while"     { printf("Palabra reservada: %s\n", yytext); return WHILE; }
"for"       { printf("Palabra reservada: %s\n", yytext); return FOR; }
"return"    { printf("Palabra reservada: %s\n", yytext); return RETURN; }
"switch"    { printf("Palabra reservada: %s\n", yytext); return SWITCH; }
"break"     { printf("Palabra reservada: %s\n", yytext); return BREAK; }
"continue"  { printf("Palabra reservada: %s\n", yytext); return CONTINUE; }
"do"        { printf("Palabra reservada: %s\n", yytext); return DO; }


{LETRAS}{LETRAS_Y_DIGITOS_AFTER}* {
    printf("Identificador: %s\n", yytext);
    return IDENTIFICADOR;
}

0{DIGITO_OCTAL}+ {
    printf("Constante entera octal: %s\n", yytext);
    return CONST_OCTAL;
}
0[xX]{DIGITO_HEXADECIMAL}+ {
    printf("Constante entera hexadecimal: %s\n", yytext);
    return CONST_HEXADECIMAL;
}
'(\\.|[^\\'])' {
    printf("Constante carácter: %s\n", yytext);
    return CONST_CARACTER;
}

{DIGITO_DECIMAL}+\.{DIGITO_DECIMAL}+ {
    printf("Constante real: %s\n", yytext);
    return CONST_REAL;
}

{DIGITO_DECIMAL}+ {
    printf("Constante entera: %s\n", yytext);
    return CONST_ENTERA;
}

\"[^\"\n]*\" {
    printf("Cadena literal: %s\n", yytext);
    return '"';
}


"(" { printf("Parentesis abierto: %s\n", yytext); return '('; }
")" { printf("Parentesis cerrado: %s\n", yytext); return ')'; }
"{" { printf("Llave abierta: %s\n", yytext); return '{'; }
"}" { printf("Llave cerrada: %s\n", yytext); return '}'; }
";" { printf("Punto y coma: %s\n", yytext); return ';'; }
"=" { printf("Operador de asignacion: %s\n", yytext); return '='; }
"*" { printf("Operador puntero: %s\n", yytext); return '*'; }
"-" { printf("Operador resta: %s\n", yytext); return '-'; }
"+" { printf("Operador suma: %s\n", yytext); return '+'; }
"==" { printf("Operador comparación igual: %s\n", yytext); return IGUAL; }
"!=" { printf("Operador comparación distinto: %s\n", yytext); return DISTINTO; }
"<" { printf("Operador menor que: %s\n", yytext); return '<'; }
">" { printf("Operador mayor que: %s\n", yytext); return '>'; }
"<=" { printf("Operador menor o igual: %s\n", yytext); return MENOR_IGUAL; }
">=" { printf("Operador mayor o igual: %s\n", yytext); return MAYOR_IGUAL; }
"&&" { printf("Operador AND lógico: %s\n", yytext); return AND; }
"||" { printf("Operador OR lógico: %s\n", yytext); return OR; }
"," { printf("Coma: %s\n", yytext); return ','; }
"." { printf("Punto: %s\n", yytext); return '.'; }
"#" { printf("Caracter hash: %s\n", yytext); return '#'; }
"[" { printf("Corchete abierto: %s\n", yytext); return '['; }
"]" { printf("Corchete cerrado: %s\n", yytext); return ']'; }
"++" { printf("Operador incremento: %s\n", yytext); return INCREMENTO; }
"--" { printf("Operador decremento: %s\n", yytext); return DECREMENTO; }
"/" { printf("Operador division: %s\n", yytext); return '/'; }
"%" { printf("Operador modulo: %s\n", yytext); return '%'; }


[ \t]+ { /* ignorar espacios y tabs */ }
\n { /* ignorar salto de línea */ }

. { printf("Error lexico - caracter no reconocido: %s\n", yytext); 
return ERROR; }


%%

int main() {
    int token;
    while ((token = yylex()) != 0) {
    }
    return 0;
}