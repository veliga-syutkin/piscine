/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 21:17:41 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/09/09 21:38:50 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		print('-');
	}
	if (nb >= 10)
	{
		print(nb / 10 + '0');
		print(nb % 10 + '0');
	}
	else
	{
		print('0');
		print(nb % 10 + '0');
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	while (x <= 98)
	{
		while (y <= 99)
		{
			ft_putnbr(x);
			write(1, " ", 1);
			ft_putnbr(y);
			if (x != 98)
				write(1, ", ", 2);
			y++;
		}
		x++;
		y = x + 1;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/