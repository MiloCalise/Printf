# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: miltavar <miltavar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/15 11:40:39 by bdjoco            #+#    #+#              #
#    Updated: 2025/05/26 14:05:35 by miltavar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
CC			= cc
CFLAGS		= -Wall -Wextra -Werror -g -I.

SRCS		= src/ft_printf.c src/ft_printf_utils.c src/ft_printf_types.c \
			src/ft_printf_types_utils.c src/lib_utils.c
OBJS		= $(SRCS:.c=.o)

AR = ar rcs
RM = rm -f

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS)

fclean :
	$(RM) $(NAME) $(OBJS)

re : fclean all

.PHONY : all clean fclean re bonus

