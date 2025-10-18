DEBUG ?= 0

# Configuración específica del sistema operativo
ifeq ($(OS),Windows_NT)
    FLEX = win_flex
    BISON = win_bison
    RM = del /Q
    EXE = recuperacion.exe
    RM_DEBUG = del /Q .debug_*
else
    FLEX = flex
    BISON = bison
    RM = rm -f
    EXE = ./recuperacion
    RM_DEBUG = rm -f .debug_*
endif

.PHONY: all clean test-error test-valido

.SECONDARY: lex.yy.c bison.tab.c bison.tab.h lex.yy.o bison.tab.o $(DEBUG_STAMP)

test-error: all
	$(EXE) test_sintaxis_error.c
test-valido: all
	$(EXE) test_sintaxis_valido.c
all: recuperacion

recuperacion: lex.yy.o bison.tab.o
	gcc lex.yy.o bison.tab.o -o recuperacion -ll

lex.yy.o: lex.yy.c bison.tab.h
	gcc -c lex.yy.c

bison.tab.o: bison.tab.c
	gcc -c bison.tab.c

lex.yy.c: declaracionCopia.l
	$(FLEX) declaracionCopia.l

DEBUG_STAMP := .debug_$(DEBUG)

bison.tab.c bison.tab.h: bison.y $(DEBUG_STAMP)
ifneq ($(DEBUG),0)
	$(BISON) --debug -d bison.y
else
	$(BISON) -d bison.y
endif

$(DEBUG_STAMP):
	$(RM_DEBUG)
	touch $@

clean:
	$(RM) recuperacion recuperacion.exe lex.yy.c lex.yy.o bison.tab.c bison.tab.o bison.tab.h .debug_*