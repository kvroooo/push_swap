# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kuro <kuro@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/07 16:39:50 by kuro              #+#    #+#              #
#    Updated: 2023/05/08 19:04:41 by kuro             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =		srcs/main.c 		\
			srcs/parse.c 		\
			srcs/utils.c		\
			srcs/lst_utils.c 	\
			srcs/ft_lst.c 		\

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