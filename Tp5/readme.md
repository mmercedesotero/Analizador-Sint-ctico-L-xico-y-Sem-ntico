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

La tabla de simbolos se encarga de trackear las diferentes variables, su tipo, su valor y su nombre. De esta manera puede detectar un error en caso de realizarse operaciones entre variables de distintos tipos.

<!-- Descomentar cuando se haga -->
Además, se lleva un registro el nombre de las funciones, la cantidad de parametros y los tipos, para detectar llamadas a funciones con errores de tipos o con menos parametros de los debidos.

Cuando se intenta declarar un nueva variable o funcion, la tabla de simbolos verificará que no haya otro identificador con el mismo nombre. (EJ. en caso de haber una funcion llamada sumar, no puede haber una declaración de una variable llamada sumar).

La tabla de simbolos tambien lleva registro del scope de las variables, pero para simplificar el trabajo, no será implementado.

Además, la tabla de simbolos tiene una lista de arrays, la cual tampoco fue implementada para no complejizar el trabajo.



## Requisitos


## Estructura del proyecto
- `tabla_simbolos.c` / `tabla_simbolos.h`: gestión de variables y funciones (insertar, buscar, actualizar, verificar llamadas, códigos de error).
- `bisonCopia.y` (o `bison.y`): gramática y acciones; aquí se invocan las funciones de la tabla para el análisis semántico.
- `Makefile`: compila el parser y el binario.
- `test_valido.c`, `test_error.c`: ejemplos de entrada para probar el parser y las comprobaciones semánticas.


## Alcance y limitaciones
### Alcance 
Tabla de simbolos con **lista de funciones** y con **lista de variables**

**Lista de variables**
Almacena el nombre de la variable, el tipo, el valor y la linea donde fue declarada para poder hacer el seguimiento de las declaraciones, para evitar que se usen variables no declaradas y que no se vuelvan a declarar las ya existentes

**Lista de funciones**
Almacena el nombre de la funcion, sus parametros y los tipos de los parametros para poder revisar que las llamadas a las funciones se estén haciendo de forma correcta y que los parametros tengan los tipos correspondientes

### Limitaciones
Algunas de las caracteristicas que utiliza la tabla de simbolos en la vida real y que no se implementaron en este tp para no complejizarlo son:
* No hay seguimiento de scope de variables
* No hay lista de arrays
<!-- * No hay revision de tipos en operaciones -->
* No hay revision de tipo de retorno en funciones


## Uso