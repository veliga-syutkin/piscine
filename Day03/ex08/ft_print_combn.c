/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 21:17:33 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/09/10 14:29:27 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_tab(int n, int *tab)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a++ < n)
	{
		if (tab[a + 1] >= tab [a])
			b = 0;
	}
	if (!b)
		return ;
	a = -1;
	while (a++ < n)
		ft_putchar(tab[a] + '0');
	if (tab[0] < 10 - n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	int	a;
	int	tab[10];

	if (n > 10 || n < 0)
		return ;
	a = -1;
	while (a++ < n)
		tab[a] = a;
	while (tab[0] <= (10 - n) && n >= 1)
	{
		ft_tab(n, tab);
		if (n == 10)
			break ;
		tab[n - 1]++;
		a = n;
		while (a && n > 1)
		{
			a--;
			if (tab[a] > 9)
			{
				tab[a - 1]++;
				tab[a] = 0;
			}
		}
	}
}

int main(void)
{
	int n = 2;
	ft_print_combn(n);
	return (0);
}

/*  

CODE QUI MARCHE MAIS PAS ACCEPTER PAR LA MOULINETTE
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_separator(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void ft_print_combn(int n)
{
	int arr[10];
	int i;

	i = 0;
	while (i < n)
	{
		arr[i] = i;
		ft_putchar(arr[i] + '0');
		i++;
	}
	while (1)
	{
		i = n - 1;
		while (i >= 0 && arr[i] == 9 - (n - 1 - i))
			i--;
		if (i < 0)
			break;
		arr[i]++;
		ft_separator();
		int j = i + 1;
		while (j < n)
		{
			arr[j] = arr[j - 1] + 1;
			ft_putchar(arr[j] + '0');
			j++;
		}
	}
}
*/