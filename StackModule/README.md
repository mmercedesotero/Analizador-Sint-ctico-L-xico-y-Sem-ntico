# Grupo 01 - K2151
# INTEGRANTES 
## Otero Mercedes 
## Toto Leandro
## Vallaza Luca Danilo
## Istepanoglu Tiziana 

# Preguntas y respuestas
### a. ¿Cuál es la mejor implementación? Justifique.
### La mejor implementación es StackModuleContiguousStatic, ya que es la que menos tiempo tarda en realizar las mismas operaciones. Esto se debe a que la versión estática utiliza acceso directo a memoria contigua y no necesita reservar ni liberar memoria dinámicamente en cada operación, lo que reduce significativamente la sobrecarga. Sin embargo, también puede considerarse una ventaja de la implementación dinámica(StackModuleLinkedDynamic) el hecho de no tener un límite fijo de tamaño, lo que le otorga mayor flexibilidad en situaciones donde no se conoce de antemano cuántos elementos se van a almacenar.

### b. ¿Qué cambios haría para que no haya precondiciones? ¿Qué implicancia tiene el cambio?
###    Para evitar las precondiciones, se podrían modificar las funciones para que manejen automáticamente las situaciones límite. Por ejemplo, la función que agrega un elemento al stack (StackPush) podría ampliar el stack dinámicamente en la versión enlazada y dinámica si no queda espacio. Por otro lado, la función que saca un elemento del stack (StackPop) podría devolver un valor especial o indicar un error cuando el stack esté vacío, evitando así que el usuario tenga que verificar si el stack está vacío antes de llamar a la función.
### Estos cambios implican una reducción en la carga del usuario, ya que el mismo no debería hacer una verificación estricta, aumenta la complejidad interna y podrían provocar el surgimiento de errores.


### c. ¿Qué cambios haría en el diseño para que el stack sea genérico, es decir permita elementos de otros tipos que no sean int? ¿Qué implicancia tiene el cambio?
### Para esto necesitaría modificar el diseño para que pueda manejar todo tipo de datos, por ejemplo, usando un void, para que el stack almacene direcciones en vez de valores. 
### Esto implicaria un aumento de la complejidad, tanto del codigo, como de la memoria, ya que ahoraa estaria usando punteros para gestionar los datos. Además si las funciones no son usadas correctamente, pueden aparecer errores de tipo.

### d. Proponga un nuevo diseño para que el módulo pase a ser un tipo de dato, es decir, permita a un programa utilizar más de un stack.



# BENCHMARK
