/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 19:28:33 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/09/10 18:25:30 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft.h"

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_putstr_error(int error, char *str)
{
	while (*str != '\0')
	{
		if (ft_putchar_error(error, *str) == (-1))
			return (-1);
		str++;
	}
	return (0);
}

/*
int	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		if (write(1, str, 1) == -1);
			return (-1);
		str++;
	}
}
*/