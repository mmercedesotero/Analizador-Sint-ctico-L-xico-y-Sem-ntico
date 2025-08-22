#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Estados
typedef enum{
    Q0,   // Estado inicial
    QCer, // Cero inicial: (octal o hexadecimal)
    QOx,  // Cero X (0x / 0X) 
    QNum, // Numeros del 1 al 7 (Octal o Decimal)
    Q0Num, // Numeros 0[1 -7] (Octal o Hex)
    QDec, // Decimal
    QOct, // Octal
    QHex, // Hexadecimal
    ERROR, // Estado de error
    CANT_ESTADOS
} Estado;

// Entradas
typedef enum {
    DIGITO_0,
    DIGITO_1_7,
    DIGITO_8_9,
    LETRA_Xx,
    LETRA_Aa_Ff,
    OTRO,
    CANT_ENTRADAS
} Entrada;

// Tabla de transición del AFD
int AFD[CANT_ESTADOS][CANT_ENTRADAS] = {
//        DIG_0    1-7   8-9    Xx    A-F/a-f  OTRO
/* Q0 */   {QCer , QNum, QDec, ERROR,  ERROR , ERROR },
/* QCer */ {ERROR, Q0Num,QHex, Q0x  , QHex   , ERROR },
/* QOx */  {},
/* QNum */ {},
/* Q0Num */{},
/* QDec */ {},
/* QOct */ {},
/* QHex */ {},
/* ERROR */{},
}

int main(int argc, char *argv[]) {

    if (argc != 2) {
        printf("Uso: %s <ruta-archivo>.txt\n", argv[0]);
        return 1;
    }

    // Abrimos el archivo que se envia por path
    FILE *f = fopen(argv[1], "r");

    if (!f) {
        perror("No se pudo abrir el archivo");
        return 1;
    }

    // Leemos el contenido del archivo
    char buffer[1];

    // mientras obtengamos caracteres
    int c;
    while ((c = getc(f)) != EOF)
    {
        printf("- %c\n", c);
    }

    return 0;
}