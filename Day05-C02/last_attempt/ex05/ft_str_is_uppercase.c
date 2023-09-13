/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 20:51:49 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/08/31 04:01:15 by vsyutkin         ###   ########.fr       */
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

int	ft_str_is_uppercase(char *str)
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
    char src[] = "ASDFASFE";
    printf("%d", ft_str_is_upperrcase(src));

    return 0;
}
*/