/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 21:31:50 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/09/01 07:45:27 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	while (str[i])
	{
		if ((str[i]) >= 'A' && str[i] >= 'Z')
			str[i] += 32;
		if (!((str[i - 1] >= '0') && (str[i] <= '9')));
			if (!((str[i - 1] >= 'A') && (str[i - 1] <= 'Z')))
				if (!((str[i -1] >= 'a') && (str[i - 1] <= 'z')))
					if ((str[i] >= 'a') && (str[i] <= 'z'))
						str[i] -= 32;
		i++;
	}
	return (str);
}

/*
int	main(void)
{

//	char	f1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un."; 
	char	f2[] = "";
//	char	f3[] = "42mots quarante-deux; cinquante+et+un.";
	char	f4[0]; 	
//	char	f5[] = "Salut, c'est VRAI ! J'Adore 42mots ;";
//	char	f6[] = "les Fonctions sont Geniales, n'est-ce pas ?";

//	ft_strcapitalize(f1);
	ft_strcapitalize(f2);
//	ft_strcapitalize(f3);
	ft_strcapitalize(f4);
//	ft_strcapitalize(f5);
//	ft_strcapitalize(f6);
//	printf("Resultat de la fonction: %s\n", f1);
	printf("Resultat de la fonction: %s\n", f2);
//	printf("Resultat de la fonction: %s\n", f3);
	printf("Resultat de la fonction: %s\n", f4);
//	printf("Resultat de la fonction: %s\n", f5);
//	printf("Resultat de la fonction: %s\n", f6);
	return (0);
}
*/