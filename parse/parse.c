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
		num = ft_atol(args[j]);
		if (num > INT_MAX || num < INT_MIN)
			return (NULL);
		if (ft_isrepeat(input, num))
			return (NULL);
		new_node = ft_strlstnew(args[j]);
		if (!new_node)
			return (NULL);
		ft_strlstadd_back(&input, new_node);
		j++;
	}
	return (input);
}

t_strlst	*parse(int ac, char **av)
{
	int			i;
	t_strlst	*input;
	t_strlst	*tmp;
	char		**args;

	i = 1;
	input = NULL;
	while (i < ac)
	{
		args = ft_split(av[i], ' ');
		if (!args)
			return (ft_strlstclear(&input, free), NULL);
		tmp = append_args_to_list(input, args);
		ft_free_split(args);
		if (!tmp)
			return (ft_strlstclear(&input, free), NULL);
		input = tmp;
		i++;
	}
	return (input);
}

