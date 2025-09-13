/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_stack_a.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 15:08:58 by jurodrig          #+#    #+#             */
/*   Updated: 2025/09/13 04:47:25 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *a)
{
	if (a && a->next)
		swap_nodes(a);
	ft_printfd(1, "sa\n");
}

void pa(t_stack **b, t_stack **a)
{
    t_stack *tmp;

    if (!b || !*b)
        return;
    tmp = *b;
    *b = (*b)->next;
    tmp->next = *a;
    *a = tmp;
    ft_printfd(1, "pa\n");
}

void rra(t_stack **a)
{
    t_stack *prev;
    t_stack *last;

    if (!a || !*a || !(*a)->next)
        return;

    prev = NULL;
    last = *a;
    while (last->next)
    {
        prev = last;
        last = last->next;
    }
    prev->next = NULL;
    last->next = *a;
    *a = last;

    ft_printfd(1, "rra\n");
}
void ra(t_stack **a)
{
    t_stack *first;
    t_stack *last;

    if (!a || !*a || !(*a)->next)
        return;

    first = *a;
    *a = (*a)->next;     // nuevo head
    first->next = NULL;

    last = *a;
    while (last->next)
        last = last->next;
    last->next = first;

    ft_printfd(1, "ra\n");
}
