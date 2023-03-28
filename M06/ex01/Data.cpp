/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnathali <mnathali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 13:06:39 by mnathali          #+#    #+#             */
/*   Updated: 2022/08/24 13:35:05 by mnathali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(unsigned int i, unsigned int j): i(i), j(j) {std::cout << "constructor" << std::endl;}

Data::Data(const Data &rhs) : i(rhs.get_i()), j(rhs.get_j()) {std::cout << "copy constructor" << std::endl;}

Data::~Data() {std::cout << "destructor" << std::endl;}

Data &Data::operator=(const Data &rhs)
{
	i = rhs.get_i();
	j = rhs.get_j();
	return (*this);
}

unsigned int Data::get_i() const {return (i);}
unsigned int Data::get_j() const {return (j);}
uintptr_t	Data::get_pointer_i() {return (&i);}
uintptr_t	Data::get_pointer_j() {return (&j);}

std::ostream &operator<<(std::ostream &o, const Data &rhs)
{
	o << "i = " << rhs.get_i() << " | j = " << rhs.get_j();
	return (o);
}
