/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 05:52:37 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/09/09 21:59:00 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char *argv[])
{
	int	scan;

	scan = argc - 1;
	if (argc > 0)
	{
		while (scan > 0)
		{
			ft_putstr(argv[scan]);
			ft_putchar('\n');
			scan--;
		}
	}
}

/*
int	main(int argc, char *argv[])
{
	int	count;

	count = 1;
	if (argc > 0)
	{
		while (argv[count])
		{
			ft_putstr(argv[count]);
			ft_putchar('\n');
			count++;
		}
	}
}

*/