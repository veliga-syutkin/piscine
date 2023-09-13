/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glemaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 09:48:59 by glemaire          #+#    #+#             */
/*   Updated: 2023/09/10 21:38:06 by glemaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
void	search_correspond(char *dict, char *brut_nbr, int end);

char	*thousands(char *str, int i)
{
	int		j;
	char	*thou;

	thou = malloc((ft_strlen(str) - i + 1) * sizeof(char));
	if (thou == NULL)
		return (NULL);
	j = 1;
	thou[0] = '1';
	while (j < ft_strlen(str) - i)
		thou[j++] = '0';
	thou[j] = '\0';
	return (thou);
}

void	hundreds(char *str, int i, char *dico)
{
	char	temp[2];

	if (str[i] != '0')
	{
		temp[0] = str[i];
		temp[1] = '\0';
		search_correspond(dico, temp, 0);
		search_correspond(dico, "100", 0);
	}
}

int	tens(char *str, int i, int n, char *dico)
{
	char	temp[3];

	if (str[i] == '1')
	{
		temp[0] = '1';
		temp[1] = str[i + 1];
		temp[2] = '\0';
		if (i == ft_strlen(str) - 2)
			search_correspond(dico, temp, 1);
		else
			search_correspond(dico, temp, 0);
		n = 1;
	}
	else if (str[i] != '0')
	{
		temp[0] = str[i];
		temp[1] = '0';
		search_correspond(dico, temp, 0);
	}
	return (n);
}

int	units(char *str, int i, int n, char *dico)
{
	char	*thou;
	char	temp[2];

	if (str[i] != '0' && n == 0)
	{
		temp[0] = str[i];
		temp[1] = '\0';
		if (i == ft_strlen(str) - 1)
			search_correspond(dico, temp, 1);
		else
			search_correspond(dico, temp, 0);
	}
	if (i != ft_strlen(str) - 1
		&& !(str[i] == '0' && str[i - 1] == '0' && str[i - 2] == '0' && i >= 2))
	{
		thou = thousands(str, i);
		if (thou == NULL)
			return (-1);
		search_correspond(dico, thou, 0);
		free(thou);
		n = 0;
	}
	return (n);
}

void	cut_str(char *str, char *dico)
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (str[i] == '0')
		i++;
	while (str[i])
	{
		if ((ft_strlen(str) - 1 - i) % 3 == 0)
		{
			n = units(str, i, n, dico);
			if (n == -1)
				return ;
		}
		else if ((ft_strlen(str) - 1 - i) % 3 == 1)
			n = tens(str, i, n, dico);
		else
			hundreds(str, i, dico);
		i++;
	}
}
