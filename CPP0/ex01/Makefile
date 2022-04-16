# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/14 11:12:01 by user42            #+#    #+#              #
#    Updated: 2022/04/14 15:36:43 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= annuaire
SRCS= *.cpp
SRCSDIR= .
OBJ= *.o

CC= clang++
FLAGS= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCS)
	@echo "Compilation du programme $(NAME)"
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean: 

fclean: clean
	@rm -Rf $(NAME)
re: fclean all

.PHONY: all clean fclean re