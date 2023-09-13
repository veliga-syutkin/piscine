/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_visibility_from_down.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 12:12:59 by nlederge          #+#    #+#             */
/*   Updated: 2023/09/03 23:13:51 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "size_grid.h"

int	ft_max_to_index_reverse(int *tab, int index);

int	ft_is_visible_from_down(int **grid, int x, int y)
{
	int		col[10];
	int		r;

	r = g_size - 1;
	while (r >= 0)
	{
		col[r] = grid[x][r];
		r--;
	}
	if (grid[x][y] >= ft_max_to_index_reverse(col, y))
		return (1);
	return (0);
}

int	ft_blocks_from_down(int **grid, int x)
{
	int		v;
	int		r;

	r = g_size - 1;
	v = 0;
	while (r >= 0)
		v += ft_is_visible_from_down(grid, x, r--);
	return (v);
}
