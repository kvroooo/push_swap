# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kuro <kuro@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/07 16:39:50 by kuro              #+#    #+#              #
#    Updated: 2023/06/08 15:58:33 by kuro             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =		srcs/main.c 		\
			srcs/parse.c 		\
			srcs/utils.c		\
			srcs/lst_utils.c 	\
			srcs/ft_lst.c 		\
			srcs/sorts.c 		\
			srcs/action.c 		\
			srcs/sorts_util.c 							\
			printf/ft_printf.c 							\
			printf/ft_putadd.c 							\
			printf/ft_putchar.c							\
			printf/ft_puthex_maj.c	 					\
			printf/ft_puthex_min.c 						\
			printf/ft_putnbr.c 							\
			printf/ft_putunbr.c 						\
			printf/ft_putstr.c 							\
			printf/ft_strlen.c 							\
			
OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra -g

NAME = push_swap

all : $(NAME)

.c.o :
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(OBJS) -L./libft -lft -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

# verif norminette
norm:
	@ clear
	@ if ! norminette | grep "Error"; then echo "\033[32mOK!\033[0m"; fi

mr_propre:
	@ make -s
	@ make clean -s