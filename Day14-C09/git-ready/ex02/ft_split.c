/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:26:22 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/09/11 12:43:15 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*ft_is_delimiter is a function that checks if a character c is among 
the specified delimiters in the charset string. 
It returns 1 if c is a delimiter, otherwise 0.

ft_strlen_mod calculates the length of a substring in str 
until a delimiter character from charset is encountered. 
It returns the length of the substring.

ft_strndup is a modified version of the standard strdup function. 
It creates a new string by copying the first n characters from str 
and adds a null character at the end. It returns a pointer to the new string.

ft_wordcount counts how many words (substrings) 
are there in str using charset as delimiters. It returns the number of words.

ft_split is the main function. 
It splits the string str using the charset delimiters 
and returns an array of pointers to the resulting substrings. 
Here's how it works:

It allocates memory for an array of pointers called words 
with the size of the number of words in str (plus one null element at the end).
It iterates through str, finding each substring between the delimiters.
For each found substring, 
it allocates memory to store the substring using ft_strndup 
and puts it into the words array.
It returns the words array of pointers.*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_str_is_sym(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen_mod(char *str, char *charset)
/* returns lenghts of str 'til something from charset is encountered.*/
{
	int	i;

	i = 0;
	while (str[i] && !ft_str_is_sym(str[i], charset))
		i++;
	return (i);
}

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

int	ft_wordcount(char *str, char *charset)
{
	int	i;
	int	len;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] && ft_str_is_sym(str[i], charset))
			i++;
		len = ft_strlen_mod(str + i, charset);
		if (len > 0)
			words++;
		i = i + len;
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
		while (str[i] && ft_str_is_sym(str[i], charset))
			i++;
		len = ft_strlen_mod(str + i, charset);
		if (len > 0)
			words[k++] = ft_strndup(str + i, len);
		i = i + len;
	}
	words[k] = NULL;
	return (words);
}

// ------------------- MAIN -----------------------------------------*/
/*
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
*/