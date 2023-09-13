/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 03:35:02 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/08/26 19:59:26 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rectangle(int x, int y, int width, int height)
{
	if (width == 1 && height == 1)
	{
		ft_putchar('A');
	}
	else if (width == x && height == 1)
	{
		ft_putchar('C');
	}
	else if ((width != 1) && (width != x) && (height != 1) && (height != y))
	{
		ft_putchar(' ');
	}
	else if (height == y && width == 1)
	{
		ft_putchar('A');
	}
	else if (height == y && width == x)
	{
		ft_putchar('C');
	}
	else
	{
		ft_putchar('B');
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
