Problem Statement

Dado un conjunto $G$ y una tabla de multiplicación, determina si $G$ forma un grupo.

Un grupo es un conjunto junto con una operación binaria que satisface las siguientes propiedades:

1. Asociatividad: Para todo $a, b, c$ en $G$, $(a \cdot b) \cdot c = a \cdot (b \cdot c)$.

2. Existencia de elemento neutro: Existe un elemento $e$ en $G$ tal que para todo $a$ en $G$, $a \cdot e = e \cdot a = a$.

3. Existencia de inversos: Para todo $a$ en $G$, existe un elemento $b$ en $G$ tal que $a \cdot b = b \cdot a = e$, donde $e$ es el elemento neutro.


Input Format

La primera línea contiene un entero $n$ que representa el tamaño del conjunto $G$ ($1 \leq n \leq 100$).

La segunda línea contiene $n$ enteros distintos que representan los elementos del conjunto $G$.

Las siguientes $n$ líneas contienen la tabla de multiplicación. Cada línea contiene $n$ enteros separados por espacios, donde el elemento en la fila $i$ y columna $j$ representa $a_i \cdot a_j$ donde $a_i$ y $a_j$ son los elementos del conjunto $G$.


Constraints

#TODO

```c

```

Output Format

Imprime "SI" si $G$ forma un grupo. De lo contrario, imprime "NO". 
