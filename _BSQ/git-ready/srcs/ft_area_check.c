/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_area_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 04:34:17 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/09/13 05:27:16 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	ft_is_obstacl(int line, int column, char **map, int size)
{
	if (map[line][column] != 'o')
		return (FALSE);
	else
		return (TRUE);
}

int	ft_area_checker(int line, int column, char **map, int size)
{
	int	height;
	int	width;

	height = -1;
	width = -1;
	while (height++, height <= size)
	{
		while (width <= size)
		{
			if (ft_is_obstacl(line + height, column + width, map, size) != TRUE)
				width++;
			else
				return (TRUE);
		}
		width = 0;
	}
	return (FALSE);
}
