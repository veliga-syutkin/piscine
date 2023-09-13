/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 21:22:59 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/08/30 03:54:50 by vsyutkin         ###   ########.fr       */
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

char	*ft_strlowcase(char *str)
{
	int	size;
	int	count;

	count = 0;
	size = ft_strlen(str);
	while (count <= size)
	{
		if (str[count] >= 'A' && str[count] <= 'Z')
		{
			str[count] = str[count] + 32;
		}
		count++;
	}
	return (str);
}
/*
int	main(void)
{
	char	src[] = "chatGPT c'est trop genial";
	
	ft_strlowcase(src);
	printf("Source: %s\n", src);
	return (0);
}
*/