#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tabla_simbolos.h"

#define MAX_SIMBOLOS 100
Simbolo tablaSimbolos[MAX_SIMBOLOS];
int cantidadSimbolos = 0;

void insertarSimbolo(char* nombre, char* tipo, char* valor, int linea) {
    for (int i = 0; i < cantidadSimbolos; i++) {
        if (strcmp(tablaSimbolos[i].nombre, nombre) == 0) {
            printf("Error: variable '%s' ya declarada en linea %d\n", nombre, tablaSimbolos[i].linea);
            return;
        }
    }
    tablaSimbolos[cantidadSimbolos].nombre = strdup(nombre);
    tablaSimbolos[cantidadSimbolos].tipo = strdup(tipo);
    tablaSimbolos[cantidadSimbolos].valor = strdup(valor);
    tablaSimbolos[cantidadSimbolos].linea = linea;
    cantidadSimbolos++;
} // CONTROL DOBLE DECLARACION

int existeSimbolo(const char* nombre) {
    for (int i = 0; i < cantidadSimbolos; i++) {
        if (strcmp(tablaSimbolos[i].nombre, nombre) == 0) {
            return 1;
        }
    }
    return 0;
}

void actualizarValor(const char* nombre, const char* nuevoValor, int linea) {
    for (int i = 0; i < cantidadSimbolos; i++) {
        if (strcmp(tablaSimbolos[i].nombre, nombre) == 0) {
            if (tablaSimbolos[i].valor) free(tablaSimbolos[i].valor);
            tablaSimbolos[i].valor = strdup(nuevoValor ? nuevoValor : "-");
            tablaSimbolos[i].linea = linea;
            return;
        }
    }
    printf("Error: variable '%s' usada sin declarar (linea %d)\n", nombre, linea);
} // CONTROL TIPO DE DATO





void mostrarTabla() {
    printf("\nTabla de simbolos:\n");
    for (int i = 0; i < cantidadSimbolos; i++) {
        printf("Nombre: %s, Tipo: %s, Valor: %s, Linea: %d\n",
               tablaSimbolos[i].nombre,
               tablaSimbolos[i].tipo,
               tablaSimbolos[i].valor,
               tablaSimbolos[i].linea);
    }
}
