# Bad Sequence

Los amigos de Petya le hicieron un regalo de cumpleaños: una secuencia de corchetes. Petya quedó bastante decepcionado con su regalo, porque soñaba con una secuencia de corchetes correcta, sin embargo, no les dijo nada a sus amigos sobre sus sueños y decidió arreglar el regalo por sí mismo.

Para corregir todo, Petya va a mover como máximo un corchete de su posición original en la secuencia a cualquier otra posición. No se permite invertir el corchete (por ejemplo, convertir "(" en ")" o viceversa).

Recordamos que una secuencia de corchetes s se llama correcta si:

- $s$ está vacío;
- $s$ es igual a "($t$)", donde t es una secuencia de corchetes correcta;
- $s$ es igual a $t_1t_2$, es decir, la concatenación de $t_1$ y $t_2$, donde $t_1$ y $t_2$ son secuencias de corchetes correctas.

Por ejemplo, "(()())", "()" son correctos, mientras que ")(" y "())" no lo son. Ayuda a Petya a arreglar su regalo de cumpleaños y entender si puede mover un corchete para que la secuencia se vuelva correcta.

**Input** \
La primera línea de entrada contiene un solo número $n$ ($1≤n≤200000$) — longitud de la secuencia que Petya recibió para su cumpleaños.

La segunda línea de entrada contiene una secuencia de corchetes de longitud n, que contiene los símbolos "(" y ")".

**Output** \
Imprime "Sí" si Petya puede hacer que su secuencia sea correcta moviendo como máximo un corchete. De lo contrario, imprime "No".

**Ejemplos**
| Input |
| ----- |
| 2     |
| )(    |

| Output |
| ------ |
| Si     |
----------
| Input |
| ----- |
| 3     |
| (()   |

| Output |
| ------ |
| NO     |
----------
| Input |
| ----- |
| 2     |
| ()    |

| Output |
| ------ |
| SI     |

----------
| Input      |
| ---------- |
| 10         |
| )))))((((( |

| Output |
| ------ |
| NO     |

**Nota** \
En el primer ejemplo, Petya puede mover el primer corchete al final, convirtiendo así la secuencia en "()", que es una secuencia de corchetes correcta.

En el segundo ejemplo, no hay forma de mover como máximo un corchete para que la secuencia se vuelva correcta.

En el tercer ejemplo, la secuencia ya es correcta y no es necesario mover corchetes.

