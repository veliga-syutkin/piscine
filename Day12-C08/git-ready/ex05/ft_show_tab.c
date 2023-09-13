/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 03:03:08 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/09/06 03:48:11 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

void	ft_show_tab(struct s_stock_str *par)
{
	int	count;

	count = -1;
	while (count++, par[count].str != 0)
	{
		ft_putstr(par[count].str);
		ft_putchar('\n');
		ft_putnbr(par[count].size);
		ft_putchar('\n');
		ft_putstr(par[count].copy);
		ft_putchar('\n');
	}
}
