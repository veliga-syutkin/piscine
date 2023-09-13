/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 23:05:03 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/09/07 04:54:47 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	count;
	int	len;
	int	*result;

	count = 0;
	len = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	result = malloc(len * sizeof(int));
	if (result == NULL)
		return (-1);
	while (count < len)
	{
		result[count] = min;
		min++;
		count++;
	}
	*range = result;
	return (len);
}


#include <stdio.h>
int main(void)
{
    int *range;
    int min = 5;
    int max = 12;

    int size = ft_ultimate_range(&range, min, max);

    if (size == -1)
    {
        printf("Allocation mémoire échouée.\n");
        return 1;
    }
    else if (size == 0)
    {
        printf("Aucun élément à stocker, le tableau est NULL.\n");
        return 1;
    }
    else
    {
		printf("%d",size);
		printf("\n");
        printf("Tableau alloué avec succès : ");
        for (int i = 0; i < size; i++)
            printf("%d ", range[i]);
        printf("\n");
		free(range); // N'oubliez pas de libérer la mémoire allouée
    }
}
