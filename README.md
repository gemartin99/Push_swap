## Sobre push_swap 🔢

Push_swap es un proyecto de algoritmia simple, tienes que ordenar
datos. Tienes a tu disposición un conjunto de valores int, dos stacks y un conjunto de
instrucciones para manipular ambos. Deberás utilizar el minimo de instrucciones posible.



## Operaciones 🔁

| Operaciones | Explicación |
| :--- | :--- |
| sa | swap a - intercambia los dos primeros elementos encima del stack a. |
| sb | swap b - intercambia los dos primeros elementos encima del stack b. |
| ss | swap a y swap b a la vez. |
| pa | push a -  toma el primer elemento del stack b y lo pone encima del stack a. |
| pb | push b -  toma el primer elemento del stack a y lo pone encima del stack b. |
| ra | rotate a - desplaza hacia arriba todos los elementos del stack a una posición, el primer elemento se convierte en el último. |
| rb | rotate b - desplaza hacia arriba todos los elementos del stack b una posición, el primer elemento se convierte en el último. |
| rr | ra y rb a la vez. |
| rra | reverse rotate a - desplaza hacia abajo todos los elementos del stack a una posición, el último elemento se convierte en el primero. |
| rrb | reverse rotate b - desplaza hacia abajo todos los elementos del stack b una posición, el último elemento se convierte en el primero. |
| rrr | rra y rrb a la vez. |

## Calificación 💯

⚠️ Necesitaras un mínimo de 84/100 para aprobar este proyecto ⚠️

### 🔹 3 Numeros

Max 3 operaciones.

### 🔹 5 Numeros

Max 12 operaciones. 

![](https://github.com/gemartin99/Push_swap/blob/master/push_swap5.gif)

### 🔹 100 Numeros:

| Operaciones | Puntos |
| :---: | :---: |
| Menos de 700 | 5 |
| Menos de 900 | 4 |
| Menos de 1100 | 3 |
| Menos de 1300 | 2 |
| Menos de 1500 | 1 |

![](https://github.com/gemartin99/Push_swap/blob/master/push_swap100.gif)

### 🔹 500 Numeros: 

| Operaciones | Puntos |
| :---: | :---: |
| Menos de 5500 | 5 |
| Menos de 7000 | 4 |
| Menos de 8500 | 3 |
| Menos de 10000 | 2 |
| Menos de 11500 | 1 |

# BONUS ✅

Solo se debe hacer el bonus si la parte obligatoria esta al 100%. El bonus consiste en el desarrollo de un programa llamado checker , que verificará
si tu stack A esta ordenado. Para ello deberás mandarle como argumentos los numeros del stack y una vez se ejecute el programa debes mandarle las operaciones que quieres realizar para ordenarlo. Cuando queramos dejar de mandarle operaciones haremos ```Ctrl + D``` y el checker nos dirá "OK" si esta ordenado o "KO" si no lo esta. La controlación de errores del checker debe ser la misma que en push_swap. 

![](https://github.com/gemartin99/Push_swap/blob/master/checker.gif)
