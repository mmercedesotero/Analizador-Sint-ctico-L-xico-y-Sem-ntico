# Trabajo Práctico N°4
# Grupo 01 - K2151
## Integrantes
* Otero María Mercedes
* Toto Leandro
* Vallazza Luca Danilo
* Istepanoglu Tiziana
* Paye Michael

## Descripción general
El análisis semántico es la etapa del proceso de compilación encargada de validar que las construcciones sintácticamente correctas tengan sentido dentro del contexto del sistema.
En esta última parte del trabajo anual desarrollamos una analizador semántico en C, utilizando Bison, y una tabla de símbolos (con algunas limitaciones) para realizar el análisis semántico y complementar las entregas anteriores, en las que implementamos las herramientas para el análisis léxico y sintáctico, usando también Bison y Flex.
Durante esta etapa verificamos:
- El control de tipos de expresiones y asignaciones 
- La declaración de variables y funciones
- La cantidad y tipo de parámetros en llamadas funciones

Además, como el lenguaje utilizado es C y este es fuertemente tipado, el analizador reporta errores ante operaciones o asignaciones con tipos incompatibles. 

La tabla de símbolos es la estructura central del analizador y se encarga de registrar las variables, su tipo, valor y nombre, para poder detectar errores en caso de realirse operaciones entre variables de distintos tipos. Además, lleva un registro de las funciones declaradas, junto con la cantidad y tipo de parámetros, permitiendo detectar llamadas con errores de tipo o con un número incorrecto de argumentos.
Cuando se intenta declarar un nueva variable o función, verificará que no haya otro identificador con el mismo nombre. (por ejemplo, en caso de haber una funcion llamada sumar, no puede declararse una variable con el mismo nombre).


## Estructura del proyecto
- `tabla_simbolos.c` / `tabla_simbolos.h`: gestión de variables y funciones (insertar, buscar, actualizar, verificar llamadas, códigos de error).
- `bisonCopia.y` (o `bison.y`): gramática y acciones; aquí se invocan las funciones de la tabla para el análisis semántico.
- `Makefile`: compila el parser y el binario.
- `test_valido.c`, `test_error.c`: ejemplos de entrada para probar el parser y las comprobaciones semánticas.

## Compilación y uso con Make
El proyecto incluye un `Makefile` que unifica la experiencia en Windows y Linux.

Targets principales:
- `make` o `make all`: compila el binario y ejecuta ambos tests.
- `make test`: ejecuta `test-valido` y `test-error` (si los archivos existen).
- `make test-valido`: corre el parser sobre `test_valido.c`.
- `make test-error`: corre el parser sobre `test_error.c`.
- `make clean`: limpia binarios, archivos generados por Flex/Bison y temporales de debug.


### Alcance 
El analizador implementa: 
- Control de declaraciones y redefiniciones.
- Validación de tipos en asignaciones y operaciones aritméticas simples.
- Actualización de valores en operaciones de asignación (=, +=, etcétera).
- Tabla de simbolos con **lista de funciones** y con **lista de variables**

**Lista de variables**  
Almacena el nombre de la variable, el tipo, el valor y la línea dónde fue declarada, permitiendo verificar el uso de variables no declaradas, evitar redeclaraciones y mantener actualizados los valores durante las asignaciones.

**Lista de funciones**  
Almacena el nombre de la función, cantidad y tipos de parámetros, para detectar errores en los mismos y validar llamadas a funciones.

### Limitaciones
Para mantener una implementación simple y enfocada en conceptos principales, no se incluyen: 
* Lista de arrays
* Revision de tipo de retorno en funciones.
* Control de ámbitos(scopes): todas las variables, incluidas las declaradas como parámetros de funciones, se registran como variables globales. Esto permite que los parámetros puedan ser accedidos fuera de su definición y que, si existen dos identificadores con el mismo nombre, se produzca una redefinición o sobrescritura.
* Las funciones no se pueden redefinir ni redeclarar. Solo se acepta 1 declaracion por nombre de funcion.

## Uso
Se realizaron pruebas de ejemplo para verificar y en todos los casos el analizador reportó correctamete las aplicaciones correctas y los errores semánticos. 
### test_valido.c 
Incluye declaraciones correctas, asignaciones compatibles, operaciones válidas y funciones con parametros adecuados. 
### test_error.c
Con usos de variables no declaradas, tipos incompatibles y estructuras incompletas.

## Conclusiones 
La implementación de este analizador semantico permitió integrar las tres etapas del proceso de compilación (léxica, sintáctica y semántica) y reforzar la comprensión del rol de la tabla de simbolos como estructura central para esta última validación.