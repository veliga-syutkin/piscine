/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 04:07:56 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/08/31 09:52:06 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function compares two tables S1 and S2

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while ((s1[count] == s2[count]) && s1[count] && s2[count])
		count++;
	return (s1[count] - s2[count]);
}
/*
int main(void)
{
    char s1[] = "Salut ceci est un test";
    char s2[] = "Salut ceci est un tes";
    printf("%d", ft_strcmp(s1, s2));
	printf("%d", strcmp(s1, s2));
    return 0;
}
*/