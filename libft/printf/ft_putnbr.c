/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 17:58:36 by juan              #+#    #+#             */
/*   Updated: 2025/08/13 20:42:01 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_putnbr_base(long n, char *base, int lenbase)
{
	int	len;

	len = 0;
	if (lenbase == 0)
		lenbase = ft_strlen_int(base);
	if (n < 0)
	{
		n *= -1;
		len = len + ft_putchar('-');	
	}
	if (n > (lenbase - 1))
	{
		len = len + ft_putnbr_base(n / lenbase, base, lenbase);
		n = n % lenbase;
	}
	ft_putchar(base[n]);
	len++;
	return (len);
}

int	ft_putnbr_base_p(long n, char *base, int lenbase, int fd)
{
	unsigned int 	nbr;
	unsigned int 	baselen;
	int				len;

	nbr = n;
	len = 0;
	baselen = lenbase;
	if (baselen == 0)
		return (ft_strlen(base));
	if (nbr > (baselen - 1))
	{
		len = len + ft_putnbr_base_p(nbr / baselen, base, baselen, fd);
		nbr = nbr % baselen;
	}
	ft_putchar(base[nbr]);
	len++;
	return (len);
}
