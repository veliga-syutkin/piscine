/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 13:02:48 by nlederge          #+#    #+#             */
/*   Updated: 2023/09/03 21:47:08 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H
# include <stdlib.h>
# include <unistd.h>

int		**ft_get_entries(char *str);
int		**ft_create_grid(void);
int		ft_check_before(int **entries);
int		ft_is_pos_possible(int **entries, int **grid, int x, int y);
void	ft_print_grid(int **grid);

#endif
