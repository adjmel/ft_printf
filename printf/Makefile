# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: madjogou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/01 14:45:52 by madjogou          #+#    #+#              #
#    Updated: 2022/12/12 17:03:44 by madjogou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME =	libftprintf.a

SRC = ft_printf.c ft_putchar.c ft_puthexmaj.c  ft_puthexmin.c  ft_putnbr.c  ft_putpointer.c ft_putnbr_u.c ft_putstr.c ft_formats.c

OBJ = $(SRC:.c=.o)

CC = cc

FLAGS = -Wextra -Werror -Wall

all: $(NAME)

$(NAME): $(OBJ)
	${AR} ${NAME} ${OBJ}

AR = ar rcs

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} $(NAME)

re:	fclean all
