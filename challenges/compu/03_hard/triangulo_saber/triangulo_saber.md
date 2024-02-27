# Triángulo de la Sabiduría

### Descripción del Problema
En un antiguo templo perdido en lo profundo del bosque yace el "Triángulo de la Sabiduría", una reliquia misteriosa tallada con una serie de números. Se dice que aquellos que puedan descifrar el secreto oculto dentro de este triángulo serán bendecidos con conocimientos infinitos y poderes inimaginables. Tu tarea es hallar el total máximo de arriba hacia abajo del Triángulo de la Sabiduría siguiendo:

### Ejemplo
Empezando por la parte superior del triángulo de abajo y pasando a los números adyacentes de la fila inferior, el total máximo de arriba a abajo es 23.

$$\textbf{3}\\
  \textbf{7} \quad 4\\
  2 \quad \textbf{4} \quad 6\\
  8 \quad 5 \quad \textbf{9} \quad 3$$

Es decir que su suma máxima de arriba hacia abajo es, $3 + 7 + 4 + 9 = 23$.

Halla el total máximo de arriba abajo del siguiente triángulo:

### Entrada
Se dará un número $n \in (3 \leq n \leq 1000)$ siendo este el número de pisos de triángulo seguido después del triángulo con cada número separado por un espacio y cada entrada del triangulo $\beta_{ij} \in (1\leq \beta_{ij} \leq 99 )$

### Salida
El total de la suma máxima de arriba hacia abajo siendo un número $\alpha \in \mathbb{N}$

### Ejemplo de entrada y salida
| Ejemplo de entrada                                  | Ejemplo de salida |
| --------------------------------------------------- | ----------------- |
| $4\\3\\7\quad4\\2\quad4\quad6\\8\quad5\quad9\quad3$ | 23                |

**Notas**
Se puede resolver el siguiente problema probando todas la combinaciones posibles pero esto no es nada optimo, recomendamos usar un algoritmo como backtracking

