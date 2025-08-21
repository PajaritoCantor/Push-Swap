/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 18:57:21 by juan              #+#    #+#             */
/*   Updated: 2025/08/21 15:52:16 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_strlst    *append_args_to_list(t_strlst *input, char **args)
{
	int	j;
	t_strlst	*new_node;

	j = 0;
	while (args[j])
	{
		if (ft_str_isdigit(args[j]) == 0)
			ft_print_error();
		else if (ft_atol(args[j]) == 0)
			ft_print_error() 
		else if (ft_isrepeat(args[j]))
			
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

	if (ac == 1)
		return (NULL);
	input = NULL; 	
	i = 1;
	while (i < ac)
	{
		args = ft_split(av[i], ' ');
		if (!args)
			return (NULL);
		input = append_args_to_list(input, args);
		i++;
	}
	return (0);
}