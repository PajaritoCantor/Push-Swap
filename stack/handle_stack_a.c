/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_stack_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 01:15:18 by jurodrig          #+#    #+#             */
/*   Updated: 2025/09/07 01:15:18 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void print_stack(t_stack *stack)
{
    t_stack *tmp = stack;
    while (tmp)
    {
        printf("[%d]->", tmp->data);
        tmp = tmp->next;
    }
    printf("NULL\n");
}
void	sb(t_stack *b)
{
	int	tmp;

	if (!b || !b->next)
		return ;
	tmp = b->data;
	b->data = b->next->data;
	b->next->data = tmp;
	print_stack(b);
	ft_printfd(1, "sb\n");
}

void	sa(t_stack	*a)
{
	int	tmp;

	if (!a || !a->next)
		return ;
	tmp = a->data;
	a->data = a->next->data;
	a->next->data = tmp;
	print_stack(a);
	ft_printfd(1, "sa\n");
}

void	handle_stack_a(t_stack **a, t_stack **b)
{
	if (*a && (*a)->next && (*a)->data > (*a)->next->data)
		sa(*a);
	if (*b && (*b)->next && (*b)->data > (*b)->next->data)
		sb(*b);
	return ;	
}