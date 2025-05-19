# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: miltavar <miltavar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/08 15:49:28 by milo              #+#    #+#              #
#    Updated: 2025/05/19 12:41:42 by miltavar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rcs
SRC = ft_printf.c ft_printf_types_utils.c \
ft_printf_types.c ft_printf_utils.c
LIBFT_DIR = Libft
LIBFT = $(LIBFT_DIR)/libft.a
HEADER_DIR	= -I .

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : temp_printf.a $(LIBFT)
	ar -rcT $(NAME) $(LIBFT) temp_printf.a

temp_printf.a : $(OBJ)
	$(AR) $@ $(OBJ)

$(LIBFT) :
	$(MAKE) -C $(LIBFT_DIR)


%.o: %.c
	$(CC) $(CFLAGS) $(HEADER_DIR) -c $< -o $@

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	$(RM) $(OBJ) temp_printf.a

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
