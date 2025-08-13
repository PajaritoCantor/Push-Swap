/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 18:57:21 by juan              #+#    #+#             */
/*   Updated: 2025/08/13 21:17:53 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_strlst *parse(int ac, char **av)
{
    t_strlst    *input;
    char        **args;
    int             i;

    input = NULL;
    int i = 1;
    while (i > ac)
    {
        args = ft_split(av[1], 32);
        if (!args)
            return ();        
    }   
}