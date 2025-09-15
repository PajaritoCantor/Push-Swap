/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 14:57:38 by jurodrig          #+#    #+#             */
/*   Updated: 2025/09/15 02:24:32 by jurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_free_split(char **args)
{
	int	j;

	j = 0;
	if (!args)
		return ;
	while (args[j])
	{
		free(args[j]);
		j++;
	}
	free(args);
}
