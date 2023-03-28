/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 19:55:34 by nikita            #+#    #+#             */
/*   Updated: 2022/08/06 01:02:42 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : num(0)
{
    std::cout << "default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src) : num(src.getRawBits())
{
    std::cout << "copy constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
    std::cout << "destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    num = rhs.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const 
{
    std::cout << "getRawBits member function called" << std::endl;
    return (num);
}

void    Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    num = raw;
}

