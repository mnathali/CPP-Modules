/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 22:31:19 by nikita            #+#    #+#             */
/*   Updated: 2022/08/11 00:09:13 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(std::string name)
{
	type = name;
	std::cout << type << " WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &rhs)
{
	type = rhs.getType();
	std::cout << type << " WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << type << " WrongCat destructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &rhs)
{
	std::cout << type << " WrongCat operator = called" << std::endl;
	type = rhs.getType();
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << type << " says WRONG MEW" << std::endl;
}
