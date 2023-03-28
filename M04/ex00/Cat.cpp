/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 22:31:19 by nikita            #+#    #+#             */
/*   Updated: 2022/08/11 00:09:13 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(std::string name)
{
	type = name;
	std::cout << type << " Cat constructor called" << std::endl;
}

Cat::Cat(Cat const &rhs)
{
	type = rhs.getType();
	std::cout << type << " Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << type << " Cat destructor called" << std::endl;
}

Cat	&Cat::operator=(Cat const &rhs)
{
	std::cout << type << " Cat operator = called" << std::endl;
	type = rhs.getType();
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << type << " says MEW" << std::endl;
}
