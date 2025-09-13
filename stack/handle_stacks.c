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

void	handle_four(t_stack **a, t_stack **b)
{
	int	min_value;
	int	pos;
	int	size;

	if (!a || !*a)
		return ;
	find_min_and_pos(*a, &min_value, &pos);
	size = stack_size(*a);
	if (pos <= size / 2)
		while ((*a)->data != min_value)
			ra(a);
	else
		while ((*a)->data != min_value)
			rra(a);
	pb(a, b);
	handle_three(a);
	pa(b, a);
	ft_print_stack(*a);
}

void handle_three(t_stack **a)
{
    int first = (*a)->data;
    int second = (*a)->next->data;
    int third = (*a)->next->next->data;

    if (first < second && second < third)
        return ;
    else if (first > second && second < third && first < third)
        sa(*a);
    else if (first > second && second > third)
    {
        sa(*a);
        rra(a);
    }
    else if (first > second && second < third && first > third)
        ra(a);
    else if (first < second && second > third && first < third)
    {
        sa(*a);
        ra(a);
    }
    else if (first < second && second > third && first > third)
        rra(a);

    ft_print_stack(*a);
}

void	handle_stacks(t_stack **a, t_stack **b)
{
	int	size; 
	
	size = stack_size(*a);
	if (size == 2)
		sa(*a);
	else if (size == 3)
		handle_three(a);
    else if (size == 4)
		handle_four(a, b);
}