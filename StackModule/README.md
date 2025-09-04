# Grupo 01 - K2151
## Integrantes 
* Otero Mercedes 
* Toto Leandro
* Vallazza Luca Danilo
* Istepanoglu Tiziana 

# Preguntas y respuestas
### a. ¿Cuál es la mejor implementación? Justifique.
La mejor implementación es StackModuleContiguousStatic, ya que es la que menos tiempo tarda en realizar las mismas operaciones. Esto se debe a que la versión estática utiliza acceso directo a memoria contigua y no necesita reservar ni liberar memoria dinámicamente en cada operación, lo que reduce significativamente la sobrecarga. Sin embargo, también puede considerarse una ventaja de la implementación dinámica(StackModuleLinkedDynamic) el hecho de no tener un límite fijo de tamaño, lo que le otorga mayor flexibilidad en situaciones donde no se conoce de antemano cuántos elementos se van a almacenar.

### b. ¿Qué cambios haría para que no haya precondiciones? ¿Qué implicancia tiene el cambio?
Para evitar las precondiciones, se podrían modificar las funciones para que manejen automáticamente las situaciones límite. Por ejemplo, la función que agrega un elemento al stack (StackPush) podría ampliar el stack dinámicamente en la versión enlazada y dinámica si no queda espacio. Por otro lado, la función que saca un elemento del stack (StackPop) podría devolver un valor especial o indicar un error cuando el stack esté vacío, evitando así que el usuario tenga que verificar si el stack está vacío antes de llamar a la función.
Estos cambios implican una reducción en la carga del usuario, ya que el mismo no debería hacer una verificación estricta, aumenta la complejidad interna y podrían provocar el surgimiento de errores.


### c. ¿Qué cambios haría en el diseño para que el stack sea genérico, es decir permita elementos de otros tipos que no sean int? ¿Qué implicancia tiene el cambio?
Para esto necesitaría modificar el diseño para que pueda manejar todo tipo de datos, por ejemplo, usando un void, para que el stack almacene direcciones en vez de valores. 
Esto implicaria un aumento de la complejidad, tanto del codigo, como de la memoria, ya que ahoraa estaria usando punteros para gestionar los datos. Además si las funciones no son usadas correctamente, pueden aparecer errores de tipo.

### d. Proponga un nuevo diseño para que el módulo pase a ser un tipo de dato, es decir, permita a un programa utilizar más de un stack.

Se podria definir un header donde se puedan crear funciones que devuelvan punteros para asignarlos como variables dentro de un programa. 
Para llevar a cabo esta aplicación, se deberian hacer pequeños ajustes sobre funciones como StackInit para que en vez de devolver ``void`` devuelvan ``Node*`` o ``int*`` y un ``int`` para el top. Se deberían también crear nuevos Struct para almacenar el puntero y el valor de ``top`` para la implementacion de Contiguous Static.
Tambien se tendrian que modificar las funciones ``Push``, ``Pop``, ``IsFull``, ``IsEmpty`` para recibir por parametro el puntero del stack.
Definicion de stacks
```
// Para Contiguous Static
typedef struct {
    int elements[STACK_SIZE];
    int top;
} Stack;

// Ejemplo de declaración de funciones
void StackInit(Stack* stack);
void StackPush(Stack* stack, int element);
int StackPop(Stack* stack);
int StackIsEmpty(Stack* stack);
int StackIsFull(Stack* stack);


// Para LinkedDynamic
typedef struct{
  Node* head,
  int size
} Stack;

// Ejemplo de declaración de funciones
Stack* StackInit(void);
void StackPush(Stack* stack, int element);
int StackPop(Stack* stack);
int StackIsEmpty(Stack* stack);
void StackDestroy(Stack* stack);
```
Además, se deberian modificar las funciones para trabajar con el nuevo tipo Stack.

```
// Ejemplo simplificado de aplicacion

Stack stack1 = StackInit()
StackPush(3, &stack1)
StackIsEmpty(&stack1)          // devolvería false
int value = StackPop(&stack1)  // devolvería 3

```

# BENCHMARK

| Implementación      | Operaciones por Iteración | PUSH (ms)   | POP (ms)    |
|---------------------|---------------------------|-------------|-------------|
| **Linked Dynamic**  | 10,000                    | 750.745450  | 792.569720  |
|                     | 100                       | 0.138520    | 0.138995    |
|                     | 10                        | 0.003200    | 0.003000    |
| **Contiguous Static** | 10,000                    | 0.049920    | 0.043095    |
|                     | 100                       | 0.000460    | 0.000420    |
|                     | 10                        | 0.000140    | 0.000145    |



## Espacio en memoria

**Linked Dynamic**
* Dinamico. Se asigna memoria a medida que se agregan elementos.
* Uso (para stack de int): ActualLength * 4B

**Contiguous Static:**
* Estatico. Se asigan al crear el Stack.
* Uso (para stack de int): StackSize * 4B + 4B (del top)

## Conclusiones

Se observa del analisis de las mediciones realizadas que la configuracion Contiguous Static es muy superior en terminos de velocidad.

La ventaja de la configuracion Linked Dynamic radica en el espacio en memoria, pudiendo ser superior en entornos en los que se deconoce la cantidad de elementos que se cargaran a la pila, ya que ofrece mayor versatilidad a cambio de un mayor overhead.

# Make

Se pueden crear los .exe correspondiente a los distintos tipos de Stack segun se necesite

* `` make all ``: Para crear ambos .exe
* `` make StackModuleLinkedDynamic  `` para crear el .exe del Linked Dynamic
* `` make StackModuleContiguousStatic  `` para crear el .exe del Contiguous Static

# Correciones entrega TP1:

* Se eliminaron los .exe del repositorio y se agregó .gitignore.
* Se agregaron printf en los tests para identificar qué función se está ejecutando.
* Se corrigió el uso de assert para que no esté dentro de un if, asegurando que los tests realmente validen condiciones.
* Se separaron los benchmarks en archivos independientes (benchmark_static.c y benchmark_dynamic.c) como corresponde, evitando que estén mezclados con la implementación.
* Se refactorizó el stack para que sea un tipo de dato (struct Stack), permitiendo múltiples instancias en lugar de una única pila global.
* Se modificó el Makefile con el objetivo de automatizar la compilación de los distintos módulos del proyecto.
* Se actualizaron los tests y benchmarks para trabajar con estas nuevas instancias.