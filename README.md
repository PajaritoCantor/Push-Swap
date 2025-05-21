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
| O(1)         | Constant      | Siempre tarda lo mismo, sin importar `n`.   |
| O(log n)     | Logaritmic    | Muy eficiente, divide el problema en partes.|
| O(n)         | Lineal         | Crece proporcionalmente con `n`.            |
| O(n log n)   | Quasilineal    | Común en algoritmos de ordenamiento rápidos.|
| O(n²)        | Cuadrática     | Dos bucles anidados; lento para `n` grande. |
| O(2ⁿ)        | Exponencial    | Muy lento; crece el doble por cada `n`.     |
| O(n!)        | Factorial      | Inviable; todas las permutaciones posibles. |

---

## 📏 COMPARACIÓN ENTRE TIPOS 

A continuación se explican tres situaciones comunes con sus respectivas complejidades, para entender cómo se comportan dependiendo del tamaño de la entrada (`n`).

---

### ✅ 1. Acceder a una variable → **O(1)**

    int x = 42;
    printf("%d\n", x);

🔍 ¿Qué pasa aquí?

Se declara una variable x y se accede a su valor directamente. Esta acción siempre tarda lo mismo, sin importar el tamaño del programa o cuántos datos hayas ingresado por terminal.

📌 Por ejemplo, si ejecutas tu programa así:

    ./programa 1

…y ese 1 representa un número cualquiera (como 42, 5000, o 999999), el tamaño de la entrada no es el valor del número, sino la cantidad de elementos. Como solo hay uno, n = 1.

➡️ Acceder a ese único valor siempre toma el mismo tiempo. No importa si vale 1 o un millón.

⏱️ Complejidad
O(1) (constante)

✅ Las operaciones NO dependen de n

## 🔷 Complejidad Logarítmica – O(log n)

La complejidad **O(log n)** ocurre cuando el algoritmo **reduce el tamaño del problema a la mitad en cada paso**. Este comportamiento es extremadamente eficiente: incluso con entradas enormes, solo se requieren unos pocos pasos para completar la tarea.

---

### 📌 Ejemplo en C (división sucesiva)
    
    int main ()
    {
        int n = 42;
    
        while (n > 1)
        {
            n = n / 2;
            printf("%d\n", n);
        }
    
        return 0;
    }
    
    
    /*
    int logaritmic(int n)
    {
        return (n / 2);
    }
    int main (int argc, char *argv[])
    {
        if (argc != 2)
        {
            printf("USO: %s <NUMERO>", argv[0]);
            return (1);
        }
        int n = atoi(argv[1]);
        
        while (n > 1)
        {
            printf("%d\n", n);
            n = logaritmic(n);
        }
        return (0);
    }

$ ./lineal                                                                  
01234567891011121314151617181920212223242526272829303132333435363738394041% 
