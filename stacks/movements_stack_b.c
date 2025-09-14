/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_stack_b.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 15:40:50 by jurodrig          #+#    #+#             */
/*   Updated: 2025/09/14 19:07:17 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	handle_three_b(t_stack **b)
{
	int	first;
	int	second;
	int	third;

	if (!b || !*b || !(*b)->next || !(*b)->next->next)
		return;
	first = (*b)->data;
	second = (*b)->next->data;
	third = (*b)->next->next->data;
	if (first > second && second > third)
		return;
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

void	sb(t_stack **b)
{
	t_stack	*first;
	t_stack	*second;

	if (!b || !*b || !(*b)->next)
		return;
	first = *b;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*b = second;
	ft_printfd(1, "sb\n");
}

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (!a || !*a)
		return;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = *b;
	*b = tmp;
	ft_printfd(1, "pb\n");
}

void	rrb(t_stack **b)
{
	t_stack	*prev;
	t_stack	*last;

	if (!b || !*b || !(*b)->next)
		return ;
	prev = NULL;
	last = *b;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *b;
	*b = last;
	ft_printfd(1, "rrb\n");
}

void	rb(t_stack **b)
{
	t_stack	*first;
	t_stack	*last;

	if (!b || !*b || !(*b)->next)
		return ;
	first = *b;
	*b = first->next;
	first->next = NULL;
	last = *b;
	while (last->next)
		last = last->next;
	last->next = first;
	ft_printfd(1, "rb\n");
}
