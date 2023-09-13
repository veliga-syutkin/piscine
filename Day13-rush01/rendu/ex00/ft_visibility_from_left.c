/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_visibility_from_left.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 12:13:43 by nlederge          #+#    #+#             */
/*   Updated: 2023/09/03 23:13:25 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "size_grid.h"

int	ft_max_to_index(int *tab, int index);

int	ft_is_visible_from_left(int **grid, int x, int y)
{
	int		row[10];
	int		c;

	c = 0;
	while (c < g_size)
	{
		row[c] = grid[c][y];
		c++;
	}
	if (grid[x][y] >= ft_max_to_index(row, x))
		return (1);
	return (0);
}

int	ft_blocks_from_left(int **grid, int y)
{
	int		v;
	int		c;

	c = 0;
	v = 0;
	while (c < g_size)
		v += ft_is_visible_from_left(grid, c++, y);
	return (v);
}
