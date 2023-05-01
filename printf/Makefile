# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/01 15:58:08 by smlamali          #+#    #+#              #
#    Updated: 2022/12/15 12:41:53 by smlamali         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS=	ft_printf.c		\
		ft_putchar.c	\
		ft_putstr.c		\
		ft_strlen.c		\
		ft_putnbr.c		\
		ft_putunbr.c	\
		ft_puthex_min.c	\
		ft_puthex_maj.c	\
		ft_putadd.c		\

OBJS= $(SRCS:.c=.o)

NAME= libftprintf.a

CC= gcc

CFLAGS= -Wall -Wextra -Werror

all:	$(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f ${NAME}

re:	fclean all

.PHONY:	all clean fclean re