/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 04:31:53 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/09/01 10:11:29 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int main(void)
{
    int base = 9;
    int exponent = 9;
    
    int result = ft_recursive_power(base, exponent);
    
    printf("%d^%d = %d\n", base, exponent, result);
    
    return 0;
}
*/