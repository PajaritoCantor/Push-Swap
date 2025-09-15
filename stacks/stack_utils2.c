/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 16:09:22 by jurodrig          #+#    #+#             */
/*   Updated: 2025/09/15 16:40:09 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three_nodes_b(t_stack **b)
{
	int	first;
	int	second;
	int	third;

	first = (*b)->data;
	second = (*b)->next->data;
	third = (*b)->next->next->data;
	if (first > second && second > third)
		return ;
	else if (first < second && second > third && first > third)
		sb(b);
	else if (first < second && second < third)
	{
		sb(b);
		rrb(b);
	}
	else if (first < second && second > third && first < third)
		rb(b);
	else if (first > second && second < third && first > third)
	{
		sb(b);
		rb(b);
	}
	else if (first > second && second < third && first < third)
		rrb(b);
}

void	sort_three_nodes_a(t_stack **a)
{
	int	first;
	int	second;
	int	third;

	first = (*a)->data;
	second = (*a)->next->data;
	third = (*a)->next->next->data;
	if (first < second && second < third)
		return ;
	else if (first > second && second < third && first < third)
		sa(a);
	else if (first > second && second > third)
	{
		sa(a);
		rra(a);
	}
	else if (first > second && second < third && first > third)
		ra(a);
	else if (first < second && second > third && first < third)
	{
		sa(a);
		ra(a);
	}
	else if (first < second && second > third && first > third)
		rra(a);
}

void	push_three_min(t_stack **a, t_stack **b)
{
	int	min_value;
	int	pos;
	int	size;
	int	i;

	i = 0;
	while (i < 3)
	{
		find_min_and_pos(*a, &min_value, &pos);
		size = stack_size(*a);
		if (pos <= size / 2)
			while ((*a)->data != min_value)
				ra(a);
		else
			while ((*a)->data != min_value)
				rra(a);
		pb(a, b);
		i++;
	}
}

void	sort_and_merge_three(t_stack **a, t_stack **b)
{
	handle_three(a);
	handle_three(b);
	pa(b, a);
	pa(b, a);
	pa(b, a);
}
