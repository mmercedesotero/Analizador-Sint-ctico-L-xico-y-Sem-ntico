# Trabajo Práctico N°4
# Grupo 01 - K2151
## Integrantes
* Otero María Mercedes
* Toto Leandro
* Vallazza Luca Danilo
* Istepanoglu Tiziana
* Paye Michael

## Descripción general
Este trabajo implementa un analizador sintáctico simplificado para C con Bison e integra el analizador léxico realizado con Flex. El objetivo es reconocer construcciones básicas (declaraciones, asignaciones y expresiones aritméticas), validar la correcta formación de sentencias/bloques y reportar errores sintácticos de forma clara.

## Requisitos
- Compilador C (GCC)
- Bison
- Flex
- Make

### Instalación por plataforma:
**macOS:**
```bash
brew install bison flex gcc make
```

**Linux (Ubuntu/Debian):**
```bash
sudo apt-get install bison flex gcc make
```

**Windows:**
```bash
# Con chocolatey o instalar win_bison, win_flex, MinGW
# Nota: el Makefile busca los ejecutables win_flex y win_bison
choco install winflexbison mingw
```

## Estructura del proyecto
- `bison.y`: gramática Bison; define tokens, precedencias y producciones (declaraciones, asignaciones, expresiones, literales).
- `declaracionCopia.l`: analizador léxico Flex; reconoce identificadores, palabras clave, operadores, literales y maneja espacios/comentarios.
- `Makefile`: reglas para generar `bison.tab.c/.h`, `lex.yy.c` y enlazar el ejecutable `recuperacion` (o `recuperacion.exe` en Windows).
- `test_sintaxis_valido.c`: casos con sintaxis correcta.
- `test_sintaxis_error.c`: casos con errores para verificar los reportes.
- Archivos generados: `bison.tab.c`, `bison.tab.h`, `lex.yy.c`, `*.o`, `recuperacion`/`recuperacion.exe` (no se versionan normalmente).

## Construcción
Comandos principales:
```bash path=null start=null
make          # compila todo y genera recuperacion (o recuperacion.exe en Windows)
make test-valido  # prueba con test_sintaxis_valido.c
make test-error   # prueba con test_sintaxis_error.c
make clean    # limpia archivos generados
```

## Uso
- Desde archivo (tests incluidos):
```bash path=null start=null
# macOS/Linux:
./recuperacion test_sintaxis_valido.c
./recuperacion test_sintaxis_error.c

# Windows:
.\recuperacion.exe test_sintaxis_valido.c
.\recuperacion.exe test_sintaxis_error.c
```
La salida muestra tokens reconocidos (si se imprimen en el lexer) y mensajes de error de Bison con número de línea/columna si fueron implementados.

## Alcance y limitaciones
- Alcance: declaraciones de variables, asignaciones y expresiones aritméticas simples con precedencia estándar.
- Fuera de alcance: funciones, estructuras de control completas, tipos compuestos, ámbitos múltiples y chequeo semántico.

## Desarrollo
- Producciones principales en `bison.y` para sentencias y expresiones; manejo de errores con `error` y reglas de recuperación básicas.
- Integración con Flex: `yylex()` provee tokens y valores semánticos a Bison.
- Makefile: automatiza generación y enlace, detecta automáticamente el sistema operativo y usa `win_flex`/`win_bison` en Windows o `flex`/`bison` en Unix/macOS.

## Ejemplos
Entrada válida mínima:
```c path=null start=null
int a; a = 1 + 2 * 3;
```
Entrada con error (ejemplo):
```c path=null start=null
int a a = 3;
```
Salida esperada: mensaje de "syntax error" indicando la línea del error y, si corresponde, recuperación para continuar analizando.

## Archivos generados
Los siguientes archivos se generan durante la construcción y no deberían versionarse:
- `bison.tab.c`, `bison.tab.h`: código C generado por Bison
- `lex.yy.c`: código C generado por Flex  
- `*.o`: archivos objeto de compilación
- `recuperacion`, `recuperacion.exe`: ejecutable final
- `.debug_*`: archivos de depuración temporales

Se recomienda añadir estos patrones a `.gitignore`.

## Referencias
- Aula virtual.
- GNU Bison Manual y Flex Manual.
- Documentación de C (ISO C).

