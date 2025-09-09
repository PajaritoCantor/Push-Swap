/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 05:54:12 by jurodrig          #+#    #+#             */
/*   Updated: 2025/09/09 05:59:01 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void ft_print_stack(t_stack *stack)
{
    t_stack *tmp = stack;

    while (tmp)
    {
        ft_printf("[%d]->", tmp->data);
        tmp = tmp->next;
    }
    ft_printf("NULL\n");
}