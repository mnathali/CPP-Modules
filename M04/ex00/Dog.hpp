/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 23:40:54 by nikita            #+#    #+#             */
/*   Updated: 2022/08/13 16:41:29 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class	Dog : public Animal
{

	public:

	Dog(std::string name = "Dog");
	Dog(Dog const &rhs);
	~Dog();

	void	makeSound() const;

	Dog	&operator=(Dog const &rhs);

};

#endif