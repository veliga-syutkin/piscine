/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calbiser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:48:44 by calbiser          #+#    #+#             */
/*   Updated: 2023/08/31 03:01:32 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] == s2[i] && i < n -1 && s1[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char	s1[] = "Hello, world!";
	char	s2[] = "Hello!";
	unsigned int n;
//	int	result;

	n = 6;
	printf("%d", ft_strncmp(s1, s2, n));
	printf("%d", strncmp(s1, s2, n));
}
