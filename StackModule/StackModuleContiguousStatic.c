#include "StackModule.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>

void StackInit(Stack* s) { 
    s->tope = 0;
}

void StackPush(Stack* s, StackItem x) {
    if (!StackIsFull(s)) {
        s->datos[s->tope++] = x;
    }
}

StackItem StackPop(Stack* s) {
    if (!StackIsEmpty(s)) {
        return s->datos[--s->tope];
    }
    return -1;
}

bool StackIsEmpty(Stack* s) {
    return s->tope == 0;
}

bool StackIsFull(Stack* s) {
    return s->tope == STACK_SIZE;
}
