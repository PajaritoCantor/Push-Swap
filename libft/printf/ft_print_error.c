/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 12:19:49 by jurodrig          #+#    #+#             */
/*   Updated: 2025/09/16 17:45:05 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_print_error(char *error_msg, int y)
{
	ft_printfd(y, "%s", error_msg);
	exit(EXIT_FAILURE);
}
