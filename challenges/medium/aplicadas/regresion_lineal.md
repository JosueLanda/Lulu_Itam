Problem Statement

Dado un conjunto de puntos $(x_i, y_i)$, tu tarea es encontrar la mejor línea de regresión lineal que minimiza el error cuadrático medio (MSE).

La ecuación de una línea de regresión es de la forma $y = mx + b$, donde $m$ es la pendiente y $b$ es la intersección y $x$ es la variable independiente.

Escribe un programa que acepte los valores de $n$ y los puntos $(x_i, y_i)$ y calcule la pendiente $m$ y la intersección $b$ de la mejor línea de regresión.

Input Format

La primera línea contiene un entero $n$ ($2 \leq n \leq 100$) que representa la cantidad de puntos.

Las siguientes $n$ líneas contienen dos enteros $x_i$ y $y_i$ $(-10^5 \leq x_i, y_i \leq 10^5)$, representando los puntos.


Constraints

$(-10^5 \leq x_i, y_i \leq 10^5)$,
($2 \leq n \leq 100$)

Output Format

Dos números decimales separados por espacio, representando la pendiente $m$ y la intersección $b$ de la mejor línea de regresión.