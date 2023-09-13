/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 03:48:29 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/09/08 03:51:58 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(int argc, int **argv)
{
	if (argc == 1)
		ft_putstr("File name missing.");
	else if (argc > 2)
		ft_putstr("Too many arguments.");
	else 
}