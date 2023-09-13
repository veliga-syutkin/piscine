/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 21:29:33 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/08/29 22:29:22 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char nb)
{
	write(1, &nb, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb > 9)
			ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}
/*
int	main(void)
{
	ft_putnbr(-2147483647);
	ft_putnbr(-2147483648);
	ft_putnbr(-12);
	ft_putnbr(0);
	ft_putnbr(101);
	ft_putnbr(2147483646);
	ft_putnbr(2147483647);
	return (0);
}
*/