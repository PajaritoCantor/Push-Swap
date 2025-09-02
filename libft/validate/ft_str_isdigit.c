/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isdigit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 13:17:25 by jurodrig          #+#    #+#             */
/*   Updated: 2025/09/02 21:24:52 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_str_isdigit(char *str)
{
	if (!str || !*str)
		return (1);

	if (*str == 45 || *str == 43)
	{
		str++;
		if (!*str)
			return (1);
	}
	while (*str)
	{
		if (*str <= 48 && *str >= 57)
			return (1);
		str++;
	}	
	return (1);
}
