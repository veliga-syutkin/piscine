/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v2.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 21:11:22 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/09/02 23:01:15 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	clues (or POV) are located on axis X and Y, being at 0 and 5 respectfully. 
	our cells who will contain values of box will be between 1,1 and 4,4, 
	with same axis as our clues.

	We store our values of each cell in tab[x][y]. 

	We will ALWAYS count how many of wich boxes we putted in the cells. 

	After every step of solving, we will see if we placed 3 same values, 
	  in order to find the last one.

	Order of solving: 
	
	0. Check if clues can display an actual solution. 
	1. Find clues = 1; place 4 at nearest cell to them. 
	2. If we placed 3 boxes of same value, find the last one. 
		If there is already 3 values in a row/column, find the last one.
	2.1 If we placed 1 box with step 2, restart step 2.
	3. Find clues = 4; place 1, 2, 3, 4 in a row/column. 
	4. repeat step 2. 
	5. At this point, we filled +/- 9 cells; 7 to go. 
	6. 

I. POV check 
   Start at POV (column or row). 
   POV can see from 1 to 2 to 3 to 4, but not vice versa. 
   while X or Y are going through the line/column, 
   we count how many __increases__ there at each step. 

	*/

//we check from what POV(x, y) we will check our *tab aka grid.
// Probably split in 2, one per axis. 
// 		> in another 2, one per direction.
// first, we need to choose wich direction we have to go. 
// x=0: to the right; x=5: to the left; y=0: down; y=5 up.
int	ft_POV_check(int x, int y, char **tab, int POV)
{
	int increase;

	increase = 0;
	if (x = 0)
	{
		while (x >= 1 && x <= 3)
		{
			if (tab[x][y] < tab[x+1][y+1])
				increase++;
			x++;
		}
		if (increase != POV)
		{
			return (1);
		}
		return (0);
	}
}
// first, we need to choose wich direction we have to go. 
// x=0: to the right; x=5: to the left; y=0: down; y=5 up.
/*
	else if (x = 5)
	{
		while (x >= 1 && x <= 4)
			x--;
	}
	if (y = 0)
	{
		while (y >= 1 && y <= 4)
			y++;
	}
	if (y = 5)
	{
		while (y >= 1 && y <= 4)
			y--;
	}

}*/