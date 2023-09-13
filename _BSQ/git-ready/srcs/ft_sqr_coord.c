/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqr_coord.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 03:14:16 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/09/13 04:49:42 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

char	*ft_sqr_coord(int size, int line, int column, char *sqrt)
{
	sqrt[0] = size;
	sqrt[1] = line;
	sqrt[2] = column;
	return (sqrt);
}
