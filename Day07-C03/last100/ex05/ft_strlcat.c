/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:29:57 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/08/31 09:52:27 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Chain DEST[0-size]; Chain SRC; function with nb => FUSION:
// Result: chain DESTSRC 

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = 0;
	src_len = 0;
	i = 0;
	while (dest[dest_len] && dest_len < size)
		dest_len++;
	while (src[src_len])
		src_len++;
	if (dest_len >= size)
		return (size + src_len);
	while (src[i] && dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

/* EXPLICATIONS 
25: Counting lenght of DEST
27: Counting lenght of SRC
31: Copy SRC in DEST

   If lenght of both DEST and SRC is bigger than size, 
   the function returns size + src_len; 
   Else it concatenates both strings and returns total lenghts. 
*/