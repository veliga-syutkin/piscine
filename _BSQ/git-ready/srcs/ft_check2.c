/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepicard <bepicard@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:25:19 by bepicard          #+#    #+#             */
/*   Updated: 2023/09/13 12:26:29 by bepicard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	ft_count_n(char *buf, int read_f, char *vop, int *count)
{
	int				i;
	unsigned int	c;

	if (!buf)
		return (0);
	i = 0;
	c = 0;
	while (i < read_f)
	{
		if (buf[i] != p[0] || buf[i] != p[1])
			return (1);
		if (buf[i] == '\n')
			*count = *count + 1;
		i++;
	}
	return (0);
}
