/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 15:43:07 by jurodrig          #+#    #+#             */
/*   Updated: 2025/09/13 06:28:54 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void find_min_and_pos(t_stack *stack, int *min_value, int *pos)
{
    if (!stack)
        return;
    *min_value = stack->data;
    *pos = 0;
    int current_pos = 0;
    t_stack *tmp = stack;
    while (tmp)
    {
        if (tmp->data < *min_value)
        {
            *min_value = tmp->data;
            *pos = current_pos;
        }
        tmp = tmp->next;
        current_pos++;
    }
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