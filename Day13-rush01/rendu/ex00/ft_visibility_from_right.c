/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_visibility_from_right.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 12:13:43 by nlederge          #+#    #+#             */
/*   Updated: 2023/09/03 23:13:32 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "size_grid.h"

int	ft_max_to_index_reverse(int *tab, int index);

int	ft_is_visible_from_right(int **grid, int x, int y)
{
	int		row[10];
	int		c;

	c = g_size - 1;
	while (c >= 0)
	{
		row[c] = grid[c][y];
		c--;
	}
	if (grid[x][y] >= ft_max_to_index_reverse(row, x))
		return (1);
	return (0);
}

int	ft_blocks_from_right(int **grid, int y)
{
	int		v;
	int		c;

	c = g_size - 1;
	v = 0;
	while (c >= 0)
		v += ft_is_visible_from_right(grid, c--, y);
	return (v);
}
