# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nikita <nikita@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/01 00:33:17 by nikita            #+#    #+#              #
#    Updated: 2022/08/21 17:01:19 by nikita           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

SRC = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp Intern.cpp

OBJ = $(SRC:%.cpp=%.o)

FLAGS =	-Wall -Wextra -Werror

STD = -std=c++98

CC = c++

all: $(NAME)

%.o: %.cpp Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp Intern.hpp Makefile
	$(CC) $(FLAGS) $(STD) -c $<

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(STD) $(OBJ) -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
