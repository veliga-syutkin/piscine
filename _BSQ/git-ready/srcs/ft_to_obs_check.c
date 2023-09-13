/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_obs_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:45:05 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/09/13 04:05:21 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

// Is from starting point (included) to +sqr any obstacle on same line
// DOES NOT RETURN any distance. 
int	ft_to_obs_check_line(int line, int column, int sqr, char **map)
{
	int	scan;

	scan = 0;
	while (scan <= sqr)
	{
		if (map[line][column + scan] != "o")
			scan++;
		else
			return (TRUE);
	}
	return (FALSE);
}

// Is from starting point (included) to +sqr any obstacle on same column.
// DOES NOT RETURN any distance. 
int	ft_to_obs_check_column(int line, int column, int sqr, char **map)
{
	int	scan;

	scan = 0;
	while (scan <= sqr)
	{
		if (map[line + scan][column] != "o")
			scan++;
		else
			return (TRUE);
	}
	return (FALSE);
}

int	ft_to_obs_check(int line, int column, int sqr, char **map)
{
	if (ft_to_obs_check_column(line, column, sqr, map) != TRUE
		&& ft_to_obs_check_line(line, column, sqr, map) != TRUE)
		return (FALSE);
	else
		return (TRUE);
}
