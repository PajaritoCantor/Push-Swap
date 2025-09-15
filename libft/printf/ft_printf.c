/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 15:28:45 by jurodrig          #+#    #+#             */
/*   Updated: 2025/09/15 15:36:20 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	ft_conversion_fd_two(int fd, char conv, va_list arg)
{
	int	len;

	len = 0;
	if (conv == 'd' || conv == 'i')
		len = ft_putnbr_base(va_arg(arg, int), "0123456789", 10, fd);
	else if (conv == 'u')
		len = ft_putnbr_base(va_arg(arg, unsigned int), "0123456789", 10, fd);
	else if (conv == 'x')
		len = ft_putnbr_base(va_arg(arg, unsigned int),
				"0123456789abcdef", 16, fd);
	else if (conv == 'X')
		len = ft_putnbr_base(va_arg(arg, unsigned int),
				"0123456789ABCDEF", 16, fd);
	else if (conv == '%')
		len = ft_putchar(fd, '%');
	return (len);
}

static int	ft_conversion_fd(int fd, char conv, va_list arg)
{
	int		len;
	void	*p;

	len = 0;
	if (conv == 'c')
		len = ft_putchar(fd, va_arg(arg, int));
	else if (conv == 's')
		len = ft_putstr(fd, va_arg(arg, char *));
	else if (conv == 'p')
	{
		p = va_arg(arg, void *);
		if (!p)
			len = ft_putstr(fd, "(nil)");
		else
		{
			len += ft_putstr(fd, "0x");
			len += ft_putnbr_base_p((unsigned long)p,
					"0123456789abcdef", 10, fd);
		}
	}
	else
		len = ft_conversion_fd_two(fd, conv, arg);
	return (len);
}

static int	ft_xprintf(int fd, const char *str, va_list args)
{
	int	len;

	len = 0;
	while (*str)
	{
		if (*str == '%' && *(str + 1))
		{
			str++;
			len += ft_conversion_fd(fd, *str++, args);
		}
		else
			len += ft_putchar(fd, *str++);
	}
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	va_start(args, format);
	len = ft_xprintf(1, format, args);
	va_end(args);
	return (len);
}

int	ft_printfd(int fd, const char *format, ...)
{
	va_list	args;
	int		len;

	va_start(args, format);
	len = ft_xprintf(fd, format, args);
	va_end(args);
	return (len);
}
