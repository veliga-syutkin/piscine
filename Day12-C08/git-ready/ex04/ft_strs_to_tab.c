/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 00:06:13 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/09/06 06:42:06 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* __________________________________________________________________________ */
/* code fonctionnel 

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*dup;

	i = 0;
	dup = (char *)malloc(ft_strlen(str) + 1);
	if (dup == NULL)
		return (NULL);
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*array;

	i = 0;
	array = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (array == NULL)
		return (NULL);
	while (i < ac)
	{
		if (av[i] == NULL)
			return (NULL);
		array[i].size = ft_strlen(av[i]);
		array[i].str = ft_strdup(av[i]);
		array[i].copy = ft_strdup(av[i]);
		if (array[i].str == NULL || array[i].copy == NULL)
			return (NULL);
		i++;
	}
	array[i].str = NULL;
	return (array);
}

*/

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	size;
	int	count;

	count = 0;
	size = ft_strlen(src);
	while (count <= size)
	{
		dest[count] = src[count];
		count++;
	}
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*copy;

	len = ft_strlen(src);
	copy = malloc(len + 1);
	ft_strcpy(copy, src);
	copy[len + 1] = '\0';
	return (copy);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					count;
	struct s_stock_str	*hypertab;

	if (ac < 0)
		return (NULL);
	count = -1;
	hypertab = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (hypertab == NULL)
		return (NULL);
	while (count++, count < ac)
	{
		if (av[count] == NULL)
			return (NULL);
		hypertab[count].size = ft_strlen(av[count]);
		hypertab[count].str = ft_strdup(av[count]);
		hypertab[count].copy = ft_strdup(av[count]);
		if (hypertab[count].str == NULL || hypertab[count].copy == NULL)
			return (NULL);
	}
	hypertab[count].str = 0;
	return (hypertab);
}

/* _________________________________________________________________________ */

/*
// 			Partie MAIN 
 #include <stdio.h> 
void print_array(t_stock_str *array)
{
	int i;

	if (array == NULL)
		printf("Array is null\n");
	else
	{
		for (i = 0; array[i].str != NULL; i++)
			printf("%d - %d %s %s\n", i, array[i].size, array[i].str, array[i].copy);
		printf("%d - NULL\n", i);
	}
}

int main(int argc, char **argv)
{
	print_array(ft_strs_to_tab(argc, argv));
}  
*/
