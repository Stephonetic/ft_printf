# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shannema <shannema@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/06 15:00:29 by shannema          #+#    #+#              #
#    Updated: 2026/02/09 21:18:02 by shannema         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME    = libftprintf.a

# SRC = ft_printf.c

# OBJECTS       = $(SRC:.c=.o)

# CC    = cc
# CFLAGS = -Wall -Wextra -Werror

# all: $(NAME)

# $(NAME): $(OBJECTS)
# 	ar rcs $(NAME) $(OBJECTS)

# clean:
# 	rm -f $(OBJECTS)

# fclean: clean
# 	rm -f $(NAME)

# re: fclean all

# .PHONY: all clean fclean re


NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c ft_printf_char.c ft_printf_nbr.c ft_printf_hex.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re