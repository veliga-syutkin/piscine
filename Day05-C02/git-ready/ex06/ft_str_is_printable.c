/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 20:53:09 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/08/30 03:55:20 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

int	ft_str_is_printable(char *str)
{
	int	size;
	int	count;

	count = 0;
	size = ft_strlen(str);
	while (size > 0 && count < size)
	{
		if (str[count] >= ' ' && str[count] <= '~')
		{
			count++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int main(void)
{
    char src[] = "Hello,\tWorld";
    printf("%d", ft_str_is_printable(src));

    return 0;
}
*/