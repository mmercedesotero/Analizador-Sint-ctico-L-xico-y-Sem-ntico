#include "StackModule.h"
#include <stdlib.h>

typedef struct Node {
    StackItem value;
    struct Node* next;
} Node;

static Node* top = NULL;

void StackInit(void) {
    // Libera todos los nodos si ya había una pila previa
    while (top != NULL) {
        Node* temp = top;
        top = top->next;
        free(temp);
    }
}

void StackPush(StackItem x) {
    Node* new_node = malloc(sizeof(Node));
    if (new_node != NULL) {
        new_node->value = x;
        new_node->next = top;
        top = new_node;
    }
    // Si malloc falla, no se inserta nada (podés imprimir error si querés)
}

StackItem StackPop(void) {
    if (!StackIsEmpty()) {
        StackItem value = top->value;
        Node* temp = top;
        top = top->next;
        free(temp);
        return value;
    }
    return -1;  // o valor sentinel
}

bool StackIsEmpty(void) {
    return top == NULL;
}

bool StackIsFull(void) {
    return false;  // Una pila dinámica no se llena (salvo que malloc falle)
}
