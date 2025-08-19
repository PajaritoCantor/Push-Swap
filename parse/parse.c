/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 18:57:21 by juan              #+#    #+#             */
/*   Updated: 2025/08/19 19:05:35 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_strlst    *append_args_to_list(t_strlst *input, char **args)
{
	int	j;
	int k;	
	t_strlst	*new_node;
	
	j = 0;
	while (args[j])
	{
		k = 0;
		while (args[j][k])
		{
			if (args[j][k] >= '0' && args[j][k] <= '9')
				k++;
			else if (k == 0 && args[j][k] == '-')
				k++;
			else
				return NULL;
		}
		new_node = ft_strlstnew(args[j]);
		ft_strlstadd_back(&input, new_node);
		j++;
	}
	return (input);
}

t_strlst	*parse(int ac, char **av)
{
	t_strlst	*input;
    char		**args;
    int				i;

	input = NULL;
	int i = 1;
	while (i < ac)
	{
		args = ft_split(av[i], ' ');
		if (!args)
			return (NULL);
		input = append_args_to_list(input, args);
		i++;
	}
}