# Trabajo Práctico N°3
# Grupo 01 - K2151
## Integrantes 
* Otero María Mercedes 
* Toto Leandro
* Vallazza Luca Danilo
* Istepanoglu Tiziana 
* Paye Michael

### Introducción
Este trabajo implementa un **analizador léxico** simplificado para el lenguaje C utilizando la herramienta **Flex**.  
El objetivo de esta primera etapa del proyecto es reconocer categorías léxicas básicas (constantes, identificadores, palabras reservadas, literales cadena, caracteres de puntuación y operadores de C),  detectar errores y mostrar mensajes descriptivos en consola.  
Además realizamos el MakeFile que construye la aplicación final tanto para Windows como para
Unix (Linux/Mac).

### Desarrollo
Se debe agregar una sección que explique claramente cuáles son
los comandos para construir el ejecutable y cuales son los comandos para testearlo.

### Casos de prueba 
Se incluyen los archivos de prueba **test_valido.c** y **test_error.c** , los cuales que mostrarán por consola los errores detectados y los tokens reconocidos. 

**test_valido.c**
```c
int x=42;
int octal=0447;
int hexadecimal=0x5;
int real=3.14;
double enteraDecimal=999999999109999;
```
(Se reconocen correctamente las constantes enteras, octales, hexadecimales, reales y declaraciones de variables).

**test_error.c**
```c
int 123abc;
int %var;
```
(En este se detectan los posibles errores léxicos que puede haber: identificadores invalidos y caracteres no reconocidos).  
En este caso, se imprime un mensaje detallado especificando el tipo de error y el lexema que lo produjo, incluyendo la ubicación en el archivo. Luego de reportar el error, el analizador finaliza su ejecución.

### Conclusiones
La implementación realizada constituye la primera etapa del proyecto. Logramos  desarrollar un analizador léxico capaz de reconocer un conjunto amplio de categorías del lenguaje C y de reportar errores léxicos de manera detallada.   
El uso de Flex simplifica la construcción, mientras que la utilización de un Makefile facilita la compilación y las pruebas en distintos entornos operativos.  
A partir de este punto, en las próximas etapas del proyecto se integrará **Bison** para abordar las validaciones sintácticas y semánticas.

