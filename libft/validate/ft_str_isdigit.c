/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isdigit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 13:17:25 by jurodrig          #+#    #+#             */
/*   Updated: 2025/09/03 01:01:16 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_str_isdigit(char *str)
{
	if (!str || !*str)
		return (0);

	if (*str == 45 || *str == 43)
	{
		str++;
		if (!*str)
			return (0);
	}
	while (*str)
	{
		if (*str <= 48 && *str >= 57)
			return (0);
		str++;
	}	
	return (1);
}
