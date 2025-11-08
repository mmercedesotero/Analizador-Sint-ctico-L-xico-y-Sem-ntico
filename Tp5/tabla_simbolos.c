#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tabla_simbolos.h"

extern int erroresSintacticos;
extern int erroresLexicos;
extern int erroresSemanticos;
extern FILE *yyin;
extern int yylineno;

#define MAX_SIMBOLOS 100
#define MAX_FUNCIONES 50


Variable listaVariables[MAX_SIMBOLOS];
int cantidadSimbolos = 0;


static Funcion listaFunciones[MAX_FUNCIONES];
static int cantidadFunciones = 0;

typedef struct {
    Variable* listaVariables;
    Funcion* listaFunciones;
} TablaSimbolos;

TablaSimbolos tablaSimbolos;

void inicializarTablaSimbolos() {
    tablaSimbolos.listaVariables = listaVariables;
    tablaSimbolos.listaFunciones = listaFunciones;
}

int verificarTiposOperacion(const char* op, const char* tipoIzq, const char* tipoDer, char** tipoResultado) {
    // ejemplo simple: si ambos int -> int; int+float -> float si permites coerción
    if (strcmp(tipoIzq, "int")==0 && strcmp(tipoDer, "int")==0) {
        *tipoResultado = "int";
        return ERR_OK;
    }
    if ((strcmp(tipoIzq,"int")==0 && strcmp(tipoDer,"float")==0)
     || (strcmp(tipoIzq,"float")==0 && strcmp(tipoDer,"int")==0)
     || (strcmp(tipoIzq,"float")==0 && strcmp(tipoDer,"float")==0)) {
        *tipoResultado = "float";
        return ERR_OK;
    }
    // añadir más reglas según tu lenguaje
    return ERR_INVALIDO;
}

int insertarSimbolo(char* nombre, char* tipo, char* valor, int linea) {
    if (!nombre) {
        fprintf(stderr, "Error semantico: insertarSimbolo llamado con nombre nulo\n");
        erroresSemanticos++;
        return ERR_INVALIDO;
    }

    /* Verificar que no exista un varaible con el mismo nombre */
    for (int i = 0; i < cantidadSimbolos; i++) {
        if (listaVariables[i].nombre && strcmp(listaVariables[i].nombre, nombre) == 0) {
            fprintf(stderr, "Error semantico: identificador '%s' ya declarado como variable en linea %d\n", nombre, listaVariables[i].linea);
            erroresSemanticos++;
            return ERR_DUPLICADO;
        }
    }

    /* Verificar que no exista una funcion con el mismo nombre */
    for (int i = 0; i < cantidadFunciones; ++i) {
        if (listaFunciones[i].nombre && strcmp(listaFunciones[i].nombre, nombre) == 0) {
            fprintf(stderr, "Error semantico: identificador '%s' ya declarado como funcion\n", nombre);
            erroresSemanticos++;
            return ERR_DUPLICADO;
        }
    }

    if (cantidadSimbolos >= MAX_SIMBOLOS) {
        fprintf(stderr, "Error semantico: limite de simbolos alcanzado (%d)\n", MAX_SIMBOLOS);
        erroresSemanticos++;
        return ERR_LLENA;
    }

    listaVariables[cantidadSimbolos].nombre = strdup(nombre);
    listaVariables[cantidadSimbolos].tipo = tipo ? strdup(tipo) : NULL;
    listaVariables[cantidadSimbolos].valor = valor ? strdup(valor) : NULL;
    listaVariables[cantidadSimbolos].linea = linea;
    cantidadSimbolos++;
    return ERR_OK;
} // CONTROL DOBLE DECLARACION

int existeSimbolo(const char* nombre) {
    for (int i = 0; i < cantidadSimbolos; i++) {
        if (strcmp(listaVariables[i].nombre, nombre) == 0) {
            return 1;
        }
    }
    return 0;
}

int existeIdentificador(const char* nombre) {
    if (!nombre) return ERR_INVALIDO;
    /* Buscar en variables */
    for (int i = 0; i < cantidadSimbolos; i++) {
        if (listaVariables[i].nombre && strcmp(listaVariables[i].nombre, nombre) == 0) {
            return ERR_OK;
        }
    }
    /* Buscar en funciones */
    for (int i = 0; i < cantidadFunciones; ++i) {
        if (listaFunciones[i].nombre && strcmp(listaFunciones[i].nombre, nombre) == 0) {
            return ERR_OK;
        }
    }
    return ERR_INVALIDO;
}

