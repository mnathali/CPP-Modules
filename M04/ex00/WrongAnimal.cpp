/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 22:10:19 by nikita            #+#    #+#             */
/*   Updated: 2022/08/11 00:13:17 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &rhs) : type(rhs.getType())
{
	std::cout << type << " copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << type << " destructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &rhs)
{
	std::cout << type << " operator = called" << std::endl;
	type = rhs.getType();
	return (*this);
}

std::string	WrongAnimal::getType() const
{
	return (type);
}

void	WrongAnimal::setType(std::string name)
{
	type = name;
}

std::ostream   &operator<<(std::ostream &o, WrongAnimal const &i)
{
	o << i.getType();
	return (o);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "I am just an WrongAnimal" << std::endl;
}
