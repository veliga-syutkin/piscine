/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 01:06:07 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/08/27 15:05:36 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y);

/****************************/
/*          FT_ATOI         */
/****************************/
int	ft_is_negative(char str)
{
	if (str == '-')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_sign(int x)
{
	int	resultat;

	resultat = x % 2;
	if (resultat == 1)
	{
		return (-1);
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	count;
	int	signes;
	int	result;

	count = 0;
	signes = 0;
	result = 0;
	while (str[count] == '+' || str[count] == '-')
	{
		if (ft_is_negative(str[count]) == 1)
			signes++;
		count++;
	}
	while (str[count] >= '0' && str[count] <= '9')
	{
		result = result * 10 + (str[count] - '0');
		count++;
	}
	result = result * ft_sign(signes);
	return (result);
}
/****************** END OF FT_ATOI *****************/

int	main(int argc, char **argv)
// Calling function with width and height
{
	int	width;
	int	height;

	if (argc != 3)
	{
		write(1, "Usage: width height", 19);
		return (1);
	}
	width = ft_atoi(argv[1]);
	height = ft_atoi(argv[2]);
	rush(width, height);
	return (0);
}
