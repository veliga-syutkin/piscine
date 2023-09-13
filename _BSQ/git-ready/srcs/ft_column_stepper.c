/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_column_stepper.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 03:57:59 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/09/13 05:08:44 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

// Is from starting point (included) to +sqr any obstacle on same line
// RETURN the distance. 
int	ft_to_obs_distance(int line, int column, int sqr, char **map)
{
	int	scan;

	scan = 0;
	while (scan <= sqr)
	{
		if (map[line][column + scan] != "o")
			scan++;
		else
			return (scan + 1);
	}
	return (0);
}

int	ft_column_stepper(int column, int line, char *sqr, char **map)
{
	if (ft_to_obs_check_column(line, column, sqr, **map) != FALSE)
		return (column + 1);
	return (ft_to_obs_distance(line, column, sqr, map));
}
