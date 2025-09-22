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
%}
DIGITO_DECIMAL [0-9]
DIGITO_OCTAL [0-7]
DIGITO_HEXADECIMAL [0-9a-fA-F]
LETRAS [a-zA-Z_]
LETRAS_Y_DIGITOS_AFTER [a-zA-Z0-9_]
%%
"int"|"double"|"float"|"char"|"unsigned"|"unsigned int" { 
    printf("Tipo de dato: %s\n", yytext); 
    return TIPO_DATO; 
}

"if"|"else"|"while"|"for"|"return"|"switch"|"break"|"continue"|"do" {
    printf("Palabra reservada (estructura de control): %s\n", yytext);
    return STRUC_CONTROL;
}

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
'\''(\\.|[^\\'])'\'' {
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

{DIGITO_DECIMAL}+{LETRAS}{LETRAS_Y_DIGITOS_AFTER}* {
    printf("Error lexico - identificador invalido (empieza con numero): %s\n", yytext);
    return ERROR; 
}

\"([^\"\n]|\\.)* {
    printf("Error léxico: cadena sin cerrar -> %s\n", yytext);
    return ERROR;
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
"==" { printf("Operador comparación igual: %s\n", yytext); return 0; }
"&&" { printf("Operador AND lógico: %s\n", yytext); return 0; }


[ \t]+ { /* ignorar espacios y tabs */ }
\n { /* ignorar salto de línea */ }

. { printf("Error lexico - caracter no reconocido: %s\n", yytext); 
return ERROR; }


%%

int main() {
    int token;
    while ((token = yylex()) != 0) {
        /* Continue processing tokens */
    }
    return 0;
}
