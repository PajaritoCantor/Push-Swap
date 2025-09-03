/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 12:19:49 by jurodrig          #+#    #+#             */
/*   Updated: 2025/09/03 01:31:28 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_print_error(char *error_msg, int y)
{
	ft_printfd(2, "Error: %s\n", error_msg);
	if (y)
		exit(EXIT_FAILURE);
	exit (1);
}