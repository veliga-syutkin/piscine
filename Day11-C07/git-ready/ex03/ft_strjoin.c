/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:29:51 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/09/05 12:43:30 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = 0;
	src_len = 0;
	i = 0;
	while (dest[dest_len] && dest_len < size)
		dest_len++;
	while (src[src_len])
		src_len++;
	if (dest_len >= size)
		return (size + src_len);
	while (src[i] && dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		t_len;
	int		i;
	char	*result;

	t_len = 0;
	i = -1;
	while (i++, i < size)
		t_len = t_len + ft_strlen(strs[i]);
	if (size > 1)
		t_len = t_len + size * ft_strlen(sep);
	result = (char *)malloc(t_len * sizeof(char) + 1);
	if (result == NULL)
		return (NULL);
	if (size == 0)
		return (result);
	i = 0;
	while (i <= size - 1)
	{
		ft_strlcat(result, strs[i], t_len + 1);
		if (i < size - 1)
			ft_strlcat(result, sep, t_len + 1);
		i++;
	}
	return (result);
}

/*
#include <stdlib.h>

int main(void)
{
    char *strings[] = { "Hello", "world" };
    char *separator = "";
    
    // Appel de ft_strjoin pour concaténer les chaînes
    char *result = ft_strjoin(2, strings, separator);
    
    if (result != NULL)
    {
        printf("Résultat : %s\n", result);
		printf("\n %d", ft_strlen(result));
        free(result); // N'oubliez pas de libérer la mémoire 
    }
    else
    {
        printf("Allocation mémoire a échoué.\n");
    }
    return (0);
}
*/