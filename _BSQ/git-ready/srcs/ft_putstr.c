/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 19:28:33 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/09/13 05:27:58 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	ft_putstr(int out, char *str)
{
	while (*str != '\0')
	{
		if (ft_putchar_error(out, str) != -1)
			str++;
		else
			return (-1);
	}
}
