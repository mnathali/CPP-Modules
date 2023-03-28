/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 23:40:54 by nikita            #+#    #+#             */
/*   Updated: 2022/08/13 15:24:50 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brains.hpp"

class	Dog : public Animal
{

	public:

	Dog(std::string name = "Dog");
	Dog(Dog const &rhs);
	~Dog();

	void	makeSound() const;

	Dog	&operator=(Dog const &rhs);
	Animal	&operator=(Animal const &rhs);

	Brains *get_brains() const;

	private:

	Brains *brains;

};

#endif