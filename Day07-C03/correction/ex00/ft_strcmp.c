/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calbiser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:39:07 by calbiser          #+#    #+#             */
/*   Updated: 2023/08/31 02:59:06 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int main(void)
{
    char s1[] = "Salut ceci est un test";
    char s2[] = "Salut ceci est un tes";
    printf("%d", ft_strcmp(s1, s2));
	printf("%d", strcmp(s1, s2));
    return 0;
}
