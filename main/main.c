/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 17:16:42 by juan              #+#    #+#             */
/*   Updated: 2025/09/16 22:13:39 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	assign_indexes(t_stack *stack)
{
	t_stack	*tmp;
	int		count;
	t_stack	*cur;

	tmp = stack;
	while (tmp)
	{
		count = 0;
		cur = stack;
		while (cur)
		{
			if (cur->data < tmp->data)
				count++;
			cur = cur->next;
		}
		tmp->index = count;
		tmp = tmp->next;
	}
}

t_stack	*strlst_to_stack(t_stack *input)
{
	t_stack		*new_node;
	t_stack		*stack;
	t_stack		*last;

	stack = NULL;
	last = NULL;
	while (input)
	{
		new_node = malloc(sizeof(t_stack));
		if (!new_node)
			ft_free_stack(stack);
		new_node->data = input->data;
		new_node->next = NULL;
		if (!stack)
			stack = new_node;
		else
			last->next = new_node;
		last = new_node;
		input = input->next;
	}
	return (stack);
}

t_stack	*append_args_to_list(t_stack *input, char **args)
{
	int			j;
	t_stack	*new_node;
	int		num;

	j = 0;
	while (args[j])
	{
		if (!ft_str_isdigit(args[j]))
			return (NULL);
		num = ft_atol(args[j]);
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

t_stack	*parse(int ac, char **av)
{
	int			i;
	t_stack	*input;
	t_stack	*tmp;
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

int	main(int ac, char **av)
{
	t_stack	*input;
	t_push_swap	ps;

	if (ac < 2)
		ft_print_error("\n", 2);
	input = parse(ac, av);
	if (!input)
		ft_free_list(input);
	ps.a = strlst_to_stack(input);
	ps.b = NULL;
	ft_strlstclear(&input, free);
	assign_indexes(ps.a);
	handle_stacks(&ps.a, &ps.b);
	ft_free_stack(ps.a);
	ft_free_stack(ps.b);
	return (0);
}