void actualizarValor(const char* nombre, const char* nuevoValor, int linea) {
    for (int i = 0; i < cantidadSimbolos; i++) {
        if (strcmp(listaVariables[i].nombre, nombre) == 0) {
            if (listaVariables[i].valor) free(listaVariables[i].valor);
            listaVariables[i].valor = strdup(nuevoValor ? nuevoValor : "-");
            listaVariables[i].linea = linea;
            return;
        }
    }
    printf("Error semantico: variable '%s' usada sin declarar (linea %d)\n", nombre, linea);
<<<<<<< HEAD
    erroresSemanticos++;
=======
>>>>>>> 6caf74b5989bc2ecf3a154db5f6dc321f198789f
} // CONTROL TIPO DE DATO

void mostrarTabla(const char* filename) {
    if (filename) {
        printf("\nTabla de simbolos (%s):\n", filename);
    } else {
        printf("\nTabla de simbolos:\n");
    }
    for (int i = 0; i < cantidadSimbolos; i++) {
        printf("Nombre: %s, Tipo: %s, Valor: %s, Linea: %d\n",
               listaVariables[i].nombre,
               listaVariables[i].tipo,
               listaVariables[i].valor,
               listaVariables[i].linea);
    }
}

/* ------------------ LISTA DE FUNCIONES  ------------------ */

int contarFunciones() {
    return cantidadFunciones;
}

static Funcion* buscarFuncionPorNombre(const char* nombre) {
    if (!nombre) return NULL;
    for (int i = 0; i < cantidadFunciones; ++i) {
        if (listaFunciones[i].nombre && strcmp(listaFunciones[i].nombre, nombre) == 0) {
            return &listaFunciones[i];
        }
    }
    return NULL;
}

static void liberarParametros(Parametro* params, int cantidad) {
    if (!params) return;
    for (int i = 0; i < cantidad; ++i) {
        if (params[i].nombre) free(params[i].nombre);
        if (params[i].tipo) free(params[i].tipo);
    }
    free(params);
}

int insertarFuncion(char* nombre, char* tipo, char* valor, int cantidadParametros, Parametro* parametros) {
    if (!nombre) {
        fprintf(stderr, "Error semantico: insertarFuncion llamado con nombre nulo\n");
        erroresSemanticos++;
        return ERR_INVALIDO;
    }

    // TODO: Verificar que no exista una funcion con el mismo nombre

    /* Verificar que no exista un simbolo con el mismo nombre */
    for (int i = 0; i < cantidadSimbolos; ++i) {
        if (listaVariables[i].nombre && strcmp(listaVariables[i].nombre, nombre) == 0) {
            fprintf(stderr, "Error semantico: identificador '%s' ya declarado como variable (no se puede declarar funcion)\n", nombre);
            erroresSemanticos++;
            return ERR_DUPLICADO;
        }
    }

    Funcion* existente = buscarFuncionPorNombre(nombre);
    if (existente) {
        /* Actualizar registro existente: liberar campos previos y copiar nuevos */
        if (existente->nombre) free(existente->nombre);
        if (existente->tipo) free(existente->tipo);
        if (existente->valor) free(existente->valor);
        liberarParametros(existente->parametros, existente->cantidadParametros);

        existente->nombre = strdup(nombre);
        existente->tipo = tipo ? strdup(tipo) : NULL;
        existente->valor = valor ? strdup(valor) : NULL;
        existente->cantidadParametros = cantidadParametros;
        existente->parametros = NULL;
        if (cantidadParametros > 0 && parametros) {
            existente->parametros = malloc(sizeof(Parametro) * cantidadParametros);
            for (int i = 0; i < cantidadParametros; ++i) {
                existente->parametros[i].nombre = parametros[i].nombre ? strdup(parametros[i].nombre) : NULL;
                existente->parametros[i].tipo = parametros[i].tipo ? strdup(parametros[i].tipo) : NULL;
            }
        }
        return ERR_OK;
    }

    if (cantidadFunciones >= MAX_FUNCIONES) {
        fprintf(stderr, "Error tabla de simbolos: limite de funciones alcanzado (%d)\n", MAX_FUNCIONES);
        return ERR_LLENA;
    }

    Funcion* f = &listaFunciones[cantidadFunciones];
    f->nombre = strdup(nombre);
    f->tipo = tipo ? strdup(tipo) : NULL;
    f->valor = valor ? strdup(valor) : NULL;
    f->cantidadParametros = cantidadParametros;
    f->parametros = NULL;

    if (cantidadParametros > 0 && parametros) {
        f->parametros = malloc(sizeof(Parametro) * cantidadParametros);
        for (int i = 0; i < cantidadParametros; ++i) {
            f->parametros[i].nombre = parametros[i].nombre ? strdup(parametros[i].nombre) : NULL;
            f->parametros[i].tipo = parametros[i].tipo ? strdup(parametros[i].tipo) : NULL;
        }
    }
    cantidadFunciones++;
    return ERR_OK;
}

