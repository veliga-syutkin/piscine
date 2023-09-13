/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 21:29:33 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/08/29 16:16:25 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char *c)
{
	while (*c != '\0')
	{
		write(1, c, 1);
		c++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_bignumber(int nb)
{
	if (nb >= 10)
	{
		ft_bignumber(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -1 * nb;
	}
	else if (nb < 10)
		ft_putchar(nb + '0');
	if (nb >= 10)
		ft_bignumber(nb);
}
/*
int	main(void)
{
	ft_putnbr(-2147483647);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(-12);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(101);
	ft_putchar('\n');
	ft_putnbr(2147483646);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	return (0);
}
*/