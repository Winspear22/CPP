# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/14 11:12:01 by user42            #+#    #+#              #
#    Updated: 2022/04/20 19:47:40 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= zombie_horde
SRCS= *.cpp

CC= clang++
FLAGS= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCS)
	@echo "\n\033[1;32mCompilation du programme $(NAME)\033[0m"
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean: 

fclean: clean
	@rm -Rf $(NAME)
re: fclean all

.PHONY: all clean fclean re