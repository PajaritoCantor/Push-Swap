/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlstlast.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 13:02:05 by jurodrig          #+#    #+#             */
/*   Updated: 2025/08/19 16:22:16 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_strlst    *ft_strlstlast(t_strlst *lst)
{
    while (lst)
    {
        if (!lst->next)
            return (lst);
        lst->next = lst;
    }
    return (lst);
}