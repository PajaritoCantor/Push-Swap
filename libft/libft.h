/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 17:57:29 by juan              #+#    #+#             */
/*   Updated: 2025/09/17 19:10:44 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define HEXA		"0123456789ABCDEF"
# define HEXA_MIN	"0123456789abcdef"	

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>

typedef struct s_stack
{
	long			data;
	int				index;
	struct s_stack	*next;
}				t_stack;

void		*ft_memcpy(void *dest, const void *src, size_t n);
char		*ft_strdup(const char *s);
size_t		ft_strlen(const char *s);
char		**ft_split(const char *s, char c);
char		*ft_substr(const char *s, unsigned int start, size_t len);
int			ft_strlcpy(char *dst, const char *src, size_t size);
long		ft_atol(const char *str);
int			ft_str_isdigit(char *str);
int			ft_isspace(char c);
int			ft_isrepeat(t_stack *input, long num);

void		ft_free_split(char **args);
void		ft_free_list(t_stack *input);
void		ft_free_stack(t_stack *stack);
void		*ft_free_parcial(char **strs, int n);

int			ft_putchar(int fd, char c);
int			ft_putstr(int fd, char *str);
int			ft_putnbr_base(long n, char *base, int lenbase, int fd);
int			ft_putnbr_base_p(long n, char *base, int lenbase, int fd);
int			ft_strlen_int(const char *str);
int			ft_printf(const char *format, ...);
int			ft_printfd(int fd, const char *format, ...);
int			ft_print_error(char *error_msg, int y);
void		ft_print_list(t_stack *lst);
int			ft_print_error(char *error_msg, int y);
void		ft_print_stack(t_stack *stack);

t_stack		*ft_strlstnew(void *content);
t_stack		*ft_strlstlast(t_stack *lst);
void		ft_strlstadd_back(t_stack **lst, t_stack *new);
void		ft_strlstclear(t_stack **lst, void (*del)(void*));
void		ft_strlstdelone(t_stack *lst);
int			ft_strlstsize(t_stack *lst);

#endif
