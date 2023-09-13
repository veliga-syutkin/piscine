/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 20:29:04 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/08/30 03:55:38 by vsyutkin         ###   ########.fr       */
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

int	ft_str_is_lowercase(char *str)
{
	int	size;
	int	count;

	count = 0;
	size = ft_strlen(str);
	while (size > 0 && count < size)
	{
		if (str[count] >= 'a' && str[count] <= 'z')
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
    char src[] = "asdfaeryey";
    printf("%d", ft_str_is_lowercase(src));

    return 0;
}
*/