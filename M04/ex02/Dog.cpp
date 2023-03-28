/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 23:44:48 by nikita            #+#    #+#             */
/*   Updated: 2022/08/13 16:48:53 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(std::string name)
{
	type = name;
	std::cout << type << " Dog constructor called" << std::endl;
	brains = new Brains;
}

Dog::Dog(Dog const &rhs)
{
	std::cout << type << " Dog copy constructor called" << std::endl;
	type = rhs.getType();
	if (type != "Dog" && type != "Cat")
		return ;
	Brains	*p = rhs.get_brains();
	*brains = *p;
}

Dog::~Dog()
{
	std::cout << type << " Dog destructor called" << std::endl;
	if (brains)
		delete brains;
}

Dog	&Dog::operator=(Dog const &rhs)
{
	std::cout << type << " Dog operator = called" << std::endl;
	type = rhs.getType();
	Brains	*p = rhs.get_brains();
	*brains = *p;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << type << " says WOF" << std::endl;
}

Brains *Dog::get_brains() const
{
	return (brains);
}

Animal	&Dog::operator=(Animal const &rhs)
{
	std::cout << "Dog overloaded operator = called" << std::endl;
	if (rhs.getType() != "Dog")
		return (*this);
	void	*n = (void *)&rhs;
	type = (*(Dog *)n).getType();
	Brains	*p = (*(Dog *)n).get_brains();
	*brains = *p;
	return (*this);
}
