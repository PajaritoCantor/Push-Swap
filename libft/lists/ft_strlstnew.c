/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlstnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 12:29:08 by jurodrig          #+#    #+#             */
/*   Updated: 2025/09/02 21:00:12 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../libft.h"

t_strlst	*ft_strlstnew(void	*content)
{
	t_strlst	*new_node;

	new_node = malloc(sizeof(t_strlst));
	if (!new_node)
		return (NULL);
	new_node->data = ft_strdup(content);
	if (!new_node->data)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	return(new_node);
}