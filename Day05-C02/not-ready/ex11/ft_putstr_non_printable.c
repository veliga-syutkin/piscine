/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:34:28 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/08/27 18:51:34 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr_non_printable(char *str);

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, str, 1);
}

int	ft_str_is_printable(char *str)
{
	int asc;

	asc = *str;
	if (asc >= '!' && asc <= '~')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int count;

	count = 0;
	while (*str =! '\0')
	{
		if (ft_str_is_printable(str[count]) == 1)
		{
			ft_putchar(str[count]);
		}
		else
		{
			ft_putchar(92);
			
		}
		
		count++;
	}
	
}

/*
int	main(void)
{
	char	str[] = "Hello world!";
	ft_putstr(str);
	return (0);
}
*/