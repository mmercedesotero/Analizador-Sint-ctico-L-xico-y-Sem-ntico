#include <stdio.h>
#include <stdlib.h>
#include <string.h>


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

    return 0;
}