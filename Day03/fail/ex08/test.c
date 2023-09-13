/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 20:33:17 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/09/08 23:13:01 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int main(void)
{
	int n = 9;
	ft_print_combn(n);
	return (0);
}