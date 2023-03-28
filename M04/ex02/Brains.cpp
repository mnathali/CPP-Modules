/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brains.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 13:08:49 by nikita            #+#    #+#             */
/*   Updated: 2022/08/13 16:29:28 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brains.hpp"

Brains::Brains()
{
	std::cout << "Brains constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = "";
}

Brains::~Brains()
{
	std::cout << "Brains destructor called" << std::endl;
}

Brains::Brains(Brains const &rhs)
{
	std::cout << "Brains copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = rhs.get_idea(i);
}

Brains &Brains::operator=(Brains const &rhs)
{
	std::cout << "Brains operator = called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = rhs.get_idea(i);
	return(*this);
}

void	Brains::set_idea(std::string idea, int i)
{
	if (i >= 0 && i < 100)
		ideas[i] = idea;
}

std::string	Brains::get_idea(int i) const
{
	if (i >= 0 && i < 100)
		return (ideas[i]);
	return ("");
}
