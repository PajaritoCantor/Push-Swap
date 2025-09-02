/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isdigit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 13:17:25 by jurodrig          #+#    #+#             */
/*   Updated: 2025/08/27 11:48:39 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_str_isdigit(char *str)
{
	// ft_printf("Puntero: %p", *str);
	if (!str || !*str)
		return (ft_printf("1"), 0);

	if (*str == 45 || *str == 43)
	{
		str++;
		if (!*str)
			return (ft_printf("2"), 0);
	}
	while (*str)
	{
		if (*str <= 48 && *str >= 57)
			return (ft_printf("3"), 0);
		str++;
	}	
	return (1);
}
