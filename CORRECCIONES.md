TP 1: Aprobado (intermedio)

Correcciones
- No pushear los .exe (utilizar un .gitignore)
- Agregar más prints en los tests (al menos haciendo print del nombre de cada test que se corre para saber que es lo q se testeó)
- En el testStackFull no deberia haber un if para el assert, sino habria veces que no se testea nada
- El benchmark debería estar en un .c que implemente la pila (como los test)
- Me hubiese gustado ver el Stack implementado como tipo de dato donde se pueda tener muchas instancias (como se sugirió en clases)

TP 1 Reentrega: Aprobado (muy bueno)
- Corrigieron todos lo detallado anteriormente

TP 2: Aprobado (muy Bueno)

TP 3: Aprobado (intermedio)

Correcciones:
- Los tipos de datos no estan completos, podria mejorarse la ER
- Para el caso de las estructuras de control, es probable que tengan que separarlas en ER diferentes para que les sirva luego en la BNF
- No deberían estar las ER que buscan Errores léxicos, el único error léxico que debería dar es cuando no se usan caracteres válidos, luego el problema se terminará delegando al analizador sintáctico
- Hacen falta muchos más tests, por ejemplo definir una función simple como int suma(int a, int b) { .....} o poner un while, o un if y ver que matchee todos las categorías correctas.


TODOS LOS TPs APROBADOS!
(tp1 individual de Condori Paye también aprobado)