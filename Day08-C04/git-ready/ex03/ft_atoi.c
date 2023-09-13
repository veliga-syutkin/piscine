/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 04:42:51 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/08/27 06:38:19 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

//			1. Skip all white spaces
int	ft_is_white_space(char str)
{
	int	i;

	i = 0;
	if (str == ' ' || str == '\t' || str == '\n'
		|| str == '\v' || str == '\f' || str == '\r')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

//			2.1 counting how many minus signs
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

//			2.2 is total of minus signs odd or even
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

//			2.3 after +- part, we compute if it's negative or positive

//			3. when after number there is no number, we stop.
int	ft_atoi(char *str)
{
	int	count;
	int	signes;
	int	result;

	count = 0;
	signes = 0;
	result = 0;
	while (ft_is_white_space(str[count]) == 1)
		count++;
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
/*
int	main(void)
{
	char	str[100] = " ---+--+1234ab567";

	printf("%d\n", ft_atoi(str));
	return (0);
}
*/