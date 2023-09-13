/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 10:46:16 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/09/10 18:23:02 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/

int	ft_putchar_error(int error, char c)
{
	if (write(error, &c, 1) == -1)
		return (-1);
	return (0);
}
