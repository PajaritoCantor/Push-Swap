/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 16:32:55 by juan              #+#    #+#             */
/*   Updated: 2025/09/16 21:25:18 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	ft_wordlen(const char *s, char c)
{
	const char	*start;

	start = s;
	while (*s && *s != c)
		s++;
	return (s - start);
}

static int	ft_countwords(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

char	**alloc_split_arrays(const char *s, char c)
{
	int		count;
	char	**strs;

	count = ft_countwords(s, c);
	strs = malloc (sizeof(char *) * (count + 1));
	if (!strs)
		return (NULL);
	strs[count] = (NULL);
	return (strs);
}

static int	fill_split(const char *s, char c, char **strs)
{
	int		len;
	int		i;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			len = ft_wordlen(s, c);
			strs[i] = malloc(len + 1);
			if (!strs[i])
				return (ft_free_parcial(strs, i), -1);
			ft_strlcpy(strs[i], s, len + 1);
			i++;
			s += len;
		}
	}
	strs[i] = NULL;
	return (0);
}

char	**ft_split(const char *s, char c)
{
	char	**strs;

	if (!s)
		return (NULL);
	strs = alloc_split_arrays(s, c);
	if (!strs)
		return (NULL);
	if (fill_split(s, c, strs) == -1)
		return (NULL);
	return (strs);
}
