/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 15:40:00 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/09/10 22:21:10 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

void	ft_argc_error(int argc)
{
	char	*nothing;

	nothing = "Nothing. Are you sure your keyboard is working properly?\n";
	if (argc == 1)
		ft_putstr_error(2, nothing);
	if (argc > 3)
		ft_putstr_error(2, "Error\n");
}

char	*ft_dico_check(char *dico)
{
	int		desc;
	char	*fileror;

	fileror = "Error: dictionnary not found; using default dictionnary:\n";
	desc = open(dico, O_RDONLY);
	if (desc == -1)
	{
		dico = "numbers.dict";
		ft_putstr_error(2, fileror);
	}
	close(desc);
	return (dico);
}

void	ft_rush_zero_two(int argc, char **argv, char *dico)
{
	if (argc == 2)
		cut_str(argv[argc - 1], dico);
	else
		cut_str(argv[argc - 1], ft_dico_check(argv[1]));
	ft_putchar_error(2, '\n');
}

int	main(int argc, char **argv)
{
	char	*nothing;
	char	*dico;

	dico = "numbers.dict";
	if (argc != 2 && argc != 3)
		ft_argc_error(argc);
	else if (ft_str_is_numeric(argv[argc - 1]) != 0)
		ft_putstr_error(2, "Error\n");
	else if (ft_strlen(argv[argc - 1]) > 39)
		ft_putstr_error(2, "Dict Error\n");
	else if (ft_str_is_zero(argv[argc - 1]) != 1)
	{
		nothing = "0";
		if (argc == 2)
			search_correspond(dico, nothing, 0);
		else
			search_correspond(ft_dico_check(argv[1]), nothing, 0);
		ft_putchar_error(1, '\n');
	}
	else
		ft_rush_zero_two(argc, argv, dico);
}
