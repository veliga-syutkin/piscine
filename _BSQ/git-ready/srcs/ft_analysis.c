/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_analysis.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 03:41:34 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/09/13 05:22:02 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	ft_analysis(char **map, char *vop)
{
	char	*sqr;
	int		line;
	int		column;

	sqr = (char *)malloc(sizeof(char) * (2));
	if (sqr == NULL)
		return (NULL);
	sqr[0] = 1;
	while (map[line] && map[line + sqr[0]][column])
	{
		while (map[line][column] && map[line][column + sqr[0]])
		{
			if (ft_area_checker(line, column, map, sqr[0]) != TRUE)
			{
				if (ft_area_checker(line, column, map, sqr[0] + 1) != TRUE)
					ft_sqr_coord(sqr[0] + 1, line, column, sqr);
			}
			column = ft_column_stepper(column, line, sqr, **map);
		}
		line++;
	}
	return (sqr);
}
