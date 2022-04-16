# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/14 11:12:01 by user42            #+#    #+#              #
#    Updated: 2022/04/16 17:49:21 by adaloui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= annuaire
SRCS= PhoneBook.cpp Contact.cpp main.cpp

CC= clang++
FLAGS= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCS)
	@cat pseudo.txt
	@echo "\n\033[1;32mCompilation du programme $(NAME)\033[0m"
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean: 

fclean: clean
	@rm -Rf $(NAME)
re: fclean all

.PHONY: all clean fclean re