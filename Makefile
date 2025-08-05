# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan <juan@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/25 16:51:36 by juan              #+#    #+#              #
#    Updated: 2025/08/05 20:46:31 by juan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables básicas
NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
RM = rm -f

# Estructura de archivos

PARSE =     parse.c
LIBFT =     ft_split.c ft_strdup.c ft_strlen.c ft_substr.c ft_strlen.c
MAIN  =     main.c

OBJ = $(SRC:.c=.o)

INCLUDES = -Iinclude

# Reglas
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
