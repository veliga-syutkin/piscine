/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 04:05:51 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/09/07 19:23:24 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

int	ft_str_is_sym(char c, char *str)
{
	int	size;
	int	count;

	count = 0;
	size = ft_strlen(str);
	while (size > 0 && count < size)
	{
		if (str[count] != c)
			count++;
		else
			return (1);
	}
	return (0);
}

int	ft_len_sep(char *str, char *charset)
{
	int	len;
	int scan;

	scan = 0;
	len = 1;
	while (str[scan])
	{
		if (ft_str_is_sym(str[scan], charset) == 0)
			len++;
		scan++;
	}
	return (len);
}

//               look in: |  separator:
char	**ft_split(char *str, char *charset)
{
	char	**filtre;
	int		chain;
	int		scan;
	int		pos;

	pos = ft_len_sep(str, charset) + 1;
	filtre = (char **)malloc(pos * sizeof(char *));
	if (filtre == NULL)
		return (NULL);
	printf("%d", pos);
	scan = -1;
	pos = 0;
	chain = 0;
	while (scan++, str[scan])
	{
		if (ft_str_is_sym(str[scan], charset) == 0)
		{
			filtre[chain][pos] = str[scan];
			pos++;
		}
		else if (pos != 0 && chain != 0)
		{
			pos = 0;
			chain++;
		}
	}
	return (filtre);
}

/*

I. Trouver la longueur a allouer pour le nouveau tableau. 
Longueur totale de STR, mais soustraire tous les SEP. 
Scan 1er: tant que symbole actuel != du SEP, count++
quand on trouve n'importe quoi du SEP, count = count. 
Ce jusqu'a \0. 
Renvoyer count. 

Prendre la longueur totale de STR. 
Pour chaque occurence d'un caractere de SEP dans STR, soustraire 1.

II. 
1) creer un tableau avec la longueur obtenue. 
		et +1 pour le 0, as terminating sign.
2)  refaire 2eme scan. meme principe de recherche, 
		mais avec count++ rentrer L'ADRESSE dans le tableau filtre.
*/

/* ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ */
/*					CODE QUI MARCHE									*/
/* _________________________________________________________________*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_is_delimiter(char c, char *delims)
{
	int	i;

	i = 0;
	while (delims[i])
	{
		if (delims[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen_mod(char *str, char *delims)
{
	int	i;

	i = 0;
	while (str[i] && !ft_is_delimiter(str[i], delims))
		i++;
	return (i);
}

char	*ft_strndup(char *str, int n)
{
	int		i;
	char	*dup;

	i = 0;
	dup = (char *)malloc(n + 1);
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

int	ft_wordcount(char *str, char *delims)
{
	int	i;
	int	len;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] && ft_is_delimiter(str[i], delims))
			i++;
		len = ft_strlen_mod(str + i, delims);
		if (len > 0)
			words++;
		i += len;
	}
	return (words);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		k;
	int		len;
	char	**words;

	k = 0;
	i = 0;
	words = (char **)malloc((ft_wordcount(str, charset) + 1) * sizeof(char *));
	if (words == NULL || str == NULL || charset == NULL)
		return (NULL);
	while (str[i])
	{
		while (str[i] && ft_is_delimiter(str[i], charset))
			i++;
		len = ft_strlen_mod(str + i, charset);
		if (len > 0)
			words[k++] = ft_strndup(str + i, len);
		i += len;
	}
	words[k] = NULL;
	return (words);
}
*/
/* ------------------- MAIN -----------------------------------------*/

#include <stdio.h>
void ft_print_array(char **array)
{
	int i;

	if (array == NULL)
		printf("Array is NULL\n");
	else
	{
		for(i = 0; array[i] != NULL; i++)
			printf("%d - %s\n", i, array[i]);
		printf("%d - NULL\n", i);
	}
}

int main(int argc, char **argv)
{
	(void)argc;
	
	ft_print_array(ft_split(argv[1], argv[2]));
}
