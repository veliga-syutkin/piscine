/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_visibility_from_up.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 12:12:59 by nlederge          #+#    #+#             */
/*   Updated: 2023/09/03 23:13:42 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "size_grid.h"

int	ft_max_to_index(int *tab, int index);

int	ft_is_visible_from_up(int **grid, int x, int y)
{
	int		col[10];
	int		r;

	r = 0;
	while (r < g_size)
	{
		col[r] = grid[x][r];
		r++;
	}
	if (grid[x][y] >= ft_max_to_index(col, y))
		return (1);
	return (0);
}

int	ft_blocks_from_up(int **grid, int x)
{
	int		v;
	int		r;

	r = 0;
	v = 0;
	while (r < g_size)
		v += ft_is_visible_from_up(grid, x, r++);
	return (v);
}
