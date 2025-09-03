/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isdigit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 13:17:25 by jurodrig          #+#    #+#             */
/*   Updated: 2025/09/03 20:52:26 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int ft_str_isdigit(char *str)
{
    int i = 0;

    if (!str || !str[0])
        return 0;

    if (str[i] == '+' || str[i] == '-')
        i++;

    if (!str[i] || str[i] < '0' || str[i] > '9')
        return 0;

    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            return 0;
        i++;
    }
    return 1;
}

