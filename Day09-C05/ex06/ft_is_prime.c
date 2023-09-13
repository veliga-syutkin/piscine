/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 05:00:05 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/09/05 13:25:33 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
/*
#include <stdio.h>
int main(void)
{
    int num1 = 17;
    int num2 = 25;
    int num3 = 2147483647;

    printf("%d est premier ? %s\n", num1, ft_is_prime(num1) ? "Oui" : "Non");
    printf("%d est premier ? %s\n", num2, ft_is_prime(num2) ? "Oui" : "Non");
    printf("%d est premier ? %s\n", num3, ft_is_prime(num3) ? "Oui" : "Non");

    return 0;
}
*/