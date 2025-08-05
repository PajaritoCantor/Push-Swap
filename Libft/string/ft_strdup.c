/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 17:41:06 by juan              #+#    #+#             */
/*   Updated: 2025/08/05 20:53:53 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
    char    *dup;
    char    *start;
    int         len;
    
    len = 0;
    if (s[len])
        len++;
    dup = malloc(sizeof(char *) * len + 1);
    start = dup;
    while (*s)
        *dup++ = *src++;
    *dup = '\0';
    return (start);
}