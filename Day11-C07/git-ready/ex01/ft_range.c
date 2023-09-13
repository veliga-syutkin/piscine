/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 22:14:25 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/09/05 19:25:21 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	count;
	int	len;
	int	*range;

	count = 0;
	len = max - min;
	if (min >= max)
		return (NULL);
	range = malloc(len * sizeof(int));
	while (count < len)
	{
		range[count] = min;
		min++;
		count++;
	}
	return (range);
}
