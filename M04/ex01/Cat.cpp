/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 22:31:19 by nikita            #+#    #+#             */
/*   Updated: 2022/08/15 14:59:09 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(std::string name)
{
	type = name;
	std::cout << type << " Cat constructor called" << std::endl;
	brains = new Brains;
}

Cat::Cat(Cat const &rhs)
{
	std::cout << type << " Cat copy constructor called" << std::endl;
	type = rhs.getType();
	if (type != "Dog" && type != "Cat")
		return ;
	Brains	*p = rhs.get_brains();
	*brains = *p;}

Cat::~Cat()
{
	std::cout << type << " Cat destructor called" << std::endl;
	if (brains)
		delete brains;
}

Cat	&Cat::operator=(Cat const &rhs)
{
	std::cout << type << " Cat operator = called" << std::endl;
	type = rhs.getType();
	Brains	*p = rhs.get_brains();
	*brains = *p;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << type << " says MEW" << std::endl;
}

Brains *Cat::get_brains() const
{
	return (brains);
}

Cat	&Cat::operator=(Animal const &rhs)
{
	std::cout << "Cat overloaded operator = called" << std::endl;
	if (rhs.getType() != "Cat")
		return (*this);
	void	*n = (void *)&rhs;
	type = (*(Cat *)n).getType();
	Brains	*p = (*(Cat *)n).get_brains();
	*brains = *p;
	return (*this);
}
