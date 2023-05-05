# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kuro <kuro@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/29 14:12:33 by smlamali          #+#    #+#              #
#    Updated: 2023/05/02 22:28:33 by kuro             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =		main.c 					\
			utils.c 				\
			ft_tri.c 				\
			actions/instructions.c 	\
			parsing/parse.c 		\
			printf/ft_printf.c 		\
			printf/ft_putadd.c 		\
			printf/ft_putchar.c		\
			printf/ft_puthex_maj.c	\
			printf/ft_puthex_min.c 	\
			printf/ft_putnbr.c 		\
			printf/ft_putunbr.c 	\
			printf/ft_putstr.c 		\

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror -g3


NAME = push_swap

all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(OBJS) -L./libft -lft -o $(NAME)

clean:
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME}

re: fclean all