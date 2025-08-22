#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Estados
typedef enum{
    Q0,   // Estado inicial
    QCer, // Cero inicial: (octal o hexadecimal)
    QOx,  // Cero X (0x / 0X) 
    QDec, // Decimal (Si no arranca con 0)
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
//        DIG_0    1-7    8-9    Xx    A-F/a-f  OTRO
/* Q0 */   {QCer , QNum, QDec , ERROR, ERROR ,ERROR },
/* QCer */ {ERROR, QOct, QHex , Q0x  , QHex  ,ERROR },
/* QOx */  {QHex , QOct, QHex,  ERROR, QHex  ,ERROR },
/* QDec */ {QDec,  QDec, QDec,  ERROR, ERROR, ERROR},
/* QOct */ {QOct,  QOct, QHex,  ERROR, QHex  ,ERROR },
/* QHex */ {QHex,  QHex, QHex,  ERROR, QHex  ,ERROR },
/* ERROR */{ERROR, ERROR,ERROR, ERROR, ERROR, ERROR},
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