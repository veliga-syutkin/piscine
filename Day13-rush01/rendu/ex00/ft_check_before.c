/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_before.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 13:15:45 by nlederge          #+#    #+#             */
/*   Updated: 2023/09/03 21:48:32 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "size_grid.h"

int	ft_check_ones_per_side(int **entries)
{
	int		ct;
	int		s;
	int		n;

	s = 0;
	n = 0;
	ct = 0;
	while (s < 4)
	{
		while (n < g_size)
		{
			if (entries[s][n] == 1)
				ct++;
			n++;
		}
		if (ct != 1)
			return (0);
		n = 0;
		ct = 0;
		s++;
	}
	return (1);
}

int	ft_get_opp(int s)
{
	if (s == 0 || s == 2)
		return (s + 1);
	else
		return (s - 1);
}

int	ft_check_high_low_opp(int **entries)
{
	int		s;
	int		n;

	s = 0;
	n = 0;
	while (s < 4)
	{
		while (n < g_size)
		{
			if (entries[s][n] == g_size && entries[ft_get_opp(s)][n] != 1)
				return (0);
			n++;
		}
		n = 0;
		s++;
	}
	return (1);
}

int	ft_check_before(int	**entries)
{
	if (!ft_check_ones_per_side(entries) || !ft_check_high_low_opp(entries))
		return (0);
	else
		return (1);
}
