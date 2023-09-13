/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_grid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:40:53 by pdeson            #+#    #+#             */
/*   Updated: 2023/09/03 21:49:51 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "size_grid.h"

void	ft_print_grid(int **grid)
{
	int		i;
	int		j;
	char	txt;

	i = 0;
	j = 0;
	while (j < g_size)
	{
		while (i < g_size)
		{
			txt = 48 + grid[i][j];
			write(1, &txt, 1);
			if (j != g_size)
				write(1, " ", 1);
			i++;
		}
		i = 0;
		write(1, "\n", 1);
		j++;
	}
}
