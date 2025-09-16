/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlstdelone.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 20:13:45 by jurodrig          #+#    #+#             */
/*   Updated: 2025/09/16 20:50:08 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strlstdelone(t_strlst *lst, void (*del)(void *))
{
	if (lst && del)
		del(lst->data);
	free(lst);
}
