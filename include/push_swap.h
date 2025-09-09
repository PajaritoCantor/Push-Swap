/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 16:46:36 by juan              #+#    #+#             */
/*   Updated: 2025/09/09 16:10:30 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H 

# include <limits.h>
# include "libft.h"
# include "stdio.h"

typedef struct push_swap
{
    t_stack *a;
    t_stack *b;
}               t_push_swap;

t_strlst *parse(int ac, char **av);
t_stack		*strlst_to_stack(t_strlst *input);
void    handle_stacks(t_stack **a);
void	sa(t_stack *a);
void	pa(t_stack **b, t_stack **a);
void	rra(t_stack **a);
void	ra(t_stack **a);
void	handle_three_a(t_stack *a);

int		stack_size(t_stack *stack);
void	swap_nodes(t_stack *stack);

#endif