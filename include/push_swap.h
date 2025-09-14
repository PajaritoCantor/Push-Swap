/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 16:46:36 by juan              #+#    #+#             */
/*   Updated: 2025/09/14 20:44:44 by jurodrig         ###   ########.fr       */
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
void    handle_stacks(t_stack **a, t_stack **b);
void	sa(t_stack **a);
void	pa(t_stack **b, t_stack **a);
void	rra(t_stack **a);
void	ra(t_stack **a);
void	sb(t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	rrb(t_stack **b);
void	rb(t_stack **b);
void	handle_three(t_stack **a);
void    handle_three_b(t_stack **b);
void	handle_four(t_stack **a, t_stack **b);
void	handle_five(t_stack **a, t_stack **b);
void	handle_six(t_stack **a, t_stack **b);
void	k_sort(t_stack **a, t_stack **b);
void	k_sort_push_to_b(t_stack **a, t_stack **b, int size);
void	k_sort_return_to_a(t_stack **a, t_stack **b, int size);

int		stack_size(t_stack *stack);
void	swap_nodes(t_stack *stack);
void    find_min_and_pos(t_stack *stack, int *min_value, int *pos);
int		find_max_pos(t_stack *b, int max_index);
int		ft_sqrt(int nb);
void	assign_indexes(t_stack *stack);


#endif