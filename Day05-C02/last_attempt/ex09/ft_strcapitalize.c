/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 21:31:50 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/08/31 04:00:23 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_str_is_alphanum(char c)
{
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	else if (c >= '0' && c <= '9')
		return (2);
	else
		return (0);
}

int	ft_strupcase(char c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

int	ft_strlowcase(char c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

char	ft_strcapitalize(char *str)
{
	int	size;
	int	count;
	int	capitalize_next;

	count = 0;
	capitalize_next = 1;
	size = ft_strlen(str);
	while (count < size)
	{
		if ((capitalize_next == 1) && (ft_str_is_alphanum(str[count]) == 1))
		{
			str[count] = ft_strupcase(str[count]);
			capitalize_next = 0;
		}
		else
		{
			str[count] = ft_strlowcase(str[count]);
		}
		if (ft_str_is_alphanum(str[count]) == 0)
			capitalize_next = 1;
		else
			capitalize_next = 0;
		count++;
	}
	return (*str);
}
/*
int	main(void)
{

//	char	f1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un."; 
//	char	f2[] = "";
//	char	f3[] = "42mots quarante-deux; cinquante+et+un.";
	char	f4[0]; 	
//	char	f5[] = "Salut, c'est VRAI ! J'Adore 42mots ;";
//	char	f6[] = "les Fonctions sont Geniales, n'est-ce pas ?";

//	ft_strcapitalize(f1);
//	ft_strcapitalize(f2);
//	ft_strcapitalize(f3);
	ft_strcapitalize(f4);
//	ft_strcapitalize(f5);
//	ft_strcapitalize(f6);
//	printf("Resultat de la fonction: %s\n", f1);
//	printf("Resultat de la fonction: %s\n", f2);
//	printf("Resultat de la fonction: %s\n", f3);
	printf("Resultat de la fonction: %s\n", f4);
//	printf("Resultat de la fonction: %s\n", f5);
//	printf("Resultat de la fonction: %s\n", f6);
	return (0);
}
*/