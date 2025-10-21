int x=42;
int octal=0447;
int hexadecimal=0x5;
int real= 3.14;
double enteraDecimal = 999999999109999;

int main(){

    int y = 0;
    while (y < 20) {
     y = y + 1;
     y = 5;
    }
    
    char doble = 'ab';
    
    int resultado = 0, a = 10, b = 20;
    
    // Operadores aritméticos
    resultado = a + b;
    resultado = a - b;
    resultado = a * b;
    resultado = a / (float)b;

    // Operadores relacionales
    if (a < b) {
        printf("a es menor que b\n");
    } else if (a > b) {
        printf("a es mayor que b\n");
    } else {
        printf("a es igual a b\n");
    }

    // Operadores lógicos
    if (a > 0 && b > 0) {
        printf("a y b son positivos\n");
    }

    // Operadores bit a bit
    int c = a & b;
    int d = a | b;
    int e = a ^ b;
    int f = ~a;
    int g = a << 2;
    int h = b >> 1;

    // Bucle for
    for (int i = 0; i < 5; i++) {
        printf("Iteración %d\n", i);
    }

    // Bucle while
    int contador = 0;
    while (contador < 3) {
        printf("Contador: %d\n", contador);
        contador++;
    }

    // Palabras reservadas
    const int constante = 100;
    switch (constante) {
        case 100:
            printf("Constante es 100\n");
            break;
        default:
            printf("Constante no es 100\n");
    }

    return 0;

}
