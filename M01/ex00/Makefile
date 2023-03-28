# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nikita <nikita@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/01 00:33:17 by nikita            #+#    #+#              #
#    Updated: 2022/08/01 01:53:04 by nikita           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJ = $(SRC:%.cpp=%.o)

FLAGS =	-Wall -Wextra -Werror

STD = -std=c++98

CC = c++

all: $(NAME)

%.o: %.cpp Zombie.hpp
	$(CC) $(FLAGS) $(STD) -c $<

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(STD) $(OBJ) -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

