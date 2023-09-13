/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsqr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:57:12 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/09/13 05:17:25 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

char	**ft_putsqr(char *sqr, char **map, char *vop)
{
	int	height;
	int	width;

	height = -1;
	width = -1;
	while (height++ <= sqr[0])
	{
		while (width++ <= sqr[0])
		{
			map[sqr[1]][sqr[2]] = vop[2];
		}
	}
	free(sqr);
	return (map);
}
