/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 22:24:20 by nikita            #+#    #+#             */
/*   Updated: 2022/08/13 15:24:05 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brains.hpp"

class	Cat : public Animal
{

	public:

	Cat(std::string name = "Cat");
	Cat(Cat const &rhs);
	~Cat();

	void	makeSound() const;

	Cat	&operator=(Cat const &rhs);
	Animal	&operator=(Animal const &rhs);

	Brains *get_brains() const;

	private:

	Brains *brains;

};

#endif