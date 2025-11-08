#ifndef TABLA_SIMBOLOS_H
#define TABLA_SIMBOLOS_H


typedef struct {
    char* nombre;
    char* tipo;
    char* valor;
    int linea;
} Variable;

typedef struct {
    Variable* variables;
    int cantidad;
} ListaVariables;

typedef struct {
    char* tipo;
    char* nombre;
} Parametro;


typedef struct{
    char* nombre;
    char* tipo;
    char* valor;
    int cantidadParametros;
    Parametro* parametros;
} Funcion;



/* Codigos de retorno para operaciones sobre la tabla */
#define ERR_OK 0
#define ERR_DUPLICADO 1
#define ERR_LLENA 2
#define ERR_INVALIDO 3

/* Extras */
int verificarTiposOperacion(const char* op, const char* tipoIzq, const char* tipoDer, char** tipoResultado);

/* Gestión de símbolos */
int insertarSimbolo(char* nombre, char* tipo, char* valor, int linea);
int existeSimbolo(const char* nombre);
/* Verifica si un identificador existe como variable o funcion.
    Devuelve ERR_OK si existe (variable o funcion), ERR_INVALIDO si no existe. */
int existeIdentificador(const char* nombre);
void actualizarValor(const char* nombre, const char* nuevoValor, int linea);
void mostrarTabla(const char* filename);

/* Gestión de funciones */
int insertarFuncion(char* nombre, char* tipo, char* valor, int cantidadParametros, Parametro* parametros);
int verificarLlamadaFuncion(const char* nombre, Parametro* argumentos, int cantidadArgs);
void mostrarFunciones();
int contarFunciones();

#endif
