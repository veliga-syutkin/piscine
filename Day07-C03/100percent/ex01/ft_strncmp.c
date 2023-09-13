/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:25:11 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/08/31 10:10:45 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function compare s1 and s2 for n. Returns positive if value of S1 > S2, 
// negative otherwise and 0 if they is no difference. 

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	cnt;

	cnt = 0;
	if (cnt == n)
		return (0);
	while ((s1[cnt] == s2[cnt]) && (cnt < n - 1) && (s1[cnt] && s2[cnt]))
		cnt++;
	return (s1[cnt] - s2[cnt]);
}
/*
int	main(void)
{
	char s1[] = "Hello, world";
	char s2[] = "Hello";
	unsigned int n;
	int result;

	n = 6;
	result = ft_strncmp(s1, s2, n);
	printf("%d", result);
	printf("%d", strncmp(s1, s2, n));
}
*/