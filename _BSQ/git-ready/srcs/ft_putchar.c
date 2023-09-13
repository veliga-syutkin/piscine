/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 10:46:16 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/09/13 02:40:41 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	ft_putchar_error(int out, char c)
{
	return (write(out, &c, 1));
}

/*
int	ft_putchar_error(int out, char *c)
{
	return (write(out, *c, ft_strlen(c)));
}
*/