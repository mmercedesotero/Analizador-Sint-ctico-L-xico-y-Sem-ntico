#ifndef STACKMODULE_H
#define STACKMODULE_H

#include <stdbool.h>

#define STACK_SIZE 10 // Definimos el tamaño del stack aca para no agregarlo en cada archivo
#define ITERATIONS 20

typedef int StackItem;

typedef struct {
    StackItem datos[STACK_SIZE]; // para versión estática
    int tope;
} Stack;


void StackInit(Stack* s);
void StackPush(Stack* s, StackItem x);
StackItem StackPop(Stack* s);
bool StackIsEmpty(Stack* s);
bool StackIsFull(Stack* s);


#endif // STACKMODULE_H