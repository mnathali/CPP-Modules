# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnathali <mnathali@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/24 12:30:01 by mnathali          #+#    #+#              #
#    Updated: 2022/08/24 17:58:16 by mnathali         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

SRC = main.cpp Base.cpp functions.cpp

OBJ = $(SRC:%.cpp=%.o)

FLAGS =	-Wall -Wextra -Werror

STD = -std=c++98

CC = c++

all: $(NAME)

%.o: %.cpp Makefile Base.hpp A.hpp B.hpp C.hpp declarations.hpp
	$(CC) $(FLAGS) $(STD) -c $<

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(STD) $(OBJ) -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all