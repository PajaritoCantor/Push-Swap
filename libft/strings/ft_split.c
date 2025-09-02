/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 16:32:55 by juan              #+#    #+#             */
/*   Updated: 2025/08/27 11:53:02 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[j])
		j++;
	if (size == 0)
		return (j);
	while (i < (size - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}	
	dst[i] = '\0';
	return (j);
}
static int	ft_wordlen(const char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static int	ft_countwords(const char *s, char c)
{
	int	count;
	int	flag;

	count = 0;
	flag = 0;
	while (*s)
	{
		if (*s != c && flag == 0)
		{
			count++;
			flag = 1;
		}
		else if (*s == c)
			flag = 0;
		s++;
	}
	return (count);
}

static void	*ft_free_parcial(char **arr, int i)
{
	while (i > 0)
	{
		i--;
		free(arr[i]);
	}
	free(arr);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**strs;
	int		i;
	int		len;
	int		count;

	if (!s)
		return (NULL);
	count = ft_countwords(s, c);
	strs = malloc(sizeof(char *) * (count + 1));
	if (!strs)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = ft_wordlen(s, c);
			strs[i] = malloc(len + 1);
			if (!strs[i])
				return (ft_free_parcial(strs, i));
			ft_strlcpy(strs[i], s, len + 1);
			i++;
			s += len;
		}
		else
			s++;
	}
	strs[i] = NULL;
	return (strs);
}
