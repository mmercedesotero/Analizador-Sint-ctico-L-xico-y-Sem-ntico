DEBUG ?= 0

ifeq ($(OS),Windows_NT)
    FLEX = win_flex
    BISON = win_bison
    RM = del /Q
    EXE_NAME = recuperacion.exe
    EXE = $(EXE_NAME)
    CC ?= gcc
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

.PHONY: all clean test-error test-valido

.SECONDARY: lex.yy.c bison.tab.c bison.tab.h lex.yy.o bison.tab.o $(DEBUG_STAMP)

all: $(EXE_NAME)

test-error: $(EXE_NAME)
	$(EXE) test_sintaxis_error.c

test-valido: $(EXE_NAME)
	$(EXE) test_sintaxis_valido.c

$(EXE_NAME): lex.yy.o bison.tab.o
	$(CC) $(LDFLAGS) lex.yy.o bison.tab.o -o $(EXE_NAME) $(LDLIBS)

lex.yy.o: lex.yy.c bison.tab.h
	$(CC) $(CFLAGS) -c lex.yy.c

bison.tab.o: bison.tab.c
	$(CC) $(CFLAGS) -c bison.tab.c

lex.yy.c: declaracionCopia.l
	$(FLEX) declaracionCopia.l

$(DEBUG_STAMP):
	$(RM_DEBUG)
ifeq ($(OS),Windows_NT)
	echo. > $@
else
	touch $@
endif

bison.tab.c bison.tab.h: bison.y $(DEBUG_STAMP)
ifneq ($(DEBUG),0)
	$(BISON) --debug -d bison.y
else
	$(BISON) -d bison.y
endif

# Cross-platform removal of debug stamp files
RM_DEBUG = $(RM) .debug_*

clean:
	$(RM) $(EXE_NAME) recuperacion recuperacion.exe lex.yy.c lex.yy.o bison.tab.c bison.tab.o bison.tab.h .debug_*
