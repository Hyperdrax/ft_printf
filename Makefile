# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flhensel <flhensel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/04 10:10:11 by flhensel          #+#    #+#              #
#    Updated: 2025/09/04 10:16:21 by flhensel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs
RM = rm -rf

SRC = ft_hex ft_nbr ft_printf ft_ptr
SRCS = $(addsuffix .c, $(SRC))

LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

$(OBJ_DIR)/%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME): $(LIBFT) $(OBJ_DIR) $(OBJS)
	cp $(LIBFT) $(NAME)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

$(LIBFT):
	make -C $(LIBFT_PATH) all

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	make -C $(LIBFT_PATH) clean
	$(RM) $(OBJ_DIR)

fclean:	clean
	make -C $(LIBFT_PATH) fclean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re libft
