/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 21:14:54 by jurodrig          #+#    #+#             */
/*   Updated: 2025/09/15 15:28:16 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_print_list(t_strlst *lst)
{
	int	count;

	count = 0;
	while (lst && count < 20)
	{
		ft_printf("[%s] -> ", lst->data);
		lst = lst->next;
		count++;
	}
	ft_printf("NULL\n");
}
