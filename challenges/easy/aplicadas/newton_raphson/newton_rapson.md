Problem Statement

El método de Newton-Raphson es un algoritmo iterativo para encontrar aproximaciones de las raíces (o soluciones) de una función real.

Dada una función $f(x)$, el método de Newton-Raphson utiliza la siguiente fórmula iterativa:

$x_{n+1} = x_n - \frac{f(x_n)}{f'(x_n)}$,

Donde $f'(x)$ es la derivada de $f(x)$.

Input Format

La entrada consta de dos números de punto flotante separados por un espacio, $x_0$ y $\epsilon$, $donde:\\$ 

1. $x_0$ es el valor inicial.
2. $\epsilon$ es la tolerancia.
3. $f(x) = x^{2} - 5$

Constraints

n es un numero entero donde :

```c
(0 <= x <= 4).
```

Output Format

Imprime una línea que contenga la raíz aproximada de la ecuación $f(x) = 0$ con cuatro decimales de precisión.

```c
2.0 0.0001
``` 
