/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:12:33 by bepicard          #+#    #+#             */
/*   Updated: 2023/09/13 12:39:48 by bepicard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include "../includes/ft.h"
*/

#ifndef FT_H
# define FT_H
# include "ft_unsigned.h"
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
#include <stdio.h>

# define TRUE 1
# define FALSE 0
# define MAP_ERR "map error\n"
# define BUFF 1000

typedef struct s_point
{
	unsigned int	x1;
	unsigned int	y1;
	unsigned int	x2;
	unsigned int	y2;
}	t_square;

/* from: ft_analysis
This function creates and returns sqr:
sqr[0] = the found max side of the square 
sqr[1] = starting point on line of the square
sqr[2] = starting point on column of the square
No '\0' character of end.
*/
int		ft_analysis(char **map, char *vop);

// from: ft_area_check;
/* This Function checks starting at int line int column on square of int size 
if there is any obstacle inside. 
Returns FALSE if no obstacle or TRUE if there is obstacle*/
int		ft_area_checker(int line, int column, char **map, int size);

// from: ft_check;
int		ft_check_map(char *str, unsigned int *lenght, char *vop, int r);

/* from: ft_column_steppr; column skipper. 
Will skip columns from int column on same line if: 
1. Can't fit bigger sqr. than sqr 'cause of obstacle sleeping in the cold below
Return -> skip on next column.
2. Can't fit bigger sqr. than sqr 'cause of obstacle on same line. 
Return -> skip on next after obstacle column. 
*/
int		ft_column_stepper(int column, int line, char *sqr, char **map);

// from: ft_free_all; free every malloc and then exit
void	ft_free_all(char *vop, char **map);

// from: ft_mapstd; using default .ox instead of given vop
char	**ft_mapstd(char **map, char *vop);

// from: ft_print_map; printing the map with given vop
void	ft_print_map(char **map, char *vop);

// from: ft_putchar; write that can return -1 if it fails
int		ft_putchar_error(int out, char c);

// from: ft_putsqr; modifies map with full characters at found coordinates
char	**ft_putsqr(char *sqr, char **map, char *vop);

// from: ft_putstr; 
int		ft_putstr(int out, char *str);

// from: ft_sqr_coord;
/* modifies sqrt as follows:
sqrt[0] = max side lenght of the square. Starts with 1x1 => 1
sqrt[1] = start of square on line 
sqrt[2] = start of square on column
sqrt stocks where we can have our biggest square.
*/
char	*ft_sqr_coord(int size, int line, int column, char *sqrt);

/* from: ft_strndup; 
It creates a new string by copying the first n characters of str 
and adds a null character at the end. 
It returns a pointer to the new string. */
char	*ft_strndup(char *str, int n);

/* from: ft_to_obs_check; 
Checks, from given position line, column in **map if: 
1. If starting point (at line, column) IS obstacle
2. If from starting column point to (starting point + size of sqr) is clear
3. If from starting line point to (starting point + size of sqr) is clear
*/
int		ft_to_obs_check(int line, int column, int sqr, char **map);

int		ft_count_l(char *buf, int *read_f, unsigned int *leight, int *file);
int		ft_define_lenght(int *lenght, int *l, int read_f, char *buf);
int		ft_check_lenght(int *lenght, int *l, int read_f, char *buf);
int		ft_count_n(char *buf, int read_f, char *vop, int *count);
int		ft_while_l(int *lenght, int *file, int *read_f, char *buf);
int		ft_fille_map(char *str, char **map, int lenght, int height);
int		ft_check_vop(char *str);

#endif
