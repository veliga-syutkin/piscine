/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:58:03 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/09/01 10:11:35 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
int main(void)
{
    int base = 0;
    int exponent = 0;
    
    int result = ft_iterative_power(base, exponent);
    
    printf("%d^%d = %d\n", base, exponent, result);
    
    return 0;
}
*/