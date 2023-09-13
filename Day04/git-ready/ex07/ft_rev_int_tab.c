/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 19:53:20 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/08/27 11:30:57 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	left;
	int	right;
	int	temp;

	left = 0;
	right = size - 1;
	while (left < right)
	{
		temp = tab[left];
		tab[left] = tab[right];
		tab[right] = temp;
		left++;
		right--;
	}
}
/*
int	main(void)
{
	int	tab[3];
	int	size;

	tab[0] = 5;
	tab[1] = 2;
	tab[2] = 9;
	size = sizeof(tab) / sizeof(tab[0]);

	printf("Tableau avant le tri : ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}
	printf("\n");
	ft_rev_int_tab(tab, size);
	printf("Tableau après le tri : ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}
	printf("\n");
	return (0);
}
*/