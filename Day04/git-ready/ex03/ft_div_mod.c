/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 19:07:30 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/08/25 20:44:28 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void)
{
	int div;
	int mod;

	ft_div_mod(7,3,&div,&mod);
    printf("Division: %d\n", div);
    printf("Modulo: %d\n", mod);

}*/