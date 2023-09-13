/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_possible.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 19:49:41 by nlederge          #+#    #+#             */
/*   Updated: 2023/09/03 23:06:46 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "size_grid.h"

int	ft_max_to_index(int *tab, int index);
int	ft_blocks_from_up(int **grid, int x);
int	ft_blocks_from_left(int **grid, int y);
int	ft_blocks_from_down(int **grid, int x);
int	ft_blocks_from_right(int **grid, int y);

int	ft_possible_row(int **grid, int x, int y, int v)
{
	int		c;

	c = 0;
	while (c < g_size)
	{
		if (grid[c][y] == v && c != x && grid[c][y] != 0)
			return (0);
		c++;
	}
	return (1);
}

int	ft_possible_col(int **grid, int x, int y, int v)
{
	int		r;

	r = 0;
	while (r < g_size)
	{
		if (grid[x][r] == v && r != y && grid[x][r] != 0)
			return (0);
		r++;
	}
	return (1);
}

int	ft_is_pos_possible(int **entries, int **grid, int x, int y)
{
	int		v;

	v = grid[x][y];
	if (!ft_possible_row(grid, x, y, v) || !ft_possible_col(grid, x, y, v))
		return (0);
	if (x == g_size - 1 && ft_blocks_from_right(grid, y) != entries[3][y])
		return (0);
	if (x == g_size - 1 && ft_blocks_from_left(grid, y) != entries[2][y])
		return (0);
	if (y == g_size - 1 && ft_blocks_from_down(grid, x) != entries[1][x])
		return (0);
	if (y == g_size - 1 && ft_blocks_from_up(grid, x) != entries[0][x])
		return (0);
	return (1);
}
