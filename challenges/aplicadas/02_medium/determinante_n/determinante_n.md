# Destino Matricial

### Descripción del Problema
En el reino mágico de Matrizlandia, se cuenta la leyenda de la "Matriz del Destino", una matriz especial de $3\times 3$ que tiene el poder de prever el futuro y guiar el destino del reino. Los sabios de Matrizlandia han descubierto que el determinante de esta matriz es crucial para comprender su magia. Tu tarea es calcular el determinante de la "Matriz del Destino" elevada a la $n-$ésima potencia.

### Entrada
La entrada consta de varias líneas, cada una conteniendo un entero $n$ ($1 \leq n \mod{2^{20}}$), que representa la potencia a la que se elevará la "Matriz del Destino" seguido de una caso de la Matriz Destino, con $\mathbb{M}_{3\times3}\in \mathbb{Z}$.

### Salida
Por cada entero $n$ en la entrada, imprime una línea con un solo entero, que representa el determinante de la "Matriz del Destino" elevada a la $n$-ésima potencia.

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
Dada una matriz 3x3 $M$, el determinante de $M^n$ se calcula como el determinante de $M$ elevado a la $n$-ésima potencia. El determinante de una matriz se define como:

$$ \text{det}(M) = a(ei − fh) − b(di − fg) + c(dh − eg) $$

donde $M$ es la matriz:

$$ \begin{pmatrix} a & b & c \\ d & e & f \\ g & h & i \end{pmatrix} $$

**Notas**
- Los números en la "Matriz del Destino" son enteros.
- Asegúrate de manejar eficientemente las grandes potencias $n$ para evitar tiempos de ejecución excesivos.
