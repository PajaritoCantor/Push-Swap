# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/25 16:51:36 by juan              #+#    #+#              #
#    Updated: 2025/08/21 11:03:50 by jurodrig         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#============================== DIRECTORIES & SOURCE FILES ==============================#

INC_DIR         := include/
LIBFT_DIR       := libft/
MAIN_DIR        := main/
PARSE_DIR       := parse/
OBJS_DIR        := objs/

MAIN_FILES      := main
PARSE_FILES     := parse

OBJ_FILES := $(addprefix $(OBJS_DIR)/main/, $(addsuffix .o, $(MAIN_FILES))) \
             $(addprefix $(OBJS_DIR)/parse/, $(addsuffix .o, $(PARSE_FILES)))

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

$(OBJS_DIR)/parse/%.o: $(PARSE_DIR)%.c
	@$(MKDIR) -p $(OBJS_DIR)/parse
	@$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ_FILES)
	@$(MAKE) -C $(LIBFT_DIR) clean >/dev/null

fclean: clean
	@$(RM) $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean >/dev/null

re: fclean all

.PHONY: all clean fclean re
