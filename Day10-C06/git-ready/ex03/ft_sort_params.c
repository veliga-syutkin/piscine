/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 05:56:42 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/09/09 23:26:45 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		write(1, &str[i++], 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	print_params(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i++]);
		write(1, "\n", 1);
	}
}

void	sort_params(int argc, char **argv)
{
	int		i;
	char	*str;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			str = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = str;
			i = 1;
		}
		else
			i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc <= 0)
		return (0);
	sort_params(argc, argv);
	print_params(argc, argv);
	return (argc);
}
