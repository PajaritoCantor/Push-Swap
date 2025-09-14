# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/25 16:51:36 by juan              #+#    #+#              #
#    Updated: 2025/09/14 20:14:35 by jurodrig         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#============================== DIRECTORIES & SOURCE FILES ==============================#

INC_DIR         := include/
LIBFT_DIR       := libft/
MAIN_DIR        := main/
STACKS_DIR		:= stacks/
OBJS_DIR        := objs/

MAIN_FILES      := main
STACKS_FILES	:= handle_stacks k_sort movements_stack_a movements_stack_b stack_utils

OBJ_FILES := $(addprefix $(OBJS_DIR)/main/, $(addsuffix .o, $(MAIN_FILES))) \
			 $(addprefix $(OBJS_DIR)/stacks/, $(addsuffix .o, $(STACKS_FILES)))

#============================== VARIABLES & COMPILER ==============================#

NAME    := push_swap
LIBFT   := $(LIBFT_DIR)/libft.a
CC      := gcc
CFLAGS  := -Wall -Wextra -Werror -g3
RM      := rm -f
MKDIR   := mkdir -p
IFLAGS  := -I$(INC_DIR) -I$(LIBFT_DIR)

#============================== RULES ==============================#

all: $(LIBFT) $(NAME)

$(LIBFT):
	@echo "Compilando libft..."
	@$(MAKE) -C $(LIBFT_DIR) >/dev/null

$(NAME): $(OBJ_FILES)
	@$(CC) $(CFLAGS) $(OBJ_FILES) $(LIBFT) -o $(NAME)

$(OBJS_DIR)/main/%.o: $(MAIN_DIR)%.c
	@$(MKDIR) -p $(OBJS_DIR)/main
	@$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

$(OBJS_DIR)/stacks/%.o: $(STACKS_DIR)%.c
	@$(MKDIR) -p $(OBJS_DIR)/stacks
	@$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ_FILES)
	@$(MAKE) -C $(LIBFT_DIR) clean >/dev/null

fclean: clean
	@$(RM) $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean >/dev/null

re: fclean all

.PHONY: all clean fclean re
