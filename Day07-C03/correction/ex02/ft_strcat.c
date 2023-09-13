/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calbiser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:07:56 by calbiser          #+#    #+#             */
/*   Updated: 2023/08/31 03:03:45 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*dest_ptr;

	dest_ptr = dest;
	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}
	while (*src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}
	*dest_ptr = '\0';
	return (dest);
}

int main()
{
    char dest[50] = "Hello, ";
    char src[] = "world!";

    printf("Before concatenation:\n");
    printf("dest: %s\n", dest);
    printf("src: %s\n", src);

    ft_strcat(dest, src);

    printf("\nAfter concatenation:\n");
    printf("dest: %s\n", dest);
    printf("src: %s\n", src);

    return 0;
}
