# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nikita <nikita@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/01 00:33:17 by nikita            #+#    #+#              #
#    Updated: 2022/08/11 00:47:55 by nikita           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

OBJ = $(SRC:%.cpp=%.o)

FLAGS =	-Wall -Wextra -Werror

STD = -std=c++98

CC = c++

all: $(NAME)

%.o: %.cpp Animal.hpp Cat.hpp Dog.hpp Makefile WrongAnimal.hpp WrongCat.hpp
	$(CC) $(FLAGS) $(STD) -c $<

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(STD) $(OBJ) -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

