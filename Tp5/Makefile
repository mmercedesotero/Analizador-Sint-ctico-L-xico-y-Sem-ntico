DEBUG ?= 0

ifeq ($(OS),Windows_NT)
    FLEX = win_flex
    BISON = win_bison
    RM = del /Q
    EXE_NAME = recuperacion.exe
    EXE = $(EXE_NAME)
    CC = gcc
    CFLAGS ?= -O2 -Wall
    LDFLAGS ?=
    LDLIBS ?=
else
    FLEX = flex
    BISON = bison
    RM = rm -f
    EXE_NAME = recuperacion
    EXE = ./$(EXE_NAME)
    CC ?= cc
    CFLAGS ?= -O2 -Wall
    LDFLAGS ?=
    LDLIBS ?= -lm
endif

.PHONY: all clean test test-error test-valido

.SECONDARY: lex.yy.c bisonCopia.tab.c bisonCopia.tab.h lex.yy.o bisonCopia.tab.o $(DEBUG_STAMP)

all: $(EXE_NAME) test

# Ejecuta ambos tests si los archivos existen
# Usar 'make test' o  'make all' para compilar y correr los tests

test: $(EXE_NAME) test-valido test-error

test-error: $(EXE_NAME)
ifeq ($(OS),Windows_NT)
	@if exist test_sintaxis_error.c ( $(EXE) test_sintaxis_error.c ) else ( echo Skipping test-error: test_sintaxis_error.c not found )
else
	@if [ -f test_sintaxis_error.c ]; then \
		$(EXE) test_sintaxis_error.c; \
	else \
		echo "Skipping test-error: test_sintaxis_error.c not found"; \
	fi
endif

test-valido: $(EXE_NAME)
ifeq ($(OS),Windows_NT)
	@if exist test_sintaxis_valido.c ( $(EXE) test_sintaxis_valido.c ) else ( echo Skipping test-valido: test_sintaxis_valido.c not found )
else
	@if [ -f test_sintaxis_valido.c ]; then \
		$(EXE) test_sintaxis_valido.c; \
	else \
		echo "Skipping test-valido: test_sintaxis_valido.c not found"; \
	fi
endif

$(EXE_NAME): lex.yy.o bisonCopia.tab.o tabla_simbolos.o
	$(CC) $(LDFLAGS) lex.yy.o bisonCopia.tab.o tabla_simbolos.o -o $(EXE_NAME) $(LDLIBS)

lex.yy.o: lex.yy.c bisonCopia.tab.h
	$(CC) $(CFLAGS) -c lex.yy.c

bisonCopia.tab.o: bisonCopia.tab.c
	$(CC) $(CFLAGS) -c bisonCopia.tab.c

tabla_simbolos.o: tabla_simbolos.c tabla_simbolos.h
	$(CC) $(CFLAGS) -c tabla_simbolos.c

lex.yy.c: declaracionCopia2.l
	$(FLEX) declaracionCopia2.l

$(DEBUG_STAMP):
	$(RM_DEBUG)
ifeq ($(OS),Windows_NT)
	echo. > $@
else
	touch $@
endif

bisonCopia.tab.c bisonCopia.tab.h: bisonCopia.y $(DEBUG_STAMP)
ifneq ($(DEBUG),0)
	$(BISON) --debug -d bisonCopia.y
else
	$(BISON) -d bisonCopia.y
endif

# Cross-platform removal of debug stamp files
RM_DEBUG = $(RM) .debug_*

clean:
	$(RM) $(EXE_NAME) recuperacion recuperacion.exe lex.yy.c lex.yy.o bisonCopia.tab.c bisonCopia.tab.o bisonCopia.tab.h .debug_*
