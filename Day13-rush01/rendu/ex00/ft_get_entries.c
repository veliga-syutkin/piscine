/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_entries.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 11:02:49 by nlederge          #+#    #+#             */
/*   Updated: 2023/09/03 22:08:42 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "size_grid.h"

int	ft_is_char_entry_digit(char c)
{
	return ('1' <= c && c <= g_size + '0');
}

int	ft_check_format(char *str)
{
	int		d;
	int		ct;

	ct = 0;
	d = -1;
	while (*str)
	{
		if (d == 0 && !ft_is_char_entry_digit(*str))
			return (0);
		else if ((d == 1 && *str != ' ') || (*str == ' ' && *(str + 1) == '\0'))
			return (0);
		else if (*str == ' ')
			d = 0;
		else if (ft_is_char_entry_digit(*str))
		{
			d = 1;
			ct++;
		}
		else
			return (0);
		str++;
	}
	if (ct == 4 * g_size)
		return (1);
	return (0);
}

void	ft_get_digits(int **entries, char *str)
{
	int		s;
	int		n;

	s = 0;
	n = 0;
	while (*str && s < 4)
	{
		while (*str && n < g_size)
		{
			if (!ft_is_char_entry_digit(*str))
				str++;
			entries[s][n] = *str - '0';
			str++;
			n++;
		}
		n = 0;
		s++;
	}
}

int	**ft_get_entries(char *str)
{
	int		**entries;
	int		s;

	if (!ft_check_format(str))
		return (NULL);
	entries = malloc(4 * sizeof(int *));
	if (!entries)
		return (NULL);
	s = 0;
	while (s < 4)
	{
		entries[s] = malloc(g_size * sizeof(int));
		if (!entries[s])
			return (NULL);
		s++;
	}
	ft_get_digits(entries, str);
	return (entries);
}
