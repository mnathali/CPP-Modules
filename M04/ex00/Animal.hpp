/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 22:01:00 by nikita            #+#    #+#             */
/*   Updated: 2022/08/13 16:38:27 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class	Animal
{

	public:

	Animal();
	Animal(Animal const &rhs);
	virtual ~Animal();

	virtual Animal	&operator=(Animal const &rhs);

	virtual void makeSound() const;

	std::string	getType() const;
	void		setType(std::string name);

	protected:

	std::string	type;

};

std::ostream   &operator<<(std::ostream &o, Animal const &i);

#endif