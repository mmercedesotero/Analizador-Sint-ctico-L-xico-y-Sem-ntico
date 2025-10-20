%option noyywrap

%{
    #include <stdlib.h>
    #include "bison.tab.h"
    #include <string.h>

void actualizarLocationsNuevaFila() {
    yylloc.first_column = yylloc.last_column = 0;
    yylloc.first_line += 1;
    yylloc.last_line += 1;
}

void actualizarLocationsColumnas() {
    yylloc.first_column = yylloc.last_column;
    yylloc.last_column += yyleng;
}

extern int errorCount;
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

"if"        { yylval.str = strdup(yytext); return IF; }
"else"      { yylval.str = strdup(yytext); return ELSE; }
"while"     { yylval.str = strdup(yytext); return WHILE; }
"for"       { yylval.str = strdup(yytext); return FOR; }
"return"    { yylval.str = strdup(yytext); return RETURN; }
"switch"    { yylval.str = strdup(yytext); return SWITCH; }
"break"     { yylval.str = strdup(yytext); return BREAK; }
"continue"  { yylval.str = strdup(yytext); return CONTINUE; }
"do"        { yylval.str = strdup(yytext); return DO;} 
"sizeof"    { yylval.str = strdup(yytext);return SIZEOF; } 
"case"      { yylval.str = strdup(yytext);return CASE;}
"default"   { yylval.str = strdup(yytext);return DEFAULT;}

0{DIGITO_OCTAL}+ {
    return CONST_OCTAL;
}
0[xX]{DIGITO_HEXADECIMAL}+ {
    return CONST_HEXADECIMAL;
}
'(\\.|[^\\'])' {
    return CONST_CARACTER;
}
{DIGITO_DECIMAL}+\.{DIGITO_DECIMAL}+ {
    yylval.real = atof(yytext);
    return CONST_REAL;
}
{DIGITO_DECIMAL}+ {
    yylval.num = atoi(yytext);
    return CONST_ENTERA;
}

{LETRAS}{LETRAS_Y_DIGITOS_AFTER}* {
    actualizarLocationsColumnas();
    yylval.str = strdup(yytext);
    return IDENTIFICADOR;
}
"(" { return '('; }
")" { return ')'; }
"{" { return '{'; }
"}" { return '}'; }
";" { return ';'; }
":" { return ':'; }
"=" { return ASIGNACION; }
"*" { return '*'; }
"-" { return '-'; }
"+" { return '+'; }
"==" { return IGUAL; }
"!=" { return DISTINTO; }
"<" { return '<'; }
">" { return '>'; }
"<=" { return MENOR_IGUAL; }
">=" { return MAYOR_IGUAL; }
"+=" { return MAS_IGUAL; }
"&&" { return AND; }
"||" { return OR; }
"," { return ','; }
"." { return '.'; }
"[" { return '['; }
"]" { return ']'; }
"++" { return INCREMENTO; }
"--" { return DECREMENTO; }
"/" { return '/'; }
"%" { return '%'; }
"&" { return '&'; }
"!" { return '!'; }





";" {
    actualizarLocationsColumnas();
    return ';';
}
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
    fprintf(stderr, "Error lexico <linea:%d columna:%d> Caracter no valido: '%s'\n", yylloc.first_line, yylloc.first_column, yytext);
    errorCount++;
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
        fprintf(stderr, "Error lexico <linea:%d columna:%d> Secuencia no valida: %s (a continuacion del caracter no valido)\n", yylloc.first_line, yylloc.first_column, yytext);
        BEGIN(INITIAL);
    }
}

%%
