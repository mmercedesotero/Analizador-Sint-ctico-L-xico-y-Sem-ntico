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
/* Q0 */   {QCer , QDec, QDec , ERROR, ERROR ,ERROR },
/* QCer */ {ERROR, QOct, QHex , QOx  , QHex  ,ERROR },
/* QOx */  {QHex , QHex, QHex,  ERROR, QHex  ,ERROR },
/* QDec */ {QDec,  QDec, QDec,  ERROR, ERROR, ERROR},
/* QOct */ {QOct,  QOct, QHex,  ERROR, QHex  ,ERROR },
/* QHex */ {QHex,  QHex, QHex,  ERROR, QHex  ,ERROR },
/* ERROR */{ERROR, ERROR,ERROR, ERROR, ERROR, ERROR},
};

// Función para clasificar la entrada
Entrada reconocerEntrada(char c) {
    if (c == '0') return DIGITO_0;
    if (c >= '1' && c <= '7') return DIGITO_1_7;
    if (c == '8' || c == '9') return DIGITO_8_9;
    if (c == 'x' || c == 'X') return LETRA_Xx;
    if ((c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F')) return LETRA_Aa_Ff;
    return OTRO;
}

void indicarEstado(Estado estado) {
    switch(estado){
        case Q0:
            printf(" -> Estado inicial (No valido)\n");
            break;
        case QCer:
            printf(" -> Cero inicial (No valido)\n");
            break;
        case QOx:
            printf(" -> Cero X (No valido)\n");
            break;
        case QDec:
            printf(" -> Decimal (Valido)\n");
            break;
        case QOct: 
            printf(" -> Octal (valido)\n");
            break;
        case QHex:
            printf(" -> Hexadecimal (valido)\n");
            break;
        case ERROR:
            printf(" -> Estado de error (No valido)\n");
            break;
        default:
            printf(" -> Estado desconocido (No valido)\n");
            break;
    }
    return;
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
    Estado estado = Q0;
    while ((c = getc(f)) != EOF)
    {
        // Si es una coma, indicamos el estado y reiniciamos
        if (c == ',') {
            indicarEstado(estado);
            estado = Q0;
            continue;
        }
        // Clasificamos la entrada
        Entrada entrada = reconocerEntrada(c);
        // Hacemos la transición
        estado = AFD[estado][entrada];

        printf("%c", c);
    }
    // Indicamos el estado final para la última palabra
    indicarEstado(estado);

    return 0;
}

