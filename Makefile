# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/08 19:05:23 by brpereir          #+#    #+#              #
#    Updated: 2023/09/05 17:05:44 by brpereir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = src/main.c src/operations.c src/operations2.c src/operations3.c src/utils.c
OBJ = ${SRC:.c=.o}

RM = rm -f
CFLAGS = -Wall -Wall -Wextra
LIBFT_PATH = libft/libft.a

all: $(NAME)

$(NAME): %

clean: 
	make libft clean
	$(RM) $(OBJ)

fclean: clean
	make libft clean
	$(RM) $(NAME) 

re: fclean all

.PHONY: all clean fclean client

.SILENT: