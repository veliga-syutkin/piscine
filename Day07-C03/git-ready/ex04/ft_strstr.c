/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 04:57:18 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/09/02 18:02:02 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Looking 456 in str = A456Z 

#include <unistd.h>
#include <stdio.h>
#include <string.h> 

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	tmp;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			tmp = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					tmp = 1;
				i++;
			}
			if (tmp == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
/*
int	main(void)
{
	char	str[] = "Salut Morgane, Cest Moi. C'est vous, le Monteur?";
	char	*to_find;

	to_find = "Moi";
	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));
	return (0);
}
*/