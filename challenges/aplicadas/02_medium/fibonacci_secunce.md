# Secuencia de Fibonacci

### Descripción del Problema
En el tranquilo pueblo de Fibonacciville, cada día es una aventura matemática. La sucesión de Fibonacci, una de las maravillas más conocidas de las matemáticas, ha capturado la curiosidad de los habitantes del pueblo. 

Juanito, un joven apasionado por los números, se ha propuesto resolver un misterio relacionado con esta famosa sucesión. Su tarea es encontrar el índice del primer término de la sucesión de Fibonacci que contiene exactamente $n$ dígitos.

La sucesión de Fibonacci se define por la relación de recurrencia:

$$ F_n = F_{n-1} + F_{n-2} $$

donde $F_1 = 1$ y $F_2 = 1$. Por lo tanto, los primeros términos son:

$$ F_1 = 1, \quad F_2 = 1, \quad F_3 = 2, \quad F_4 = 3, \quad F_5 = 5, \quad F_6 = 8, \quad \text{etc.} $$

### Entrada
La entrada consta de un solo entero $n$ ($1 \leq n \leq 1000$), que representa el número de dígitos que se desea encontrar en un término de la sucesión de Fibonacci.

### Salida
Imprime un solo entero que representa el índice del primer término de la sucesión de Fibonacci que contiene exactamente $n$ dígitos.

Claro, puedo presentar las salidas como dos tablas. Aquí tienes:

### Ejemplos de Entrada y Salida

| Ejemplo de entrada 1 | Ejemplo de salida 1 |
|----------------------|---------------------|
|           3          |          12         |

| Ejemplo de entrada 2 | Ejemplo de salida 2 |
|----------------------|---------------------|
|           4          |          17         |

| Ejemplo de entrada 3 | Ejemplo de salida 3 |
|----------------------|---------------------|
|           5          |          21         |

| Ejemplo de entrada 4 | Ejemplo de salida 4 |
|----------------------|---------------------|
|           6          |          26         |

### Explicación
En el primer ejemplo anterior, se busca el índice del primer término de la sucesión de Fibonacci que contiene exactamente 3 dígitos. El duodécimo término, $F_{12} = 144$, es el primer término que cumple esta condición.

**Notas**
- Juanito, con su incansable espíritu investigador, confía en tu habilidad para resolver este desafío matemático y ayudar a desentrañar otro misterio en Fibonacciville. ¡Es hora de poner a prueba tus habilidades matemáticas y de programación!
- Recuerda que calcular los números de fibonacci cuesta demasiada memoria del ordenador por tanto puedes apoyarte en las siguientes formulas:
  - $$\phi = \frac{1+\sqrt{5}}{2}$$
  - $$f_n = int  \left( \frac{\phi^n}{\sqrt{5}}+\frac{1}{2} \right) $$
