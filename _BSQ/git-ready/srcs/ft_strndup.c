/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:29:33 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/09/13 03:14:57 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

char	*ft_strndup(char *str, int n)
/* It creates a new string by copying the first n characters of str 
and adds a null character at the end. 
It returns a pointer to the new string. */
{
	int		i;
	char	*dup;

	i = 0;
	dup = (char *)malloc(sizeof(char) * (n + 1));
	if (dup == NULL)
		return (NULL);
	while (str[i] && i < n)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
