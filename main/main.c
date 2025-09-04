/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 17:16:42 by juan              #+#    #+#             */
/*   Updated: 2025/09/03 18:02:22 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    t_strlst *input;
    
    if (ac < 2)
        ft_print_error("Error", 2);
    input = parse(ac, av);
    if (!input || ft_strlstsize(input) < 2)
		ft_free_list(input);
    print_list(input);
    ft_strlstclear(&input, free);
    return (0);  
}