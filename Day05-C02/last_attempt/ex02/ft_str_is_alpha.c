/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 21:54:17 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/08/30 03:55:55 by vsyutkin         ###   ########.fr       */
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

int	ft_str_is_alpha(char *str)
{
	int	size;
	int	count;

	count = 0;
	size = ft_strlen(str);
	while (size > 0 && count < size)
	{
		if (str[count] >= 'A' && str[count] <= 'Z')
		{
			count++;
		}
		else if (str[count] >= 'a' && str[count] <= 'z')
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
    char src[] = "aaaaaa";
    printf("%d", ft_str_is_alpha(src));

    return 0;
}
*/