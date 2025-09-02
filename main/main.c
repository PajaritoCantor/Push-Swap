/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 17:16:42 by juan              #+#    #+#             */
/*   Updated: 2025/09/02 21:35:21 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    t_strlst *input;
    
    if (ac <= 2)
    {
        ft_printfd(2, "Error\n");
        return 1;
    }    
    input = parse(ac, av);
    if (!input)
        ft_printfd(2, "Error\n");
    else
        print_list(input);
    return (0);  
}