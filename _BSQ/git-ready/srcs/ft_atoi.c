/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:08:43 by bepicard          #+#    #+#             */
/*   Updated: 2023/09/13 02:01:41 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

unsigned int	ft_atoi(char *str, char *vop)
{
	unsigned int	y;
	unsigned int	i;

	if (!str)
		return (0);
	y = 0;
	while (str[i] <= '9' && str[i] >= '0')
	{
		y = (y * 10) + (str[i] - '0');
		i++;
	}
	vop[0] = str[i];
	vop[1] = str[i + 1];
	vop[2] = str[i + 2];
	return (y);
}
