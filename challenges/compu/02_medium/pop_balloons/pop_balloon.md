# Eliminando globos

Una enorme cantidad de globos flotan en el salón al finalizar la competencia de programación de la FES Acatlán. El encargo del concurso está enojado porque mañana será el anfitrión de otro evento y los globos deben ser removidos. Afortunadamente, este año Carlitos vino preparado con su arco y flechas para reventar los globos.

Además, por suerte, debido al flujo de aire acondicionado, los globos están todos en el mismo plano vertical (es decir, un plano paralelo a una pared), aunque en distintas alturas y posiciones. 

Carlitos disparará desde el lado izquierdo del salón, a una altura elegida, apuntando a la dirección del lado derecho del salón. Cada flecha se mueve de izquierda a derecha, a la altura a la que se disparó, en el mismo plano vertical de los globos. Cuando una flecha toca un globo, el globo revienta y la flecha continúa su movimiento hacia la derecha a su altura disminuida en 1. En otras palabras, si la flecha estaba en la altura $H$, después de reventar un globo continuará en la altura $H-1$.

Carlitos quiere reventar todos los globos disparando la menor cantidad de flechas posibles. ¿Puede ayudarlo?

## Entrada
La primera línea de entrada contiene un entero $N$, el número de globos ($1 \leq N \leq 5 \times 10^5$). Como todos los globos están en el mismo plano vertical, definamos que la altura de un globo se da en relación con el eje $y$ y la $posición$ de un globo se da en relación cin el eje $x$. Los globos están numerados del 1 al $N$. Los números en los globos indican sus posiciones, desde el extremo izquierdo (globo número 1) hasta el extremo derecho (globo número $N$), independientemente de sus alturas. La posición del globo número $i$ es diferente a la posición del globo $i+1$ para toda $i$. La segunda línea contiene $N$ enteros $H_i$ indica la altura del globo número $i$ ($1 \leq H_i \leq 10^6$ para $1 \leq i \leq N$)

## Salida
Su programa debe imprimir una sola línea, que contenga solo un número entero, el número mínimo de flechas que Carlitos necesita disparar para reventar todos los globos.

| Ejemplo de entrada 1 | Ejemplo de salida 1 |
|----------------------|----------------------|
| 5                    | 2                    |
| 3 2 1 5 4            |                      |

| Ejemplo de entrada 2 | Ejemplo de salida 2 |
|----------------------|----------------------|
| 4                    | 4                    |
| 1 2 3 4              |                      |

| Ejemplo de entrada 3 | Ejemplo de salida 3 |
|----------------------|----------------------|
| 6                    | 3                    |
| 5 3 2 4 6 1          |                      |
