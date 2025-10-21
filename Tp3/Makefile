ifeq ($(OS),Windows_NT)
    FLEX = win_flex
    RM = del /Q
    CAT = type
    PIPE = powershell -Command "Get-Content"
    EXE = .\analizador.exe
else
    FLEX = flex
    RM = rm -f
    CAT = cat
    PIPE = cat
    EXE = ./analizador.exe
endif

.PHONY: all clean run-tests

all: analizador.exe run-tests

analizador.exe: lex.yy.c
	gcc lex.yy.c -o analizador.exe

lex.yy.c: declaracion.l
	$(FLEX) declaracion.l

run-tests: analizador.exe
	@echo "=== Testeo valido ==="
	$(PIPE) test_valido.c | $(EXE)
	@echo ""
	@echo "=== Testeo invalido ==="
	$(CAT) test_error.c | $(EXE)
	@echo "=== Tests completados ==="

clean:
	$(RM) analizador.exe lex.yy.c *.o