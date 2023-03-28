/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 22:24:20 by nikita            #+#    #+#             */
/*   Updated: 2022/08/11 00:36:30 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCat_HPP
#define WRONGCat_HPP

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{

	public:

	WrongCat(std::string name = "WrongCat");
	WrongCat(WrongCat const &rhs);
	~WrongCat();

	void	makeSound() const;

	WrongCat	&operator=(WrongCat const &rhs);


};

#endif