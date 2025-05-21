#include "StackModule.h"

#define STACK_SIZE 3  // Definimos el tamaño del stack

static StackItem stack[STACK_SIZE];
static int top;

void StackInit(void) {
    top = 0;
}

void StackPush(StackItem x) {
    if (!StackIsFull()) {
        stack[top++] = x;
    }
}

StackItem StackPop(void) {
    if (!StackIsEmpty()) {
        return stack[--top];
    }
    return -1;  // o valor sentinela o imprimir un error
}

bool StackIsEmpty(void) {
    return top == 0;
}

bool StackIsFull(void) {
    return top == STACK_SIZE;
}
