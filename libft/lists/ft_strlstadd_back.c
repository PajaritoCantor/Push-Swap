/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlstadd_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 12:25:20 by jurodrig          #+#    #+#             */
/*   Updated: 2025/08/19 18:23:02 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_strlstd_add_back(t_strlst **lst, t_strlst *new)
{
	t_strlst	*last;

	if (!lst || !new)
		return ;
	if (lst == NULL)
		*lst = new;
	else
	{
		last = ft_strlstlast(*lst);
		last->next = new;
	}
}
