/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 17:41:06 by juan              #+#    #+#             */
/*   Updated: 2025/08/20 19:33:03 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	char	*start;
	int		len;

	len = 0;
	if (s[len])
		len++;
	dup = malloc(sizeof(char *) * len + 1);
	start = dup;
	while (*s)
		*dup++ = *s++;
	*dup = '\0';
	return (start);
}
