/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 18:57:21 by juan              #+#    #+#             */
/*   Updated: 2025/08/27 15:56:43 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_strlst	*append_args_to_list(t_strlst *input, char **args)
{
	int			j;
	t_strlst	*new_node;
	long		num;

	j = 0;
	// ft_printf("%s\n", args[j]);
	while (args[j])
	{
		if (!ft_str_isdigit(args[j]))
			ft_printfd(1, "Error digit\n");
		num = (ft_atol(args[j]));
		if (ft_isrepeat(input, num))
		new_node = ft_strlstnew(args[j]);
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

	if (ac == 1)
		return (NULL);
	i = 1;
	input = NULL;
	// ft_printf("%s\n", av[i]);
	while (i < ac)
	{
		args = ft_split(av[i], ' ');
		// for(int h = 0; h < 4 ; h++)
			// ft_printf("%s\n", args[h]);
		if (!args)
		{
			ft_strlstclear(&input);
			return (ft_printf("1"),NULL);
		}
		
		input = append_args_to_list(input, args);
		ft_free_split(args);
    	i++;
	}
	return (input);
}
