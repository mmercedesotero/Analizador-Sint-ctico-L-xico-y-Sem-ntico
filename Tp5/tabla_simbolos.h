#ifndef TABLA_SIMBOLOS_H
#define TABLA_SIMBOLOS_H

/* Tipos auxiliares compartidos entre el lexer y el parser */
typedef struct {
    char* nombre;
    char* valor;
} Variable;

typedef struct {
    Variable* variables;
    int cantidad;
} ListaVariables;

typedef struct {
    char* nombre;
    char* tipo;
    char* valor;
    int linea;
} Simbolo;

void insertarSimbolo(char* nombre, char* tipo, char* valor, int linea);
int existeSimbolo(const char* nombre);
void actualizarValor(const char* nombre, const char* nuevoValor, int linea);
void mostrarTabla();

#endif
