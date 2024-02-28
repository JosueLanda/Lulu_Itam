# Probabilidad ordenada
### Descripción del Problema

En el almacén de la señora Mathilda hay una caja con discos de colores brillantes con combinaciones únicas de discos azules y rojos. Al tomar dos discos al azar de una caja se observa que la probabilidad de seleccionar dos discos azules es exactamente del 50%. Intrigada por este fenómeno, la señora Mathilda se pregunta si existen otras disposiciones de discos que produzcan el mismo resultado.

### Ejemplo
Si una caja contiene veintiún discos de colores, compuestos por quince discos azules y seis rojos, y se toman dos discos al azar, se observa que la probabilidad de tomar dos discos azules.

$$
P(BB)= \frac{15}{21} \times \frac{14}{20} = \frac{1}{2}
$$

La siguiente disposición de este tipo, para la que hay exactamente un 50% de probabilidades de tomar dos discos azules al azar, es una caja que contiene $85$ discos azules y $35$ discos rojos.

Encontrando la primera disposición que contenga más de un límite de discos en total, determine el número de discos azules que contendría la caja.

### Entrada
Un solo entero $n \in (20 \leq n \leq 10^9)$ siendo la cantidad de discos totales.

### Salida
Un solo entero que representa el número de discos azules $\alpha$ que contendría la caja.

### Ejemplos de Entrada y Salida
| Ejemplo de Entrada 1 | Ejemplo de Salida 1 |
| -------------------- | ------------------- |
| 21                   | 15                  |

| Ejemplo de Entrada 2 | Ejemplo de Salida 2 |
| -------------------- | ------------------- |
| 100                  | 85                  |

| Ejemplo de Entrada 3 | Ejemplo de Salida 3 |
| -------------------- | ------------------- |
| 100000               | 97513               |

| Ejemplo de Entrada 4 | Ejemplo de Salida 4 |
| -------------------- | ------------------- |
| 1000000000           | 3822685023          |

### Explicación
En el primer ejemplo, la disposición de discos en la caja es de 21 discos en total, con 15 discos azules. La siguiente disposición que cumple con la condición establecida es una caja con 85 discos azules y 35 discos rojos.


