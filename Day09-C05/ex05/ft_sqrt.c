/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 04:44:48 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/09/01 09:55:49 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	while ((sqrt * sqrt) <= nb && sqrt < 46341)
	{
		if ((sqrt * sqrt) == nb)
			return (sqrt);
		sqrt++;
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
    int num1 = 16;
    int result1 = ft_sqrt(num1);
    printf("Square root of %d: %d\n", num1, result1);

    int num2 = 25;
    int result2 = ft_sqrt(num2);
    printf("Square root of %d: %d\n", num2, result2);

    int num3 = 10;
    int result3 = ft_sqrt(num3);
    printf("Square root of %d: %d\n", num3, result3);

    return 0;
}
*/