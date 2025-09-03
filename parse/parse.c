/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 18:57:21 by juan              #+#    #+#             */
/*   Updated: 2025/09/03 20:53:19 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_strlst	*append_args_to_list(t_strlst *input, char **args)
{
	int			j;
	t_strlst	*new_node;
	long		num;

	j = 0;
	while (args[j])
	{
		if (!ft_str_isdigit(args[j]))
			return (NULL);
		num = (ft_atol(args[j]));
		if (ft_isrepeat(input, num))
		{
			ft_printfd(2, "repetido");
			// ft_strlstclear(&input,free);
			return (NULL);
		}
		new_node = ft_strlstnew(args[j]);
		if (!new_node)
		{
			ft_strlstclear(&input, free);
			return (NULL);
		}
		ft_strlstadd_back(&input, new_node);
		j++;
	}
	return (input);
}

t_strlst	*parse(int ac, char **av)
{
	int				i;
	t_strlst		*input;
	char			**args;

	i = 1;
	input = NULL;
	while (i < ac)
	{ 
		args = ft_split(av[i], ' ');
		if (!args)
		{
			ft_strlstclear(&input, free);
			return (ft_printf("1"),NULL);
		}
		input = append_args_to_list(input, args);
		ft_free_split(args);
    	i++;
	}
	return (input);
}