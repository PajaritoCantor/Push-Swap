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

void	handle_stack_a(t_push_swap *ps)
{
	if (ps->a && ps->a->next && ps->a->data > ps->a->next->data)
		sa(ps->a);
	return ;	
}