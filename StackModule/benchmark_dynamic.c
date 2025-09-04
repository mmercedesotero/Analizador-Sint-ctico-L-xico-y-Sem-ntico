#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "StackModule.h"

void benchmark(Stack* s) {
    printf("Arranca el benchmark dinámico\n");

    double time_spent_total_push = 0, time_spent_total_pop = 0;
    struct timespec start, end;

    int values[STACK_SIZE];
    for (int i = 0; i < STACK_SIZE; i++) {
        values[i] = rand() % 10 + 1; // valores aleatorios entre 1 y 10
    }

    for (int i = 0; i < ITERATIONS; i++) {
        StackInit(s); // limpia la pila antes de cada iteración

        // Benchmark PUSH
        clock_gettime(CLOCK_MONOTONIC, &start);
        for (int j = 0; j < STACK_SIZE; j++) {
            StackPush(s, values[j]);
        }
        clock_gettime(CLOCK_MONOTONIC, &end);

        double time_push = (end.tv_sec - start.tv_sec) * 1000.0 +
                           (end.tv_nsec - start.tv_nsec) / 1000000.0;
        time_spent_total_push += time_push;

        // Benchmark POP
        clock_gettime(CLOCK_MONOTONIC, &start);
        for (int j = 0; j < STACK_SIZE; j++) {
            StackPop(s);
        }
        clock_gettime(CLOCK_MONOTONIC, &end);

        double time_pop = (end.tv_sec - start.tv_sec) * 1000.0 +
                          (end.tv_nsec - start.tv_nsec) / 1000000.0;
        time_spent_total_pop += time_pop;
    }

    double mean_push = time_spent_total_push / ITERATIONS;
    double mean_pop = time_spent_total_pop / ITERATIONS;

    printf("Resultados del benchmark dinámico:\n");
    printf("Iteraciones: %d | Operaciones por iteración: %d\n", ITERATIONS, STACK_SIZE);
    printf("Tiempo promedio PUSH: %.3f ms\n", mean_push);
    printf("Tiempo promedio POP: %.3f ms\n", mean_pop);
}

int main() {
    Stack pila;
    StackInit(&pila);
    benchmark(&pila);
    return 0;
}
