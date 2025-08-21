/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 17:58:36 by juan              #+#    #+#             */
/*   Updated: 2025/08/20 18:52:45 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_putnbr_base(long n, char *base, int lenbase, int fd)
{
	int	len;

	len = 0;
	if (lenbase == 0)
		lenbase = ft_strlen_int(base);
	if (n < 0)
	{
		n *= -1;
		len = len + ft_putchar('-', fd);
	}
	if (n > (lenbase - 1))
		len += ft_putnbr_base(n / lenbase, base, lenbase, fd);
	len += ft_putchar(base[n % lenbase], fd);
	return (len);
}

int	ft_putnbr_base_p(long n, char *base, int lenbase, int fd)
{
	unsigned int 	baselen;
	int				len;

	len = 0;
	baselen = lenbase;
	if (baselen == 0)
		return (ft_strlen(base));
	if (n > (baselen - 1))
		len += ft_putnbr_base_p(n / baselen, base, baselen, fd);
	len += ft_putchar(base[n & baselen], fd);
	return (len);
}
