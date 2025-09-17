/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlstnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 12:29:08 by jurodrig          #+#    #+#             */
/*   Updated: 2025/09/17 16:47:46 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_stack	*ft_strlstnew(void	*content)
{
	t_stack	*new_node;
	long	num;

	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		return (NULL);
	num = ft_atol((char *)content);
	new_node->data = num;
	new_node->index = 0;
	new_node->next = NULL;
	return (new_node);
}
