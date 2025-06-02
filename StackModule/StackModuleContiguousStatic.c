#include "StackModule.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>

#define STACK_SIZE 10 // Definimos el tamaño del stack
#define ITERATIONS 20 

static StackItem stack[STACK_SIZE];
static int top;

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
