/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:40:32 by nlederge          #+#    #+#             */
/*   Updated: 2023/09/03 23:05:15 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"
#include "size_grid.h"

void	ft_print_grid_single(int **grid, int *stop)
{
	if (*stop == 0)
	{
		ft_print_grid(grid);
		*stop = 1;
	}
}

void	ft_back_track(int **entries, int **grid, int *stop)
{
	int	x;
	int	y;
	int	v;

	y = -1;
	while (++y < g_size)
	{
		x = -1;
		while (++x < g_size)
		{
			if (grid[x][y] == 0)
			{
				v = 0;
				while (++v <= g_size)
				{		
					grid[x][y] = v;
					if (ft_is_pos_possible(entries, grid, x, y))
						ft_back_track(entries, grid, stop);
					grid[x][y] = 0;
				}
				return ;
			}
		}
	}
	ft_print_grid_single(grid, stop);
}

int	ft_process_grid(int **entries, int **grid, int *stop)
{
	if (!ft_check_before(entries))
		return (0);
	ft_back_track(entries, grid, stop);
	return (1);
}

void	ft_freetab(int **tab)
{
	int	i;

	i = 0;
	while (i < g_size)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

int	main(int argc, char *argv[])
{
	int		**entries;
	int		**grid;
	int		stop;

	stop = 0;
	if (argc == 2)
	{
		entries = ft_get_entries(argv[1]);
		grid = ft_create_grid();
		if (entries != NULL && grid != NULL)
		{
			if (ft_process_grid(entries, grid, &stop))
			{
				if (stop == 0)
					write(1, "Error\n", 6);
				return (0);
			}
		}
		if (entries != NULL)
			ft_freetab(entries);
		if (grid != NULL)
			ft_freetab(grid);
	}	
	write(1, "Error\n", 6);
	return (0);
}
