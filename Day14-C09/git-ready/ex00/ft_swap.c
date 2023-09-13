/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:47:21 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/08/24 19:09:58 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	buffer;

	buffer = *a;
	*a = *b;
	*b = buffer;
}
/*
int	main(void)
{
	int a = 2; 
	int b = 4; 

	printf("Before: a = %d, b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("After: a = %d, b = %d\n", a, b);
	return (0);
}
*/