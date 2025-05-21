#ifndef STACKMODULE_H
#define STACKMODULE_H

#include <stdbool.h>

typedef int StackItem;

/*
 * Inicializa el stack
 * Pre: -
 * Post: el stack está vacío
 */
void StackInit(void);

/*
 * Inserta un elemento en el tope del stack
 * Pre: el stack no está lleno (IsFull() == false)
 * Post: el elemento x está en el tope del stack
 */
void StackPush(StackItem x);

/*
 * Saca y devuelve el elemento del tope del stack
 * Pre: el stack no está vacío (IsEmpty() == false)
 * Post: el elemento del tope es removido y devuelto
 */
StackItem StackPop(void);

/*
 * Indica si el stack está vacío
 * Pre: -
 * Post: devuelve true si el stack está vacío, false en caso contrario
 */
bool StackIsEmpty(void);

/*
 * Indica si el stack está lleno.
 * Pre: ninguna.
 * Post: devuelve true si el stack está lleno, false en caso contrario.
 */
bool StackIsFull(void);


#endif // STACKMODULE_H