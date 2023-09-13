/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:31:08 by bepicard          #+#    #+#             */
/*   Updated: 2023/09/13 12:26:43 by bepicard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	ft_check_map(char *str, unsigned int *lenght, char *vop, int r)
{
	unsigned int	height;
	unsigned int	count;
	char			buf[BUFF];
	int				read_f;
	int				file;

	file = open(str, O_RDONLY);
	if (ft_count_l(buf, 0, lenght, &file))
		return (1);
	file = open(str, O_RDONLY);
	read_f = read(file, buf, BUFF);
	count = 0;
	if (read_f <= 0)
		return (1);
	height = ft_atoi(buf, vop);
	while (read_f > 0)
	{
		if (ft_count_n(buf, read_f, vop, &count))
			r = 1;
		read_f = read(file, buf, BUFF)i;
	}
	close(file);
	if (count != height + 1)
		r = 1;
	return (r);
}

int	ft_count_l(char *buf, int read_f, unsigned int *leight, int *file)
{
	unsigned int	l;
	int				i;
	int				r;

	r = 0;
	i = 0;
	read_f = read(*file, buf, BUFF);
	while (buf[i] != '\n')
		i++;
	i++;
	while (i < read_f && buf[i++] != '\n')
		l++;
	if (buf[i] == '\n')
		*lenght = l;
	read_f = read(*file, buf, BUFF);
	r = ft_while_l(lenght, &file, &read_f, buf);
	close(*file);
	return (r);
}

int	ft_while_l(int *lenght, int *file, int *read_f, char *buf)
{
	int	l;

	l = 0;
	while (*read_f > 0)
	{
		if (ft_define_lenght(lenght, &l, *read_f, buf))
			break ;
		*read_f = read(*file, buf, BUFF);
	}
	while (read_f > 0)
	{
		if (ft_check_lenght(lenght, &l, *read_f, buf))
			return (1);
		*read_f = read(*file, buf, BUFF);
	}
	return (0);
}

int	ft_define_lenght(int *lenght, int *l, int read_f, char *buf)
{
	int	i;

	i = 0;
	while (i < *read_f && buf[i] != '\n')
	{
		i++;
		*l = *l + 1;
	}
	if (buf[i] == '\n')
	{
		*lenght = *l;
		*l = 0;
		return (1);
	}
	return (0);
}

int	ft_check_lenght(int *lenght, int *l, int read_f, char *buf)
{
	int	i;

	i = 0;
	while (i < *read_f && buf[i] != '\n')
	{
		i++;
		*l = *l + 1;
	}
	if (buf[i] == '\n' && *lenght == *l)
		*l = 0;
	else if (buf[i] == '\n' && *lenght != *l)
		return (1);
	return (0);
}
