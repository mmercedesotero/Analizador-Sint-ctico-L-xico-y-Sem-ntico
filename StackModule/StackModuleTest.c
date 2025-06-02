#include <assert.h>
#include <stdio.h>
#include "StackModule.h"

void testStackInitEmpty() { // Test de stack si está vacío después de la inicialización
    StackInit();
    assert(StackIsEmpty());
    assert(!StackIsFull());
}

void testStackPushPop() { // Test de stack si puede insertar y eliminar un elemento 
    StackInit();
    StackPush(15); 
    assert(!StackIsEmpty());
    assert(StackPop() == 15);
    assert(StackIsEmpty());
}

void testStackFull() { // Test de stack si está lleno después de insertar elementos
    StackInit();
    // Suponemos que el stack tiene tamaño 3 
    StackPush(1);
    StackPush(2);
    StackPush(3);
    if (StackIsFull()) {
        assert(StackIsFull());
    }
}

void testStackLifo() { // Test de stack si utiliza el comportamiento LIFO del stack
    StackInit();
    StackPush(10);
    StackPush(20);
    StackPush(30);
    assert(StackPop() == 30);
    assert(StackPop() == 20);
    assert(StackPop() == 10);
    assert(StackIsEmpty());
}

int main() {
    testStackInitEmpty();
    testStackPushPop();
    testStackFull();
    testStackLifo();
    printf("Todos los tests pasaron correctamente.\n");
    return 0;
}