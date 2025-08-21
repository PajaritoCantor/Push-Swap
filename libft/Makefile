# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/11 21:39:17 by juan              #+#    #+#              #
#    Updated: 2025/08/21 12:07:42 by jurodrig         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************** FILES & SOURCES ******************************* #

LISTS_DIR		:= lists/
MEMORY_DIR      := memory/
PRINTF_DIR      := printf/
STRINGS_DIR     := strings/
VALIDATE_DIR	:= validate/
OBJS_DIR        := objs/

LISTS_FILES		:= ft_strlstadd_back ft_strlstlast ft_strlstnew
MEMORY_FILES    := ft_memcpy
PRINTF_FILES    := ft_printf ft_putchar ft_putnbr ft_putstr ft_strlen_int
STRINGS_FILES   := ft_split ft_strdup ft_strlen ft_substr
VALIDATE_FILES	:= ft_atol ft_str_isdigit ft_isspace

SRC_FILES := \
	$(addprefix $(LISTS_DIR), $(addsuffix .c, $(LISTS_FILES))) \
	$(addprefix $(MEMORY_DIR), $(addsuffix .c, $(MEMORY_FILES))) \
	$(addprefix $(PRINTF_DIR), $(addsuffix .c, $(PRINTF_FILES))) \
	$(addprefix $(STRINGS_DIR), $(addsuffix .c, $(STRINGS_FILES))) \
	$(addprefix $(VALIDATE_DIR), $(addsuffix .c, $(VALIDATE_FILES))) 

OBJ_FILES := $(addprefix $(OBJS_DIR), $(notdir $(SRC_FILES:.c=.o)))

# **************************** VARIABLES & COMPILER *************************** #

NAME    := libft.a
CC      := gcc
CFLAGS  := -Wall -Wextra -Werror -g3
AR      := ar rcs
RM      := rm -f
MKDIR   := mkdir -p
IFLAGS  := -I.

# ********************************* RULES ************************************* #

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ_FILES)
	@$(AR) $(NAME) $(OBJ_FILES)

$(OBJS_DIR)%.o: $(MEMORY_DIR)%.c
	@$(MKDIR) $(OBJS_DIR)
	@$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

$(OBJS_DIR)%.o: $(PRINTF_DIR)%.c
	@$(MKDIR) $(OBJS_DIR)
	@$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

$(OBJS_DIR)%.o: $(STRINGS_DIR)%.c
	@$(MKDIR) $(OBJS_DIR)
	@$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

$(OBJS_DIR)%.o: $(LISTS_DIR)%.c
	@$(MKDIR) $(OBJS_DIR)
	@$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

$(OBJS_DIR)%.o: $(VALIDATE_DIR)%.c
	@$(MKDIR) $(OBJS_DIR)
	@$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ_FILES)

fclean: clean
	@$(RM) $(NAME)

re: fclean all