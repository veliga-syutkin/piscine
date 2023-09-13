/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 23:25:03 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/08/29 15:34:05 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_combinations_recursive(int arr[], int n, int index)
{
	int	i;

	if (index == n)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(arr[i] + '0');
			i++;
		}
		ft_putchar('\n');
		return ;
	}
	if (index == 0)
		i = 0;
	else
		i = arr[index - 1] + 1;
	while (i <= 9)
	{
		arr[index] = i;
		print_combinations_recursive(arr, n, index + 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	arr[10];

	print_combinations_recursive(arr, n, 0);
}
/*
int	main(void)
{
	int	n;

	n = 1;
	while (n <= 9)
	{
		ft_print_combn(n);
		n++;
	}
	return (0);
}
*/