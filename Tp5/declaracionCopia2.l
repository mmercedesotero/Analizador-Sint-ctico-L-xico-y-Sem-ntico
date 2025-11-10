%option noyywrap

%{
#include <stdlib.h>
    #include <stdio.h>
    #include "tabla_simbolos.h"
    #include "bisonCopia.tab.h"
    #include <string.h>

extern const char* current_file;

void actualizarLocationsNuevaFila() {
    yylloc.first_column = yylloc.last_column = 0;
    yylloc.first_line += 1;
    yylloc.last_line += 1;
}

void actualizarLocationsColumnas() {
    yylloc.first_column = yylloc.last_column;
    yylloc.last_column += yyleng;
}

extern int erroresLexicos;
%}


%x tokenNoReconocido
DIGITO_DECIMAL [0-9]
DIGITO_OCTAL [0-7]
DIGITO_HEXADECIMAL [0-9a-fA-F]
LETRAS [a-zA-Z_]
LETRAS_Y_DIGITOS_AFTER [a-zA-Z0-9_]
%%

"int"|"float"|"double"|"char"|"void"|"short"|"long"|"signed"|"unsigned" {
    actualizarLocationsColumnas();
    yylval.str = strdup(yytext);
    return TIPO_DATO; 
}

"if"        { actualizarLocationsColumnas(); yylval.str = strdup(yytext); return IF; }
"else"      { actualizarLocationsColumnas(); yylval.str = strdup(yytext); return ELSE; }
"while"     { actualizarLocationsColumnas(); yylval.str = strdup(yytext); return WHILE; }
"for"       { actualizarLocationsColumnas(); yylval.str = strdup(yytext); return FOR; }
"return"    { actualizarLocationsColumnas(); yylval.str = strdup(yytext); return RETURN; }
"switch"    { actualizarLocationsColumnas(); yylval.str = strdup(yytext); return SWITCH; }
"break"     { actualizarLocationsColumnas(); yylval.str = strdup(yytext); return BREAK; }
"continue"  { actualizarLocationsColumnas(); yylval.str = strdup(yytext); return CONTINUE; }
"do"        { actualizarLocationsColumnas(); yylval.str = strdup(yytext); return DO;} 
"sizeof"    { actualizarLocationsColumnas(); yylval.str = strdup(yytext);return SIZEOF; } 
"case"      { actualizarLocationsColumnas(); yylval.str = strdup(yytext);return CASE;}
"default"   { actualizarLocationsColumnas(); yylval.str = strdup(yytext);return DEFAULT;}

0{DIGITO_OCTAL}+ {
    actualizarLocationsColumnas();
    yylval.str = strdup(yytext);
    return CONST_OCTAL;
}
0[xX]{DIGITO_HEXADECIMAL}+ {
    actualizarLocationsColumnas();
    yylval.str = strdup(yytext);
    return CONST_HEXADECIMAL;
}
'(\\.|[^\\'])' {
    actualizarLocationsColumnas();
    yylval.str = strdup(yytext);
    return CONST_CARACTER;
}
\"(\\.|[^\\\"])*\" {
    actualizarLocationsColumnas();
    yylval.str = strdup(yytext);
    return LITERAL_CADENA;
}
{DIGITO_DECIMAL}+\.{DIGITO_DECIMAL}+ {
    actualizarLocationsColumnas();
    yylval.real = atof(yytext);
    return CONST_REAL;
}
{DIGITO_DECIMAL}+ {
    actualizarLocationsColumnas();
    yylval.num = atoi(yytext);
    return CONST_ENTERA;
}

{LETRAS}{LETRAS_Y_DIGITOS_AFTER}* {
    actualizarLocationsColumnas();
    yylval.str = strdup(yytext);
    return IDENTIFICADOR;
}
"(" { actualizarLocationsColumnas(); return '('; }
")" { actualizarLocationsColumnas(); return ')'; }
"{" { actualizarLocationsColumnas(); return '{'; }
"}" { actualizarLocationsColumnas(); return '}'; }
";" { actualizarLocationsColumnas(); return ';'; }
":" { actualizarLocationsColumnas(); return ':'; }
"=" { actualizarLocationsColumnas(); return ASIGNACION; }
"*" { actualizarLocationsColumnas(); return '*'; }
"-" { actualizarLocationsColumnas(); return '-'; }
"+" { actualizarLocationsColumnas(); return '+'; }
"==" { actualizarLocationsColumnas(); return IGUAL; }
"!=" { actualizarLocationsColumnas(); return DISTINTO; }
"<" { actualizarLocationsColumnas(); return '<'; }
">" { actualizarLocationsColumnas(); return '>'; }
"<=" { actualizarLocationsColumnas(); return MENOR_IGUAL; }
">=" { actualizarLocationsColumnas(); return MAYOR_IGUAL; }
"+=" { actualizarLocationsColumnas(); return MAS_IGUAL; }
"&&" { actualizarLocationsColumnas(); return AND; }
"||" { actualizarLocationsColumnas(); return OR; }
"," { actualizarLocationsColumnas(); return ','; }
"." { actualizarLocationsColumnas(); return '.'; }
"[" { actualizarLocationsColumnas(); return '['; }
"]" { actualizarLocationsColumnas(); return ']'; }
"++" { actualizarLocationsColumnas(); return INCREMENTO; }
"--" { actualizarLocationsColumnas(); return DECREMENTO; }
"/" { actualizarLocationsColumnas(); return '/'; }
"%" { actualizarLocationsColumnas(); return '%'; }
"&" { actualizarLocationsColumnas(); return '&'; }
"!" { actualizarLocationsColumnas(); return '!'; }


[" "\t] {
    // comentamos los espacios y tabulaciones para no ensuciar tanto la consola 
    //printf("Caracter: espacio o tabulacion\n");
    actualizarLocationsColumnas();
}
"\n" {
    actualizarLocationsNuevaFila();
}
[^ \t\n] {
    actualizarLocationsColumnas();
    /* Sin prefijo de nombre de archivo */
    fprintf(stderr, "Error lexico: Caracter no valido: '%s' (linea %d, columna %d)\n", yytext, yylloc.first_line, yylloc.first_column);
    erroresLexicos++;
    BEGIN(tokenNoReconocido);
}
<tokenNoReconocido>{
    " "|\t|\n {
        yyless(0); // devuelvo el caracter a yyin
        fprintf(stderr, "a continuacion hay un espacio o tabulacion o salto de linea\n");
        BEGIN(INITIAL);
    }
[^ \t\n]+ {
        actualizarLocationsColumnas();
        /* Sin prefijo de nombre de archivo */
        fprintf(stderr, "Error lexico: Secuencia no valida: %s (a continuacion del caracter no valido) (linea %d, columna %d)\n", yytext, yylloc.first_line, yylloc.first_column);
        BEGIN(INITIAL);
    }
}

%%
