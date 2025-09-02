/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 21:14:54 by jurodrig          #+#    #+#             */
/*   Updated: 2025/09/02 21:18:30 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void    print_list(t_strlst *lst)
{
    int count = 0;

    while (lst && count < 20) // límite de seguridad
    {
        ft_printf("[%s] -> ", lst->data);
        lst = lst->next;
        count++;
    }
    ft_printf("NULL\n");
}