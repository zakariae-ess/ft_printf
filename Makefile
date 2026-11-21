# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zessalih <zessalih@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/20 16:01:21 by zessalih          #+#    #+#              #
#    Updated: 2026/11/20 23:59:07 by zessalih         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  libftprintf.a
AR = ar rcs
CC = cc
CFLAGS = -Wall -Wextra -Werror -g

HEADER = ft_printf.h
SRCS = ft_printf.c ft_check_char.c ft_convert.c ft_put_base.c ft_put_str.c ft_put.c
OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re

