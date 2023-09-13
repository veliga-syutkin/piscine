/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:44:30 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/08/24 03:08:22 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	resultat;

	if (n >= 0)
	{
		resultat = 'P';
	}
	else
		resultat = 'N';
	write(1, &resultat, 1);
}
/*
int	main(void)
{
	ft_is_negative(0);
	return (0);
}
*/