/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 22:10:19 by nikita            #+#    #+#             */
/*   Updated: 2022/08/15 15:12:23 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Just an Animal")
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(Animal const &rhs) : type(rhs.getType())
{
	std::cout << type << " Animal copy constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << type << " Animal destructor called" << std::endl;
}

Animal	&Animal::operator=(Animal const &rhs)
{
	std::cout << type << " Animal operator = called" << std::endl;
	type = rhs.getType();
	return (*this);
}

std::string	Animal::getType() const
{
	return (type);
}

void	Animal::setType(std::string name)
{
	type = name;
}

std::ostream   &operator<<(std::ostream &o, Animal const &i)
{
	o << i.getType();
	return (o);
}

void	Animal::makeSound() const
{
	std::cout << "I am just an animal" << std::endl;
}
