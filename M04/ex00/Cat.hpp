/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnathali <mnathali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 22:24:20 by nikita            #+#    #+#             */
/*   Updated: 2023/03/28 20:12:57 by mnathali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class	Cat : public Animal
{

	public:

	Cat(std::string name = "Cat");
	Cat(Cat const &rhs);
	~Cat();

	void	makeSound() const;

	Cat	&operator=(Cat const &rhs);


};

#endif§