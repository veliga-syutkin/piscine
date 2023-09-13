/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 12:56:28 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/08/30 23:52:59 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count < n && src[count])
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}
/*
int main(void)
{
    char src[] = "chatGPT c'est trop genial";
    char dest[75]; // Vous pouvez ajuster la taille en fonction de vos besoins
    printf("Destination: %s\n", dest);
    ft_strncpy(dest, src, 100);
    
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);
    
    return 0;
}
*/