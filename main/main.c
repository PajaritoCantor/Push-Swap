/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 17:16:42 by juan              #+#    #+#             */
/*   Updated: 2025/09/09 15:58:08 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    t_strlst	*input;
	t_push_swap		ps;
    
    if (ac < 2)
        ft_print_error("Error", 2);
    input = parse(ac, av);
    if (!input || ft_strlstsize(input) < 2)
		ft_free_list(input);
    ft_print_list(input);
	ps.a = strlst_to_stack(input);
	ps.b = NULL;
    ft_strlstclear(&input, free);
	handle_stacks(&ps.a);
    ft_free_stack(ps.a);
	ft_free_stack(ps.b);
    return (0);  
}

