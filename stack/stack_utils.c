/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 15:43:07 by jurodrig          #+#    #+#             */
/*   Updated: 2025/09/12 05:05:17 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_min_index(t_stack *stack)
{
    int min = stack->data;
    int index = 0;
    int pos = 0;
    t_stack *tmp = stack;

    while (tmp)
    {
        if (tmp->data < min)
        {
            min = tmp->data;
            index = pos;
        }
        tmp = tmp->next;
        pos++;
    }
    return (index);
}	

int	stack_size(t_stack *stack)
{
	int size;

	size = 0;
	while (stack)
	{
		size++;
		stack = stack->next;
	}
	return size;
}

void	swap_nodes(t_stack *stack)
{
	int	tmp;

	if (!stack || !stack->next)
		return ;
	tmp = stack->data;
	stack->data = stack->next->data;
	stack->next->data = tmp;
}

void	ss(t_stack *a, t_stack *b)
{
	swap_nodes(a);
	swap_nodes(b);
	ft_printfd(1, "ss\n");
}