/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 21:26:44 by copinto-          #+#    #+#             */
/*   Updated: 2019/07/23 22:02:22 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

# define POINT '.'
# define BLOCKS '#'
# define LETTERS 'A'
# define LINE_NEW '\n'

# define SIZE 4
# define TETRIMINO_SIZE 21
# define TETRIMINO_MAX_TOTAL (26 - LETTERS - 'A'))

# define BUFFER_SIZE TETRIMINI
