/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_stack_b.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 15:40:50 by jurodrig          #+#    #+#             */
/*   Updated: 2025/09/09 15:42:15 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_stack *b)
{
	swap_nodes(b);
	ft_printfd(1, "sb\n");
}

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (a || !*a)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = *b;
	*b = tmp;
	ft_printfd(1, "pb\n");
}	
