/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapstd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:19:07 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/09/13 02:01:23 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

char	**ft_mapstd(char **map, char *vop)
{
	int	line;
	int	column;

	line = 0;
	column = 0;
	while (map[line])
	{
		while (map[line][column])
		{
			if (map[line][column] == vop[0])
				map[line][column] = '.';
			if (map[line][column] == vop[1])
				map[line][column] = 'o';
			column++;
		}
		line++;
		column = 0;
	}
	return (map);
}
