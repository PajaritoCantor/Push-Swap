/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isrepeat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 19:07:57 by jurodrig          #+#    #+#             */
/*   Updated: 2025/08/22 15:34:58 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isrepeat(t_strlst *input, long num)
{
	t_strlst	*act_node;

	act_node = input;
	while (act_node)
	{
		if (ft_atol(act_node->data) == num)
			return (1);
		act_node = act_node->next;
	}
	return (0);
}