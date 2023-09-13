/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:34:34 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/09/13 02:01:19 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_vop(int i, char *vop, char **map)
{
	if (ft_putchar_error(1, vop[i]) == -1)
		ft_free_all(vop, map);
}

void	ft_print_map(char **map, char *vop)
{
	int	line;
	int	column;

	line = -1;
	column = -1;
	while (line++, map[line])
	{
		while (column++, map[line][column])
		{
			if (map[line][column] == '.')
				ft_vop(0, vop, map);
			if (map[line][column] == 'o')
				ft_vop(1, vop, map);
			if (map[line][column] == 'x')
				ft_vop(2, vop, map);
		}
		column = 0;
	}
}
