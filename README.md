# APUNTES

# 🧠 Push-SwaP

Este documento forma parte del estudio y documentación personal sobre el proyecto **Push Swap** de 42. Aquí se abordan los conceptos de **complejidad algorítmica**, con ejemplos prácticos en C, explicados paso a paso.

---

## 📌 ¿Qué es la complejidad?

La **complejidad** mide cuántos recursos (tiempo y memoria) necesita un algoritmo para resolver un problema en función del tamaño de la entrada, denotada normalmente como `n`.

Existen dos tipos principales:

- **Complejidad temporal**: cuántas operaciones realiza el algoritmo.
- **Complejidad espacial**: cuánta memoria adicional necesita.

La complejidad se expresa con la notación **Big O**, que representa el **crecimiento en el peor caso**.

---

## 📊 Tabla de complejidad y ejemplos

| Notación     | Nombre         | Descripción general                         |
|--------------|----------------|---------------------------------------------|
| O(1)         | Constant       | Siempre tarda lo mismo, sin importar `n`.   |
| O(log n)     | Logaritmic     | Muy eficiente, divide el problema en partes.|
| O(n)         | Lineal         | Crece proporcionalmente con `n`.            |
| O(n log n)   | Quasilineal    | Común en algoritmos de ordenamiento rápidos.|
| O(n²)        | Cuadrática     | Dos bucles anidados; lento para `n` grande. |
| O(2ⁿ)        | Exponencial    | Muy lento; crece el doble por cada `n`.     |
| O(n!)        | Factorial      | Inviable; todas las permutaciones posibles. |

---
