/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 17:30:37 by jurodrig          #+#    #+#             */
/*   Updated: 2025/08/27 15:47:31 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

long    ft_atol(const char *str)
{
	long result;
	int sign;

	result = 0;
	sign = 1;

	while (ft_isspace(*str))
			str++;
	if (*str == 45 || *str == 43)
	{
		if (*str == 45)
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
		result = result * 10 + *str++ - 48;
	result *= sign;

	if (result > INT_MAX || result < INT_MIN)
		ft_printfd(1, "Error atol");
	return (result);
}
