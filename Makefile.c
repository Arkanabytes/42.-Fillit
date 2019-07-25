/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Makefile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 19:48:59 by copinto-          #+#    #+#             */
/*   Updated: 2019/07/25 12:40:33 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

NAME = fillit

OBJECTS = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCDIR = ./srcs/

all: $(NAME):
	make -C libft/ fclean && make -C libft/
	clang -Wall -Wextra -Werror -I libft -o fillit_read.o -c fillit_read.c -g
	clang -Wall -Wextra -Werror -I libft -o main.o -c main.c -g
	clang -o fillit main.o fillit_read.o -I libft -L libft/ -lft

clean:
	rm -rf *.o
	rm -rf fillit

fclean: clean
	@make -C libft/ fclean

re: fclean all
