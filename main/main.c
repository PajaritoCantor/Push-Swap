/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 17:16:42 by juan              #+#    #+#             */
/*   Updated: 2025/08/27 15:18:52 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    t_strlst *input;
    
    if (ac < 2)
        return 0;
    input = parse(ac, av);
    if (!input)
        ft_printfd(2, "Error en parseo\n");
    return (0);  
}