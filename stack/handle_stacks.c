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

void handle_four(t_stack **a, t_stack **b)
{
    int min_index;
    int size;
	
	size = stack_size(*a);
	min_index = find_min_index(*a);
    if (min_index <= size / 2)
    {
        while (min_index-- > 0)
            ra(a);
    }
    else
    {
        int moves = size - min_index;
        while (moves-- > 0)
            rra(a);
    }
    pb(a, b);
    handle_three(a);
    pa(b, a);

    ft_print_stack(*a);
}

void handle_three(t_stack **a)
{
    int first;
    int second;
    int third;

    first = (*a)->data;
    second = (*a)->next->data;
    third = (*a)->next->next->data;
    if (first < second && second < third)
        return;
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
