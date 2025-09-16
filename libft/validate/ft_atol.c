/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 17:30:37 by jurodrig          #+#    #+#             */
/*   Updated: 2025/09/16 21:06:08 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_atol(const char *str)
{
	long	result;
	int		sign;

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
	if (result * sign > INT_MAX || result * sign < INT_MIN)
		ft_print_error("Error: número fuera de rango\n", 2);
	return ((int)(result * sign));
}
