/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 05:05:27 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/09/05 13:23:59 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	scan;

	scan = 2;
	if (nb <= 1)
		return (0);
	while (scan * scan <= nb && scan < 46341)
	{
		if (nb % scan == 0)
			return (0);
		scan++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
		nb++;
	return (nb);
}
/*
int main(void)
{
    int num1 = 10;
    int num2 = 20;
    int num3 = 2147483646;
    
    printf("Prochain nb 1er après %d : %d\n", num1, ft_find_next_prime(num1));
    printf("Prochain nb 1er après %d : %d\n", num2, ft_find_next_prime(num2));
    printf("Prochain nb 1er après %d : %d\n", num3, ft_find_next_prime(num3));
    
    return 0;
}
*/