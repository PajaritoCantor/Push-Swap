/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 15:43:07 by jurodrig          #+#    #+#             */
/*   Updated: 2025/09/15 16:59:01 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	i = 1;
	while (i * i <= nb && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (i - 1);
}

void	find_min_and_pos(t_stack *stack, int *min_value, int *pos)
{
	t_stack	*tmp;
	int		current_pos;	

	if (!stack)
		return ;
	current_pos = 0;
	*min_value = stack->data;
	*pos = 0;
	tmp = stack;
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
	int	size;

	size = 0;
	while (stack)
	{
		size++;
		stack = stack->next;
	}
	return (size);
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
