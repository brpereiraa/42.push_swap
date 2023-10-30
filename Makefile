# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brunolopes <brunolopes@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/08 19:05:23 by brpereir          #+#    #+#              #
#    Updated: 2023/10/10 15:35:40 by brunolopes       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CFLAGS = -Wall -Wextra -Werror
SRC = src/main.c src/operations.c src/operations2.c src/operations3.c src/simple.c src/simple2.c src/radix.c utils/utils.c utils/utils2.c utils/arg_check.c
OBJS = ${SRC:.c=.o}

RM = rm -f
CFLAGS = -Wall -Wall -Wextra
LIBFT = libft/libft.a

all: $(NAME)
	@echo "Done!"

$(NAME): $(OBJS)
	$(MAKE) $(LIBFT)
	cc $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME) 

clean: 
	$(MAKE) $(LIBFT) clean
	$(RM) $(OBJS)

fclean: clean
	$(MAKE) $(LIBFT) fclean
	$(RM) $(NAME) 

re: fclean all

.PHONY: all clean fclean client

.SILENT: