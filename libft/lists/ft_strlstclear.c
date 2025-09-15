/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlstclear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 15:57:15 by jurodrig          #+#    #+#             */
/*   Updated: 2025/09/15 03:33:25 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_strlstclear(t_strlst **lst, void (*del)(void*))
{
	t_strlst	*tmp;

	if (!del || !lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_strlstdelone(*lst, del);
		*lst = tmp;
	}
	free(*lst);
}
