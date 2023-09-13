/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 04:39:07 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/08/31 11:34:27 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Chain DEST; Chain SRC; function with n2 = FUSIO:
// Result: chain DESTSR

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*dest_ptr;

	dest_ptr = dest;
	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}
	while (*src != '\0' && nb > 0)
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		nb--;
	}
	*dest_ptr = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	dest[60] = "HelloWorld";
	char	src[] = "HelloWorld";
	int	i = 10;
	printf("Avant ft_strncat : %s\n", dest);
    ft_strncat(dest, src, i);
    printf("Après ft_strncat : %s\n", dest);

	printf("Avant ft_strncat : %s\n", dest);
    strncat(dest, src, i);
    printf("Après ft_strncat : %s\n", dest);
	return (0);
}
*/