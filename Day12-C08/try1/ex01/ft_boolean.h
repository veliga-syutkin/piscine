/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:00:22 by vsyutkin          #+#    #+#             */
/*   Updated: 2023/09/05 20:57:43 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define TRUE 1
# define FALSE 0
# define SUCCESS 0

# define EVEN_MSG "I have an even number of arguments."
# define ODD_MSG "I have an odd number of arguments."

typedef int	t_bool;

# define EVEN(nbr) nbr % 2 == 0

#endif
