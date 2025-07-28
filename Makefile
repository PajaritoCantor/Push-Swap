# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan <juan@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/25 16:51:36 by juan              #+#    #+#              #
#    Updated: 2025/07/26 17:26:12 by juan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables básicas
NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
RM = rm -f

# Estructura de archivos
SRC = src/main.c \
      src/parse.c \
      src/operations.c \
      src/sort.c \
      src/utils.c

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
