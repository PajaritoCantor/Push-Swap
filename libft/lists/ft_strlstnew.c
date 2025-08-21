/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlstnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 12:29:08 by jurodrig          #+#    #+#             */
/*   Updated: 2025/08/20 19:33:02 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../libft.h"

t_strlst	*ft_strlstnew(void	*content)
{
	t_strlst	*new_node;

	new_node = malloc(sizeof(t_strlst));
	new_node->data = ft_strdup(content);
	new_node->next = NULL;
	return(new_node);
}