# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brunolopes <brunolopes@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/08 19:05:23 by brpereir          #+#    #+#              #
#    Updated: 2023/10/03 15:12:38 by brunolopes       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CFLAGS = -Wall -Wextra -Werror
SRC = src/main.c src/operations.c src/operations2.c src/operations3.c src/utils.c src/utils2.c src/simple.c src/simple2.c src/radix.c
OBJS = ${SRC:.c=.o}

RM = rm -f
CFLAGS = -Wall -Wall -Wextra

$(NAME): $(OBJS)
	cc $(CFLAGS) $(OBJS) -o $(NAME) 

all: $(NAME)
	@echo "Done!"

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) 

re: fclean all

.PHONY: all clean fclean client

.SILENT: