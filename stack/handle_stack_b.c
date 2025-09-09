/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_stack_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 19:33:38 by jurodrig          #+#    #+#             */
/*   Updated: 2025/09/09 20:46:12 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    handle_three_b(t_stack *b)
{
	int	first = b->data;
	int	second = b->next->data;
	int	third = b->next->next->data;

	if (first < second && second < third)
		return ;
	else if (first > second && second < third && first < third)
		sb(b);
	else if (first > second && second > third)
	{
		sb(b);
		rrb(&b);
	}
	else if (first > second && second < third && first > third)
		rb(&b);
	else if (first < second && second > third && first < third)
	{
		sb(b);
		rb(&b);
	}
	else if (first < second && second > third && first > third)
		rrb(&b);
	ft_print_stack(b);
}