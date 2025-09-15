/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   k_sort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 19:17:36 by jurodrig          #+#    #+#             */
/*   Updated: 2025/09/15 16:46:54 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	k_sort_push_to_b(t_stack **a, t_stack **b, int size)
{
	int	next;
	int	range;

	next = 0;
	range = (int)(ft_sqrt(size) * 1.3);
	while (*a)
	{
		if ((*a)->index <= next)
		{
			pb(a, b);
			next++;
		}
		else if ((*a)->index <= next + range)
		{
			pb(a, b);
			rb(b);
			next++;
		}
		else
			ra(a);
	}
}

int	find_max_pos(t_stack *b, int max_index)
{
	int	pos;

	pos = 0;
	while (b)
	{
		if (b->index == max_index)
			return (pos);
		pos++;
		b = b->next;
	}
	return (1);
}

void	k_sort_return_to_a(t_stack **a, t_stack **b, int size)
{
	int	pos;

	while (size > 0)
	{
		pos = find_max_pos(*b, size - 1);
		if (pos <= size / 2)
			while ((*b)->index != size - 1)
				rb(b);
		else
			while ((*b)->index != size - 1)
				rrb(b);
		pa(b, a);
		size--;
	}
}

void	k_sort(t_stack **a, t_stack **b)
{
	int	size;

	size = stack_size(*a);
	k_sort_push_to_b(a, b, size);
	k_sort_return_to_a(a, b, size);
}
