/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 23:44:48 by nikita            #+#    #+#             */
/*   Updated: 2022/08/11 00:09:19 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(std::string name)
{
	type = name;
	std::cout << type << " Dog constructor called" << std::endl;
}

Dog::Dog(Dog const &rhs)
{
	type = rhs.getType();
	std::cout << type << " Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << type << " Dog destructor called" << std::endl;
}

Dog	&Dog::operator=(Dog const &rhs)
{
	std::cout << type << " Dog operator = called" << std::endl;
	type = rhs.getType();
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << type << " says WOF" << std::endl;
}
