# Trabajo Práctico N°4
# Grupo 01 - K2151
## Integrantes
* Otero María Mercedes
* Toto Leandro
* Vallazza Luca Danilo
* Istepanoglu Tiziana
* Paye Michael

## Descripción general
En este trabajo se desarrolla la tabla de simbolos con algunas limitaciones para realizar el analisis semántico utilizando bison.

La tabla de simbolos se encarga de trackear las diferentes variables, su tipo, su valor y su nombre. De esta manera puede detectar un error en caso de realizarse operaciones entre variables de distintos simbolos.

<!-- Descomentar cuando se haga -->
Además, se lleva un registro el nombre de las funciones, la cantidad de parametros y los tipos, para detectar llamadas a funciones con errores de tipos o con menos parametros de los debidos.

Cuando se intenta declarar un nuevo simbolo o funcion, la tabla de simbolos verificará que no haya otro identificador con el mismo nombre. (EJ. en caso de haber una funcion llamada sumar, no puede haber una declaración de una variable llamada sumar).

La tabla de simbolos tambien lleva registro del scope de las variables, pero para simplificar el trabajo, no será implementado.



## Requisitos


## Estructura del proyecto
- `tabla_simbolos.c` - Define la lógica de la tabla de simbolos. Implementa las funciones `insertarSimbolo` y `actualizarValor` y las funciones auxiliares `mostrarTabla` y `existeSimbolo. 

- `bison.y`: gramática Bison; define tokens, precedencias y producciones (declaraciones, asignaciones, expresiones, literales).

## Uso

## Alcance y limitaciones

## Desarrollo


