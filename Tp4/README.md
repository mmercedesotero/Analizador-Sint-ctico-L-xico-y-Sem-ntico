# Trabajo Práctico N°4
# Grupo 01 - K2151
## Integrantes 
* Otero María Mercedes 
* Toto Leandro
* Vallazza Luca Danilo
* Istepanoglu Tiziana 
* Paye Michael

### Introducción
Este trabajo implementa un **analizador sintáctico** simplificado para el lenguaje C utilizando la herramienta **Bison** y lo integra con el **analizador léxico** que hicimos en la entregra anterior con **Flex**.
El objetivo de esta etapa del proyecto es reconocer construcciones sintacticas basicas del lenguaje C, validar la correcta formacion de setencias y bloques, y reportar errores sintacticas de manera clara en consola.
Además realizamos el MakeFile para compilar tanto el analizador léxico como el sintáctico, generando un ejecutable unificado.

### Desarrollo
Se construyeron las siguientes partes:
1. Producciones sintácticas: 
    - Definimos las reglas básicas para declaraciones de variables, asignaciones, expresiones aritméticas y literales.
    - Comenzamos con sentencias simples y agregamos gradualmente nuevas producciones.

2. Integración con Flex: 
    - El analizador léxico generado con Flex se conecta con Bison para proveer los tokens. 

3. Makefile adaptado: 
    - Adaptamos las reglas para generar el bison.y y compilarlo junto con el declaracionCopia.l.

4. Casos de prueba: 
    - Se incluyen los archivos de prueba **test_sintaxis_valido.c** y **test_sintaxis_error.c** , los cuales que mostrarán por consola los errores detectados y los tokens reconocidos. 

### Conclusiones
La integración de Flex y Bison permite validar no solo las categorías léxicas sino también la correcta estructura sintáctica del lenguaje C.
Se logró implementar un analizador capaz de reconocer declaraciones, asignaciones y expresiones simples, así como reportar errores sintácticos de manera clara.
El uso de un Makefile adaptado simplifica la compilación y ejecución del proyecto en distintos entornos.
