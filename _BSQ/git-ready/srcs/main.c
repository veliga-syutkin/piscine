/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsyutkin <vsyutkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:49:33 by bepicard          #+#    #+#             */
/*   Updated: 2023/09/13 12:46:12 by vsyutkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	main(int argc, char **argv)
{
	unsigned int	lenght;
	char			*vop;
	char			**map;
	int				i;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_check_vop(argv[i]))
			ft_putstr(2, MAP_ERR);
		else
		{
			vop = (char *) malloc(sizeof(char) * 3);
			if (!vop)
				exit(1);
			if (ft_check_map(argv[i], &lenght, vop, 0))
				ft_free_all(map, vop);
			map = ft_init_map(argv[i], lenght, 0, vop);
		}
	}	
}

int	ft_check_vop(char *str)
{
	int		i;
	char	buf[BUFF];
	int		read_f;
	int		file;
	int		r;

	r = 1;
	file = open(str, O_RDONLY);
	read_f = read(file, buf, BUFF);
	i = 0;
	while (buf[i] <= '9' && buf[i] >= '0')
		i++;
	if (buf[i] < 127 && buf[i] > 31 && buf[i] != buf[i + 1]
		&& buf[i] != buf[i + 2] && buf[i + 1] != buf[i + 2]
		&& buf[i + 1] < 127 && buf[i + 1] > 31 && buf[i + 2] < 127
		&& buf[i + 2] > 31 && buf[i + 3] == '\n')
		r = 0;
	close(file);
	return (r);
}

char	**ft_init_map(char *str, int lenght, unsigned int height, char *vop)
{
	int		file;
	int		read_f;
	char	buf[BUFF];
	char	**map;

	file = open(str, O_RDONLY);
	read_f = read(file, buf, BUFF);
	height = ft_atoi(buf, vop);
	map = (char **) malloc(sizeof(char *) * (height + 1));
	if (!map)
		return (NULL);
	close(file);
	if (ft_file_map(str, map, lenght, 0))
		ft_free_all(map, vop);
	return (map);
}

int	ft_fille_map(char *str, char **map, int lenght, unsigned int height)
{
	int		file;
	char	buf;
	int		j;
	int		s;

	s = 0;
	file = open(str, O_RDONLY);
	while (read(file, &buf, 1) && buf != '\n')
		j = 0;
	while (s < height)
	{
		j = 0;
		map[s] = (char *) malloc(sizeof(char) * (lenght + 1));
		if (!map[s])
			return (1);
		while (read(file, &buf, 1) && buf != '\n')
		{
			map[s][j] = buf;
			j++;
		}
		map[s][j + 1] = buf;
	}
	return (0);
}

/* 
...

II. Le coueur du programme 

Recalé: chercher la distance la plus grande entre 2 obstacles

A creuser: prendre une cellule du plateau. 
Elle sera le coin gauche haut de notre carré. 
On regarde si on peut augmenter notre carré de 1 (direction coin bas droite, 
en designant une cellule cible en diagonale par exemple) 
Une fois notre carré est a son max, on donne la valeur de la superficie 
dans notre cellule de depart.
Par ailleurs ainsi on va pouvoir suivre le carrer max obtenu jusqu'ici.
Grace au condition precedente: 
On peut arreter cet algo au 
(bord bas et/ou gauche - sqrt(superficie_max trouvee jusqu'ici))
et le debuter a chaque ligne plus loin sur la ligne si
depuis la 1ere case de la ligne jusqu'a obstacle

*/
