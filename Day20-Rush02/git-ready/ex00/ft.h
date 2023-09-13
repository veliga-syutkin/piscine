/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 18:06:43 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/09/10 19:00:27 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

int		ft_str_is_zero(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	cut_str(char *str, char *dico);
int		ft_strlen(char *str);
int		ft_str_is_numeric(char *str);
int		units(char *str, int i, int n, char *dico);
int		tens(char *str, int i, int n, char *dico);
void	hundreds(char *str, int i, char *dico);
int		three_zero(char *str, int i);
int		size_file(void);
char	*file_to_str(void);
void	put_alphanbr_only(char *tab);
void	search_correspond(char *dict, char *brut_nbr, int end);
int		ft_putchar_error(int error, char c);
int		ft_putstr_error(int error, char *str);

#endif
