/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 19:55:34 by nikita            #+#    #+#             */
/*   Updated: 2022/08/09 15:37:59 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(int const n)
{
    std::cout << "constructor with int argument called" << std::endl;
    if (n > 1 << 23)
    {
        std::cout << "too big number to be a fixed point number" << std::endl;
        num = 0;
        return ;
    }
    num =  n << f_bits;
}

Fixed::Fixed(float const n)
{
    std::cout << "constructor with float argument called" << std::endl;

    int         f = *(int *)(&n);
    unsigned    s = f >> (MANTISSA_BITS + EXP_BITS);
    unsigned    exp = f >> MANTISSA_BITS & 0xFF;
    unsigned    mantissa = f & 0x7FFFFF;
    int         x;
    int         e= exp - BIAS;
  
    if (exp == 0 || e > MANTISSA_BITS - 1)
    {
        std::cout << "too big number to be a fixed point number" << std::endl;
        num = 0;
        return ;
    }
    x = ((1 << MANTISSA_BITS) | mantissa) << (f_bits - 1);
    x = std::roundf((float)x / (1 << (23 - e - 1)));
    if (s)
        x = ~x + 1;
    num = x;  
}

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

std::ostream    &operator<<(std::ostream &o, Fixed const &i)
{
    o << i.toFloat();
    return (o);
}

float   Fixed::toFloat( void ) const
{
    return (num / (float)(1 << f_bits));
}

int     Fixed::toInt( void ) const
{

    return (std::roundf(num / (1 << f_bits)));
}

