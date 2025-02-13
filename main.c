/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrivera- <mrivera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 09:26:31 by mrivera-          #+#    #+#             */
/*   Updated: 2019/08/06 13:28:48 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void			print_map(char **map)
{
	size_t		i;
	size_t		len;

	i = -1;
	len = ft_strlen(*map);
	while (++i < len)
	{
		ft_putstr(map[i]);
		ft_putchar('\n');
	}
}

int				main(int argc, char *argv[])
{
	int			fd;
	char		**map;
	t_tetrimino *tetriminos;

	if (argc == 2)
	{
		if ((fd = open(argv[1], O_RDONLY)) == -1)
			ft_putstr("error\n");
		else if ((map = read_file(fd)) && (ft_strlen(map[0])) && \
				(!map[g_num_tetris - 1][TETRIMINO_SIZE - 1]))
		{
			tetriminos = tetrimino_map(map);
			map = fillit_solve(tetriminos);
			print_map(map);
			free(tetriminos);
			ft_memdel((void **)map);
		}
		else
			ft_putstr("error\n");
		close(fd);
	}
	else
		ft_putstr("usage: ./fillit [file_name]\n");
	return (0);
}
