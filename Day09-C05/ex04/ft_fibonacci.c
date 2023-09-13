/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 04:40:27 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/09/01 05:13:48 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + (ft_fibonacci(index - 2)));
}
/*
int main(void)
{
    int n1 = 0;
    int n2 = 5;
    int n3 = 10;
    
    printf("Fibonacci(%d) = %d\n", n1, ft_fibonacci(n1));
    printf("Fibonacci(%d) = %d\n", n2, ft_fibonacci(n2));
    printf("Fibonacci(%d) = %d\n", n3, ft_fibonacci(n3));
    
    return 0;
}
*/