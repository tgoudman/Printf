# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tgoudman <tgoudman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/23 16:01:49 by tgoudman          #+#    #+#              #
#    Updated: 2024/10/28 15:11:08 by tgoudman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a

INCLUDE = includes

SRC = ft_printf.c ft_putchar.c ft_putstring.c ft_putnbr.c ft_putnbr_base.c \
ft_putnbr_unsigned.c

OBJ = ${SRC:%.c=%.o}

all : ${NAME}

${NAME} : ${OBJ}
	ar rc $@ $^

%.o : %.c
	${CC} ${CFLAGS} -I ${INCLUDE} -o $@ -c $<

clean : 
	rm -f ${OBJ}
fclean : clean
re : fclean all
	rm -f ${NAME}

.PHONY : all clean fclean re