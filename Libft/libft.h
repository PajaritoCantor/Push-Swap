/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 17:57:29 by juan              #+#    #+#             */
/*   Updated: 2025/08/05 20:59:11 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

char	**ft_split(const char *s, char c);
char	*ft_substr(const char *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s);
void	*ft_memcpy(void *dest, const void *src, size_t n);

#endif
