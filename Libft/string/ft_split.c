/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 16:32:55 by juan              #+#    #+#             */
/*   Updated: 2025/08/05 19:27:44 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static  int wordlen(const char *s, char c)
{
    int     len;

    len = 0;
    while (*s && *s != c)
    {
        len++;
        s++;
    }
    return (len);
}

static  int countword(const char *s, char c)
{
    int count_word = 0;

    while (*s)
    {
        if (*s != c)
        {
            count_word++;
            s+= wordlen(s, c);
        }
        else
            s++;
    }
    return (count_word);
}

static void     *free_strs(char **strs)
{
    int i;

    i = 0;
    while (strs[i])
        free(strs[i++]);
    free(strs);
    return (NULL);
}

char	**ft_split(const char *s, char c)
{
    char    **strs;
    int         i;
    int         count;
    
    if (!s)
        return NULL;
    count = countword(s, c);
    strs = malloc(sizeof(char *) * (count + 1));
    if (!strs)
        return (NULL);
    strs[count] = NULL;
    i = 0;
    while (*s)
    {
        if (*s != c)
        {
            strs[i] = ft_substr(s, 0, wordlen(s, c));
            if (!strs[i++])
                return (free_strs(strs));
            s += wordlen(s, c);
        }
        else
            s++;
    }
    return (strs);
}
