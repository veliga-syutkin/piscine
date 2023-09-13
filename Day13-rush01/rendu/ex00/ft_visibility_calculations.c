/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_visibility_calculations.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 20:01:57 by nlederge          #+#    #+#             */
/*   Updated: 2023/09/03 21:50:27 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "size_grid.h"

int	ft_max_to_index(int *tab, int index)
{
	int		max;
	int		i;

	i = 0;
	max = 0;
	while (i <= index && i < g_size)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

int	ft_max_to_index_reverse(int *tab, int index)
{
	int		max;
	int		i;

	i = g_size - 1;
	max = 0;
	while (i >= index && i > 0)
	{
		if (tab[i] > max)
			max = tab[i];
		i--;
	}
	return (max);
}
