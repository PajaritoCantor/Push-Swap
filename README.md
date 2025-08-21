# APUNTES

# 🧠 Push-SwaP

## Funciones complementarias

En este proyecto decidí rehacer y optimizar algunas funciones de mi **libft**, incluyendo la versión personalizada de la función **printf**,  

### LIBFT
<details>
<summary>LIBFT</summary>

</details>

## Mis structs y listas

### t_stack

Esta struct define un nodo de una pila (stack), usada para representar las pilas a y b en el proyecto.

                typedef struct  stack
                {
                    int data;   // Valor entero que representa un integer en la pila
                    struct  stack   *next;  // Puntero al siguiente nodo en la pila (lista enlazada)
                }               t_stack;

### t_push_swap

Estructura principal para agrupar las dos pilas.

                typedef struct push_swap
                {
                    t_stack *a; // Puntero al inicio de la pila 'a'
                    t_stack *b; // Puntero al inicio de la pila 'b
                }               t_push_swap

### t_strlst 

Lista enlazada para guardar los datos como strings, útil en el parseo inicial antes de convertirlos a enteros.

                typedef struct  strlst
                {
                    char    *data; // cadena (número en formato string)
                    struct  strlst  *next; // Puntero al siguiente nodo
                }               t_strlst;



** útil para analizar la entrada como string(split, validaciones, errores) ** 

** Puedes convertir luego cada nodo a entero y crear los nodos de t_stack **

## Sobre las listas enlazadas

    t_strlst  *ft_strlstnew(void *content)
    {
        t_strlst  *new_node;

        new_node = malloc(sizeof(t_strlst));
        new_node->data = ft_strdup(content);
        new_node->next = NULL;
        return (new_node);
    }
* Pasamos un parámetro de tipo.
* Malloqueamos el parámetro para que sea de tipo **t_strlst**
* A este nodo enlazado a **data** le asignamos el parámetro void utilizando **ft_strdup**
* El siguiente nodo **next** es NULL
* Retornamos el **new_node**
