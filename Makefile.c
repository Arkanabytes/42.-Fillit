/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Makefile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copinto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 19:48:59 by copinto-          #+#    #+#             */
/*   Updated: 2019/08/06 13:23:53 by copinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

NAME = fillit
CC = clang
FLAGS = -Wall -Wextra -Werror
INCLUDES = libft
SRCS = main.c read.c tetrimino.c solve.c
OBJS = *.o
LIB_DIR = libft/

$(NAME):
	make -C $(LIB_DIR) fclean && make -C $(LIB_DIR)
	$(CC) $(FLAGS) -I $(INCLUDES) -c $(SRCS)
	$(CC) -o $(NAME) $(OBJS) -I $(INCLUDES) -L $(LIB_DIR) -lft

all: $(NAME)

clean:
	rm -rf $(OBJS)
	make -C $(LIB_DIR) fclean

fclean: clean
	rm -rf $(NAME)

re:	fclean all
