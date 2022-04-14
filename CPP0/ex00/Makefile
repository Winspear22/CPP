# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/14 11:12:01 by user42            #+#    #+#              #
#    Updated: 2022/04/14 11:46:40 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= megaphone
SRCS= megaphone.cpp
SRCSDIR= .

CC= clang++
FLAGS= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCSDIR)/$(SRCS)
	echo "Compilation du programme $(NAME)"
	$(CC) $(FLAGS) -o $@ $^
clean: 

fclean: clean
		@rm -Rf $(NAME)
re: fclean all

.PHONY: all clean fclean re

