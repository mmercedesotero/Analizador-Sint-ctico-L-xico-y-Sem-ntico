.PHONY: all clean run-tests 

all: analizador.exe run-tests

analizador.exe: lex.yy.c
	gcc lex.yy.c -o analizador.exe

lex.yy.c: declaracion.l
	win_flex declaracion.l

# esto sirve para cuando hagas make, use los files de prueba y te los muestre
run-tests: analizador.exe
	@echo "=== Testeo valido ==="
	powershell -Command "Get-Content test_valido.c | .\analizador.exe"
	@echo ""
	@echo "=== Testeo invalido ==="
	type test_error.c | .\analizador.exe
	@echo "=== Tests completados ==="

clean:
	-del /Q analizador.exe lex.yy.c *.o 2>nul
# esto esta asi porque agregamos el run-tests y no hacia el clean correcto