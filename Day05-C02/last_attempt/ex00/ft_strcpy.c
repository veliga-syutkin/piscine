/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 12:37:20 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/08/30 03:56:45 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

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

char	*ft_strcpy(char *dest, char *src)
{
	int	size;
	int	count;

	count = 0;
	size = ft_strlen(src);
	while (count <= size)
	{
		dest[count] = src[count];
		count++;
	}
	return (dest);
}
/*
int main(void)
{
    char src[] = "chatGPT c'est trop genial";
    char dest[100];
    
    ft_strcpy(dest, src);
    
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);
    
    return 0;
}
*/