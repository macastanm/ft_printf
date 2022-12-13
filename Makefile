# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macastan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/12 13:29:00 by macastan          #+#    #+#              #
#    Updated: 2022/12/13 14:24:55 by macastan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FILES = ft_printf.c \
		ft_putcsdiu.c \
		ft_puthex.c \
		ft_putpoint.c

OBJS = $(FILES:%.c=%.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror -c
AR = ar rcs
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)

clean: 
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
