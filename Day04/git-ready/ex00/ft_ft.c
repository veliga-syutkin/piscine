/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 03:34:02 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/08/27 11:31:53 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int	main(void)
{
	int	num;

	num = 0;
	ft_ft(&num);
	ft_putchar(num);
	return (0);
}
*/