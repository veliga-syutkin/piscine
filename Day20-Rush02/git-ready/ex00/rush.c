/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 11:59:30 by lkary-po          #+#    #+#             */
/*   Updated: 2023/09/10 22:58:58 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int	size_file(char *dict)
{
	int		i;
	char	c;
	int		desc;

	i = 0;
	desc = open(dict, O_RDONLY);
	while ((read(desc, &c, sizeof(c))) > 0)
		i++;
	close(desc);
	return (i);
}

char	*file_to_str(char *dict)
{
	int		desc;
	char	c;
	int		i;
	char	*tab;

	desc = open(dict, O_RDONLY);
	i = size_file(dict);
	tab = malloc(i * sizeof(char));
	if (tab == NULL)
		return (0);
	i = 0;
	while ((read(desc, &c, sizeof(c))) > 0)
	tab[i++] = c;
	close(desc);
	return (tab);
}

void	put_alphanbr_only(char *tab, int end)
{
	int	i;

	i = 0;
	while ((tab[i] > '9' || tab[i] < '0') && (tab[i] != ':'))
		i++;
	while (tab[i] == ' ' || tab[i] == ':')
		i++;
	while (tab[i] != '\n')
	{
		write(1, &tab[i], 1);
		i++;
	}
	if (end == 0)
		write(1, " ", 1);
}

int	backward_check(char *str)
{
	while (*str != '\n' && *(str - 1) != 0)
	{
		if (*str != ' ' && *str != '\t'
			&& *str != '\r' && *str != '\a' && *str != '\f')
		{
			return (0);
		}
		str--;
	}
	return (1);
}

void	search_correspond(char *dict, char *brut_nbr, int end)
{
	char	*tab;
	int		j;
	int		i;

	i = 0;
	tab = file_to_str(dict);
	while (tab[i])
	{
		j = 0;
		while ((tab[i] >= '0' && tab[i] <= '9') && (tab[i + j] == brut_nbr[j]))
		{
			if ((tab[i + j + 1] < '0' || tab[i + j + 1] > '9')
				&& brut_nbr[j + 1] == '\0' && backward_check(&tab[i - 1]) == 1)
			{
				put_alphanbr_only(&tab[i + j + 1], end);
				free(tab);
				return ;
			}
			j++;
		}
		i++;
	}
	free(tab);
	write(2, "Dict Error\n", 11);
}
