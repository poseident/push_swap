# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bschweit <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/14 20:01:08 by bschweit          #+#    #+#              #
#    Updated: 2022/10/17 18:28:26 by bschweit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror -g

NAME = push_swap

RM = rm -f

all: 
	$(CC) -o push_swap libft/libft.a printf/libftprintf.a ./srcs/*.c $(CFLAGS)

clean:
	${RM} push_swap
	${RM} ./srcs/*.o

%.o: %.c
	$(CC) -Wall -Wextra -Werror

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(NAME)

norm:
	norminette $(shell find ./srcs/ -name "*.c"

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
