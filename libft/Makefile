# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan <juan@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/11 21:39:17 by juan              #+#    #+#              #
#    Updated: 2025/08/13 20:48:59 by juan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


MEMORY_DIR      := memory/
PRINTF_DIR      := printf/
STRING_DIR      := string/
OBJS_DIR        := objs/

MEMORY_FILES    := ft_memcpy
PRINTF_FILES    := ft_putchar ft_putstr ft_strlen_int ft_putnbr ft_strlen_int
STRING_FILES    := ft_strlen ft_split ft_strdup ft_substr

SRC_FILES := \
	$(addprefix $(MEMORY_DIR), $(addsuffix .c, $(MEMORY_FILES))) \
	$(addprefix $(PRINTF_DIR), $(addsuffix .c, $(PRINTF_FILES))) \
	$(addprefix $(STRING_DIR), $(addsuffix .c, $(STRING_FILES)))

OBJ_FILES := $(addprefix $(OBJS_DIR), $(notdir $(SRC_FILES:.c=.o)))

#============================== VARIABLES & COMPILER ==============================#

NAME    := libft.a
CC      := gcc
CFLAGS  := -Wall -Wextra -Werror -g3
AR      := ar rcs
RM      := rm -f
MKDIR   := mkdir -p
IFLAGS  := -I.

#============================== RULES ==============================#

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(AR) $(NAME) $(OBJ_FILES)

$(OBJS_DIR)%.o: $(MEMORY_DIR)%.c
	@$(MKDIR) $(OBJS_DIR)
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

$(OBJS_DIR)%.o: $(PRINTF_DIR)%.c
	@$(MKDIR) $(OBJS_DIR)
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

$(OBJS_DIR)%.o: $(STRING_DIR)%.c
	@$(MKDIR) $(OBJS_DIR)
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ_FILES)

fclean: clean
	$(RM) $(NAME)

re: fclean all
