/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 03:37:03 by jurodrig          #+#    #+#             */
/*   Updated: 2025/09/05 03:37:03 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *strlst_to_stack(t_strlst *input)
{
	t_stack		*new_node;
	t_stack		*stack;
	t_stack		*last;

	stack = NULL;
	last = NULL;
	while (input)
	{

		new_node = malloc(sizeof(t_stack));
		if (!new_node)
			ft_free_stack(stack);
		new_node->data = ft_atol(input->data);
		new_node->next = NULL;
		if (!stack)
			stack = new_node;
		else
			last->next = new_node;
		last = new_node;
		input = input->next;
	}
	return (stack);
}
