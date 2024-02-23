# Problema: Números Amigos

## Descripción
Dos números enteros positivos $A$ y $B$ se llaman "amigos" si la suma de los divisores propios de $A$ (es decir, los divisores de $A$ excluyendo $A$ mismo) es igual a $B$, y viceversa. Tu tarea es verificar si un par de números dados son amigos o no.

## Entrada
La entrada consta de dos enteros positivos $A$ y $B$ ($1 \leq A, B \leq 10^5$).

## Salida
Debes imprimir "Si" si los números son amigos y "No" si no lo son.


| Ejemplo de entrada 1 | Ejemplo de salida 1 |
|----------------------|---------------------|
| 220                  | Si                  |
| 284                  |                     |

| Ejemplo de entrada 2 | Ejemplo de salida 2 |
|----------------------|---------------------|
| 1184                 | Si                  |
| 1210                 |                     |

### Explicación
- En el primer ejemplo, los divisores propios de $220$ suman $1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284$, y los divisores propios de $284$ suman $1 + 2 + 4 + 71 + 142 = 220$, por lo tanto, son amigos.
- En el segundo ejemplo, los divisores propios de $1184$ suman $1 + 2 + 4 + 8 + 16 + 37 + 74 + 148 + 296 + 592 = 1210$, y los divisores propios de $1210$ suman $1 + 2 + 5 + 10 + 11 + 22 + 55 + 110 + 121 = 1184$, por lo tanto, son amigos.

