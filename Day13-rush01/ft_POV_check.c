/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_POV_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 21:11:22 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/09/03 16:07:33 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_POV_check(int x, int y, char **tab, int POV)
{
/* Use: x & y are coordinates; actual solution grid starts at x = 1, y = 1
Please send x,y coordinates corresponding to POV's cell on grid 
in order to determinate wich direction it looks. 
         | POV | POV | POV | POV |
         | 1,0 | 2,0 | 3,0 | 4,0 |
         =========================
POV 0,1 || 1,1 | 2,1 | 3,1 | 4,1 || POV 5,1 
------------------------------------------
POV 0,2 || 1,2 | 2,2 | 3,2 | 4,2 || POV 5,2 
------------------------------------------
POV 0,3 || 1,3 | 2,3 | 3,3 | 4,3 || POV 5,3 
------------------------------------------
POV 0,4 || 1,4 | 2,4 | 3,4 | 1,4 || POV 5,4 
         =========================
         | POV | POV | POV | POV |
         | 1,5 | 2,5 | 3,5 | 4,5 |
**tab is array containing all values from the grid
POV is value from POV from what we want to check; 
Can take that value from 0,y; 5,y; x,0; y,0. 

It will test automatically each cell
from the POV in direction to the grid, 
starting with nearest one. 

Returns 0 if number of visible box equals POV value, 
Positive X if we see X more boxes, 
Negative X if we see X less boxes. */
	if (x == 0)
		return (ft_POV_check_right(x, y, **tab, POV));
	if (x == 5)
		return (ft_POV_check_left(x, y, **tab, POV));
	if (y == 0) 
		return (ft_POV_check_down(x, y, **tab, POV));
	if (y == 5)
		return (ft_POV_check_up(x, y, **tab, POV));
}

int	ft_POV_check_right(int x, int y, char **tab, int POV)
// POV on left, grid on right
{
	int increase;
	int highest;

	increase = 1;
	x++;
	highest = tab[x][y];
	while (x >= 1 && x <= 3)
	{
		if (tab[x][y] < tab[x+1][y] && tab[x+1][y] > highest)
		{
			increase++;
			highest = tab[x+1][y];
		}
		x++;
	}
	return (increase - POV);
}

int	ft_POV_check_left(int x, int y, char **tab, int POV)
// POV on right, grid on left
{
	int increase;
	int highest;

	increase = 1;
	x--;
	highest = tab[x][y];
	while (x <= 4 && x > 2)
	{
		if (tab[x][y] < tab[x-1][y] && tab[x-1][y] > highest)
		{
			increase++;
			highest = tab[x-1][y];
		}
		x--;
	}
	return (increase - POV);
}

int	ft_POV_check_down(int x, int y, char **tab, int POV)
// POV on up, grid on down
{
	int increase;
	int highest;

	increase = 1;
	y++;
	highest = tab[x][y];
	while (y >= 1 && y <= 3)
	{
		if (tab[x][y] < tab[x][y+1] && tab[x][y+1] > highest)
		{
			increase++;
			highest = tab[x][y+1];
		}
		y++;
	}
	return (increase - POV);
}

int	ft_POV_check_up(int x, int y, char **tab, int POV)
// POV on down, grid on up
{
	int increase;
	int highest;

	increase = 1;
	y--;
	highest = tab[x][y];
	while (y <= 4 && y > 2)
	{
		if (tab[x][y] < tab[x][y-1] && tab[x][y-1] > highest)
		{
			increase++;
			highest = tab[x][y-1];
		}
		y--;
	}
	return (increase - POV);
}
