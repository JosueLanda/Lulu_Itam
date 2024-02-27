# Determinando la agrupación

### Descripción del Problema
En el reino de Algebraia, los sabios y matemáticos se enfrentan a un enigma antiguo: determinar si un conjunto junto con una operación binaria forma un grupo matemático. Con la guía de la sabia reina Matilda, los investigadores se sumergen en el estudio de las propiedades esenciales de los grupos, como la asociatividad y la existencia de elementos neutros e inversos. Su tarea es desarrollar un algoritmo que pueda determinar con precisión si un conjunto y una operación binaria forman un grupo verdadero, y así garantizar la estabilidad matemática del reino de Algebraia.

Dado un conjunto $G = \{ 1,2, \cdots,n\}$ y una "tabla de multiplicación" sobre la operación $\star$, determina si $G$ con la operación $\star$ forman un grupo.

Un grupo es un conjunto junto con una operación binaria que satisface las siguientes propiedades:

1. Asociatividad: Para todo $a, b, c$ en $G$, $(a \cdot b) \cdot c = a \cdot (b \cdot c)$.

2. Existencia de elemento neutro: Existe un elemento $e$ en $G$ tal que para todo $a$ en $G$, $a \cdot e = e \cdot a = a$.

3. Existencia de inversos: Para todo $a$ en $G$, existe un elemento $b$ en $G$ tal que $a \cdot b = b \cdot a = e$, donde $e$ es el elemento neutro.


### Entrada

La primera línea contiene un entero $n$ que representa el tamaño del conjunto $G$ ($1 \leq n \leq 100$).

Las siguientes $n$ líneas contienen la tabla de multiplicación. Cada línea contiene $n$ enteros $g_{ij}$ $(1 \leq g_{ij} \leq n)$ separados por espacios, donde el elemento en la fila $i$ y columna $j$ representa $ g_{ij} = i \star j$.


### Constraints
- $n$:  ($1 \leq n \leq 100$)
- $g_{ij}$: ($1 \leq g_{ij} \leq n$)


### Salida

Imprime "SI" si $G$ forma un grupo. De lo contrario, imprime "NO". 

### Ejemplos entrada y salida
| Ejemplo de entrada 1    | Ejemplo de salida 1 |
| ----------------------- | ------------------- |
| 3                       | NO                  |
| 1 2 3<br>2 2 3<br>3 3 3 |                     |

| Ejemplo de entrada 2    | Ejemplo de salida 2 |
| ----------------------- | ------------------- |
| 3                       | SI                  |
| 1 2 3<br>2 1 2<br>3 2 1 |                     |

| Ejemplo de entrada 3    | Ejemplo de salida 3 |
| ----------------------- | ------------------- |
| 3                       | NO                  |
| 2 3 1<br>1 3 3<br>2 2 2 |                     |

# Explicación
El ejemplo número 1 es la tabla de la operación $\max(i,j)$, es facil notar que el máximo es asociativo, el elemento neutro es el $1$, pero no existe un inverso para cada elemento tal que $\max(i,1) = 1$

El ejemplo 2 tiene el neutro 1, además para cada elemento $i$, $g_{ii}=1$ y se cumple la asociatividad.