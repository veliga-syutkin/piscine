/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 07:29:16 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/09/05 12:46:50 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
/*
#include <stdlib.h>  // Pour malloc et free
#include <string.h>  // Pour strdup
#include <stdio.h> 

int main(void)
{
    char original[] = "Bonjour, ceci est un exemple.";
    
    // Utilisation de votre fonction ft_strdup
    char *copie_ft = ft_strdup(original);
    if (copie_ft == NULL)
    {
        printf("Erreur d'allocation mémoire pour ft_strdup.\n");
        return 1;
    }

    // Utilisation de la fonction strdup originale
    char *copie_originale = strdup(original);
    if (copie_originale == NULL)
    {
        printf("Erreur d'allocation mémoire pour strdup.\n");
        free(copie_ft); // Libérer la mémoire allouée par ft_strdup
        return 1;
    }

    // Comparaison des résultats
    printf("Chaîne originale : %s\n", original);
    printf("Copie avec ft_strdup : %s\n", copie_ft);
    printf("Copie avec strdup : %s\n", copie_originale);

    // Libération de la mémoire
    free(copie_ft);
    free(copie_originale);

    return 0;
}
*/