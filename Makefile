# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shannema <shannema@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/06 15:00:29 by shannema          #+#    #+#              #
#    Updated: 2026/02/22 02:36:40 by shannema         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

AR		= ar -rcs
RM		= rm -f

SRCS = ft_printf.c ft_putchar.c ft_puthex.c ft_putnbr_unsigned.c ft_putnbr.c ft_putptr.c ft_putstr.c ft_strlen.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	@echo "$(NAME) created successfully!"

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

test: $(NAME)
	$(CC) $(CFLAGS) -o test_ft_printf test_ft_printf.c $(NAME)
	./test_ft_printf

re: fclean all

.PHONY: all clean fclean re