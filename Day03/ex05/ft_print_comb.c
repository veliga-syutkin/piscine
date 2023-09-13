/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:41:58 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/08/29 15:09:25 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char i, char j, char k)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &k, 1);
	if (i == '7' && j == '8' && k == '9')
	{
	}
	else
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	j = '1';
	k = '2';
	while (i <= '7')
	{
		while (j <= '8')
		{
			while (k <= '9')
			{
				print(i, j, k);
				k = k + 1;
			}
			j = j + 1;
			k = j + 1;
		}
	i = i + 1;
	j = i + 1;
	k = j + 1;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/