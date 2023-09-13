/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:17:32 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/08/27 18:33:40 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned 	int	ft_strlcpy(char *dest, char *src, unsigned int size);

// *src = depuis copier

// *dest = vers copier

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

unsigned 	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int count;

	count = 0;
	size = ft_strlen(&src);
	while (count < size)
	{
		dest[count] = src[count];
		count++;
	}
	if (count == size)
	{
		dest[count] = '\0';
	}
	return (count);
}