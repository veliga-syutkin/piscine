/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:23:34 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/09/01 04:21:37 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	resultat;

	resultat = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		resultat = resultat * (nb);
		nb--;
	}
	return (resultat);
}
/*
int	main(void)
{
	int	num = 9;
	int	factorial = ft_iterative_factorial(num);
	printf("Le factoriel de %d est : %d\n", num, factorial);
	return (0);
}
*/