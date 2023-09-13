/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:45:00 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/08/26 20:03:46 by aalferov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rectangle(int x, int y, int width, int height)
{
	if (width == 1 && height == 1)
	{
		ft_putchar('/');
	}
	else if (width == x && height == 1)
	{
		ft_putchar('\\');
	}	
	else if ((width != 1) && (width != x) && (height != 1) && (height != y))
	{	
		ft_putchar(' ');
	}	
	else if (width == 1 && height == y)
	{
		ft_putchar('\\');
	}
	else if (width == x && height == y)
	{
		ft_putchar('/');
	}
	else
	{
		ft_putchar('*');
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
