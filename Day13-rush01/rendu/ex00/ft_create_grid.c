/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_grid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:40:53 by pdeson            #+#    #+#             */
/*   Updated: 2023/09/03 22:07:05 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "size_grid.h"

void	ft_fill_grid_zeros(int **grid)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < g_size)
	{
		while (i < g_size)
		{
			grid[i][j] = 0;
			i++;
		}
		i = 0;
		j++;
	}
}

int	**ft_create_grid(void)
{
	int	**grid;
	int	i;

	grid = malloc(g_size * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	i = 0;
	while (i < g_size)
	{
		grid[i] = malloc(g_size * sizeof(int));
		if (grid[i] == NULL)
			return (NULL);
		i++;
	}
	ft_fill_grid_zeros(grid);
	return (grid);
}
