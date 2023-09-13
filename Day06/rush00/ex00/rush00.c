/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:45:03 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/08/27 23:17:54 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rectangle(int x, int y, int width, int height)
{
	if ((width == 1 && height == 1) || (width == x && height == 1))
	{
		ft_putchar('o');
	}
	else if ((width != 1) && (width != x) && (height != 1) && (height != y))
	{	
		ft_putchar(' ');
	}	
	else if ((width == 1 && height == y) || (width == x && height == y))
	{
		ft_putchar('o');
	}
	else if ((width >= 1) && (width != x) && (height == 1 || height == y))
	{
		ft_putchar('-');
	}
	else
	{
		ft_putchar('|');
	}
}

void	rush(int x, int y)
{
	int	width;
	int	height;

	width = 1;
	height = 1;
	while (height <= y)
	{
		while (width <= x)
		{
			rectangle(x, y, width, height);
			width++;
		}
		width = 1;
		height++;
		ft_putchar('\n');
	}
}
