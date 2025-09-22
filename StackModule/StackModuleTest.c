#include <assert.h>
#include <stdio.h>
#include "StackModule.h"

void testStackInitEmpty() {
    Stack pila;
    StackInit(&pila);
    assert(StackIsEmpty(&pila));
    assert(!StackIsFull(&pila));
}

void testStackPushPop() {
    Stack pila;
    StackInit(&pila);
    StackPush(&pila, 15); 
    assert(!StackIsEmpty(&pila));
    assert(StackPop(&pila) == 15);
    assert(StackIsEmpty(&pila));
}

void testStackFull() {
    Stack pila;
    StackInit(&pila);
    StackPush(&pila, 1);
    StackPush(&pila, 2);
    StackPush(&pila, 3);
    assert(StackIsFull(&pila));
}

void testStackLifo() {
    Stack pila;
    StackInit(&pila);
    StackPush(&pila, 10);
    StackPush(&pila, 20);
    StackPush(&pila, 30);
    assert(StackPop(&pila) == 30);
    assert(StackPop(&pila) == 20);
    assert(StackPop(&pila) == 10);
    assert(StackIsEmpty(&pila));
}

int main() {
    printf("Corriendo testStackInitEmpty...\n");
    testStackInitEmpty();
    printf("Corriendo testStackPushPop...\n");
    testStackPushPop();
    printf("Corriendo testStackFull...\n");
    testStackFull();
    printf("Corriendo testStackLifo...\n");
    testStackLifo();
    printf("Todos los tests pasaron correctamente.\n");
    return 0;
}
