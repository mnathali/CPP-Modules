# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nikita <nikita@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/27 13:38:56 by nikita            #+#    #+#              #
#    Updated: 2022/07/28 15:18:10 by nikita           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC = main.cpp Contact.cpp PhoneBook.cpp

OBJ = $(SRC:%.cpp=%.o)

FLAGS =	-Wall -Wextra -Werror

STD = -std=c++98

CC = c++

all: $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) $(STD) -c $<

$(NAME): $(OBJ) PhoneBook.hpp Contact.hpp
	$(CC) $(FLAGS) $(STD) $(OBJ) -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all