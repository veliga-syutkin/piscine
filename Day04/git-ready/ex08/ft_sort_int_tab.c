/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 07:35:41 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/08/27 11:30:55 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Compare first entry of the array to the all others. 
//If it's the smallest, keep it in place, repeat for incoming. 
//Else, swap.

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_swap(int *a, int *b)
{
	int	buffer;

	buffer = *a;
	*a = *b;
	*b = buffer;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	count;
	int	scan;

	count = 0;
	while (count <= size)
	{
		scan = count + 1;
		while (scan < size)
		{
			if (tab[scan] < tab[count])
			{
				ft_swap(&tab[scan], &tab[count]);
			}
			scan++;
		}
		count++;
	}
}
/*
int	main(void)
{
	int	tab[3];
	int	size;
	int	i;

	tab[0] = 5;
	tab[1] = 2;
	tab[2] = 9;
	size = sizeof(tab) / sizeof(tab[0]);
	i = 0;
	printf("Tableau avant le tri : ");
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(tab, size);
	printf("Tableau après le tri : ");
	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/