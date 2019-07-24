/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Makefile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 19:48:59 by copinto-          #+#    #+#             */
/*   Updated: 2019/07/23 20:59:45 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

NAME = fillit

SRC = main.c fillit_lector.c fillit_tetrimino.c fillit_solve.c \

OBJECTS = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCDIR = ./srcs/

all: $(NAME):

%.o:$(SRCDIR)%.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): (OBJ)
		  $(CC) -o $(NAME) $(OBJECTS)

clean:
		rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
