/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 20:54:33 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/08/30 03:55:13 by vsyutkin         ###   ########.fr       */
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

char	*ft_strupcase(char *str)
{
	int	size;
	int	count;

	count = 0;
	size = ft_strlen(str);
	while (count <= size)
	{
		if (str[count] >= 'a' && str[count] <= 'z')
		{
			str[count] = str[count] - 32;
		}
		count++;
	}
	return (str);
}
/*
int main(void)
{
    char src[] = "chatGPT c'est trop genial";

    ft_strupcase(src);
    printf("Source: %s\n", src);
    return (0);
}
*/