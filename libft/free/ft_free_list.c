/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 01:55:56 by jurodrig          #+#    #+#             */
/*   Updated: 2025/09/16 21:59:21 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_free_list(t_stack*input)
{
	ft_printfd(2, "Error\n");
	if (input)
		ft_strlstclear(&input, free);
	exit(1);
}
