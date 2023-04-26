# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/22 12:46:07 by smlamali          #+#    #+#              #
#    Updated: 2023/04/23 17:35:00 by smlamali         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 	main.c 					\
		parsing/parse.c 		\
		parsing/parse_utils.c 	\

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