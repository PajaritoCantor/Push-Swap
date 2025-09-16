/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 21:14:54 by jurodrig          #+#    #+#             */
/*   Updated: 2025/09/16 21:49:47 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_print_lists(t_stack *lst)
{
	t_stack	*tmp;

	tmp = lst;
	while (lst)
	{
		ft_printf("[%d] -> ", lst->data);
		lst = lst->next;
	}
	lst = tmp;
	ft_printf("NULL\n");
}
