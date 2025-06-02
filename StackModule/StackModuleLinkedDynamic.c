#include "StackModule.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <time.h>

#define STACK_SIZE 10 // Definimos el tamaño del stack
#define ITERATIONS 20 

void benchmark()
{
    printf("Arranca el test \n");
    double time_spent_total_push = 0, time_spent_total_pop = 0;
    
    struct timespec start, end;


    int values[STACK_SIZE] = {};
    
    for(int i = 0; i < STACK_SIZE; i++)
    {
        values[i] = rand() * 10  ; // Inicializamos el array con valores aleatorios del 1 al 10
    }

    int iterations = ITERATIONS, items_per_iteration = STACK_SIZE;
    for (int i = 0; i < iterations; i++)
    {
        clock_gettime(CLOCK_MONOTONIC, &start);
        
        // Corremos i pops
        for (int j = 0; j < items_per_iteration; j++)
        {
            StackPush(values[j]);
        }
        
        clock_gettime(CLOCK_MONOTONIC, &end);

        // segundos + nanosegundos 
        double time_spent_push = (end.tv_sec - start.tv_sec) * 1000.0 + 
                                (end.tv_nsec - start.tv_nsec) / 1000000.0;

        time_spent_total_push += time_spent_push;

        // Corremos i pops
        clock_gettime(CLOCK_MONOTONIC, &start);
        
        for (int j = 0; j < items_per_iteration; j++)
        {
            StackPop();
        }
        
        clock_gettime(CLOCK_MONOTONIC, &end);
        // segundos + nanosegundos 
        double time_spent_pop = (end.tv_sec - start.tv_sec) * 1000.0 + 
                                (end.tv_nsec - start.tv_nsec) / 1000000.0;

        time_spent_total_pop += time_spent_pop;
    }
    

    double mean_time_pop = time_spent_total_pop/iterations;
    double mean_time_push = time_spent_total_push/iterations;


    printf("Resultados del test:\n");
    printf("Iteraciones: %d", iterations);
    printf("| Pops por iteracion: %d\n", items_per_iteration);
    printf("POP: %f ms   \n",mean_time_pop);
    printf("PUSH: %f ms  \n",mean_time_push);

    return;
}
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
