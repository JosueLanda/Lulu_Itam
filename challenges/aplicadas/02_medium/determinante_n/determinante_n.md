# Destino Matricial

### Descripción del Problema
En el reino mágico de Matrizlandia, se cuenta la leyenda de la "Matriz del Destino", una matriz especial de $3\times 3$ que tiene el poder de prever el futuro y guiar el destino del reino. Los sabios de Matrizlandia han descubierto que el determinante de esta matriz es crucial para comprender su magia. Tu tarea es calcular el determinante de la "Matriz del Destino" elevada a la $n-$ésima potencia.

### Entrada
La entrada consta un entero $n$ ($1 \leq n \leq 2^{15}$), que representa la potencia a la que se elevará la "Matriz del Destino", seguido de 3 líneas que contienen los elementos $m_{ij}$ ($-2^{15} \leq m_{ij} \leq 2^{15}$) de la "Matriz del Destino", con $\mathbb{M}_{3\times3}\in \mathbb{Z}$.

### Salida
Imprime una línea con un solo entero, que representa el determinante módulo $2^{20}-1$ de la "Matriz del Destino" elevada a la $n$-ésima potencia. Es decir, $\det(M^n)\mod{(2^{20}-1)}$.

### Ejemplos de Entrada y Salida
| Ejemplo de entrada 1    | Ejemplo de salida 1 |
| ----------------------- | ------------------- |
| 2                       | 0                   |
| 1 2 3<br>4 5 6<br>7 8 9 |                     |

| Ejemplo de entrada 2    | Ejemplo de salida 2 |
| ----------------------- | ------------------- |
| 3                       | 13824               |
| 1 2 3<br>8 5 6<br>7 8 9 |                     |

### Explicación
#### Determinante
El determinante de una matriz se define como:

$$ \text{det}(M) = a(ei − fh) − b(di − fg) + c(dh − eg) $$

donde $M$ es la matriz:

$$ \begin{pmatrix} a & b & c \\ d & e & f \\ g & h & i \end{pmatrix} $$

Por lo que quieres calcular el determinante de $M^n$.

#### Multiplicación de matrices
Si $A$ es una matríz de $m \times n$ y  $B$ es una matriz de $n \times p$, entonces su producto $AB = C$ está dado por:

\[
c_{ij} = \sum_{k=1}^{n} a_{ik} \cdot b_{kj}
\]
Para $1 \leq i \leq m$, $1 \leq j \leq p$. 

**Notas**
- Los números en la "Matriz del Destino" son enteros.
- Asegúrate de manejar eficientemente las grandes potencias $n$ para evitar tiempos de ejecución excesivos.
