/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 17:57:29 by juan              #+#    #+#             */
/*   Updated: 2025/08/19 13:08:11 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#define HEXA		"0123456789ABCDEF"
#define HEXA_MIN	"0123456789abcdef"	

#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct strlst
{
    char    *data;
    struct  strlst  *next;
}               t_strlst;

char	**ft_split(const char *s, char c);
char	*ft_substr(const char *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s);
void	*ft_memcpy(void *dest, const void *src, size_t n);

// prints

int     ft_putchar(int fd, char c);
int     ft_putstr(int fd, char *str);
int		ft_putnbr_base(long n, char *base, int lenbase, int fd);
int		ft_putnbr_base_p(long n, char *base, int lenbase, int fd);
int     ft_strlen_int(const char *str);

//  lists

t_strlst    *ft_strlstnew(void *content);
void	    ft_strlstd_add_back(t_strlst **lst, t_strlst *new);
t_strlst    *ft_strlstlast(t_strlst *lst);

#endif
