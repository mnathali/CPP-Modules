/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 22:01:00 by nikita            #+#    #+#             */
/*   Updated: 2022/08/11 00:58:41 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class	WrongAnimal
{

	public:

	WrongAnimal();
	WrongAnimal(WrongAnimal const &rhs);
	virtual ~WrongAnimal();

	WrongAnimal	&operator=(WrongAnimal const &rhs);

	void makeSound() const;

	std::string	getType() const;
	void		setType(std::string name);

	protected:

	std::string	type;

};

std::ostream   &operator<<(std::ostream &o, WrongAnimal const &i);

#endif