/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calbiser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:35:13 by calbiser          #+#    #+#             */
/*   Updated: 2023/08/31 03:04:41 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

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

int	main(void)
{
	char	dest[60] = "Salut, ";
	char	src[] = "Tu es trop fort";
	printf("Avant ft_strncat : %s\n", dest);
    ft_strncat(dest, src, 6);
    printf("Après ft_strncat : %s\n", dest);
	return (0);
}
