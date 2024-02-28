# Goldbach-san
Goldbach-san es un neko kawaii que está buscando su onichan, solo tiene 30 añitos y no ha tenido su primer novia porque tiene estándares muy altos, pide que puedan comprobar su conjetura débil.

La conjetura débil de Goldbach afirma lo siguiente:
> Todo número entero $n$ mayor que 7 puede ser representado como la suma de 3 primos


Así mismo, para segurar que sea una respuesta única pide que el producto de estos 3 números primos sea mínima, por ejemplo, para $n=20$ tenemos dos opciones (2, 7 y 11) y (2, 5 y 13), sin embargo:
$2 \times 7 \times 11 = 154$
$2 \times 5 \times 13 = 130$
Por lo que vamos a preferir la combinación 2, 5 y 13.

Tú puedes ser onichan de Goldbach-san, ¡encuentra esos 3 primos!.

# Entrada
Un solo entero $n$ $(7 \leq n \leq 2^{20})$.

# Salida
Una sola línea con 3 enteros ordenados de menor a mayor, representando los números primos cuya suma es $n$ y cuya multiplicación es menor.


# Ejemplos

| Ejemplo de Entrada 1 | Ejemplo de Salida 1 |
| -------------------- | ------------------- |
| 7                    | 2 2 3               |

| Ejemplo de Entrada 2 | Ejemplo de Salida 2 |
| -------------------- | ------------------- |
| 11                   | 2 2 7               |

| Ejemplo de Entrada 3 | Ejemplo de Salida 3 |
| -------------------- | ------------------- |
| 20                   | 2 5 13              |