// TODO: Agregarle la verificacion de tipo de datos del parametro
int verificarLlamadaFuncion(const char* nombre, Parametro* argumentos, int cantidadArgs) {
    if (!nombre) return 0;
    Funcion* f = buscarFuncionPorNombre(nombre);
    if (!f) {
        fprintf(stderr, "Error semantico: llamada a funcion desconocida '%s'\n", nombre);
        erroresSemanticos++;
        return 0;
    }
    if (f->cantidadParametros != cantidadArgs) {
        fprintf(stderr, "Error semantico: llamada a '%s' con %d argumentos, pero la funcion espera %d\n", nombre, cantidadArgs, f->cantidadParametros);
        erroresSemanticos++;
        return 0;
    }

    /* Verificar tipos en orden. Se espera que `argumentos[i].tipo` contenga
       el tipo del i-ésimo argumento pasado en la llamada. Se usa strcmp para
       comparar nombres de tipos exactos. */
    for (int i = 0; i < cantidadArgs; ++i) {
        const char* tipoEsperado = f->parametros && f->parametros[i].tipo ? f->parametros[i].tipo : NULL;
        const char* tipoRecibido = argumentos && argumentos[i].tipo ? argumentos[i].tipo : NULL;

        if (tipoEsperado == NULL && tipoRecibido == NULL) {
            /* ambos desconocidos, aceptamos pero advertimos */
            fprintf(stderr, "Error semantico: tipo del parametro %d para funcion '%s' no especificado\n", i+1, nombre);
            erroresSemanticos++;
            continue;
        }

        if (tipoEsperado == NULL || tipoRecibido == NULL) {
            fprintf(stderr, "Error semantico: no coinciden los tipos de los argumentos en llamada a '%s' para parametro %d: esperado '%s', recibido '%s'\n",
                    nombre, i+1, tipoEsperado ? tipoEsperado : "(sin especificar)", tipoRecibido ? tipoRecibido : "(sin especificar)");
            erroresSemanticos++;
            return 0;
        }

        if (strcmp(tipoEsperado, tipoRecibido) != 0) {
            fprintf(stderr, "Error semantico: tipo incompatible para parametro %d en llamada a '%s': esperado '%s', recibido '%s'\n",
                    i+1, nombre, tipoEsperado, tipoRecibido);
            erroresSemanticos++;
            return 0;
        }
    }

    return 1;
}

void mostrarFunciones() {
    printf("\nFunciones registradas: %d\n", cantidadFunciones);
    for (int i = 0; i < cantidadFunciones; ++i) {
        Funcion* f = &listaFunciones[i];
        printf("- %s : %s (valor: %s)\n", f->nombre ? f->nombre : "(sin nombre)", f->tipo ? f->tipo : "(sin tipo)", f->valor ? f->valor : "(sin valor)");
        printf("  parametros: %d\n", f->cantidadParametros);
        for (int p = 0; p < f->cantidadParametros; ++p) {
            Parametro* pr = &f->parametros[p];
            printf("    - %s : %s\n", pr->nombre ? pr->nombre : "(sin nombre)", pr->tipo ? pr->tipo : "(sin tipo)");
        }
    }
}


