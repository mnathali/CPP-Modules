/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 19:55:34 by nikita            #+#    #+#             */
/*   Updated: 2022/08/09 15:50:49 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>


Fixed   &Fixed::min(Fixed &a, Fixed &b)
{
    return (a > b ? b : a);
}

const Fixed   &Fixed::min(Fixed const &a, Fixed const &b)
{
    return (a > b ? b : a);
}

Fixed   &Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b ? a : b);
}

const Fixed   &Fixed::max(Fixed const &a, Fixed const &b)
{
    return (a > b ? a : b);
}

Fixed   Fixed::operator++(void)
{
    //std::cout << "operator ++ called" << std::endl;
    Fixed fix;

    num += 1;
    fix.setRawBits(num);
    return (fix);
}

Fixed   Fixed::operator--(void)
{
    //std::cout << "operator -- called" << std::endl;
    Fixed fix;
    num -= 1;
    fix.setRawBits(num);
    return (fix);
}

Fixed   Fixed::operator++(int)
{
    //std::cout << "++ operator called" << std::endl;
    Fixed fix;

    fix.setRawBits(num);
    num += 1;
    return (fix);
}

Fixed   Fixed::operator--(int)
{
    std::cout << "-- operator called" << std::endl;
    Fixed fix;

    fix.setRawBits(num);
    num -= 1;
    return (fix);
}

Fixed   Fixed::operator+(Fixed const &rhs) const
{
    //std::cout << "operator + called" << std::endl;
    int n = num + rhs.getRawBits();
    if (n > 1 << 23 || n < ~(1 << 23) + 1)
    {
        std::cout << "The result is too big for fixed point number" << std::endl;
        return (*this);
    }
    Fixed sum;
    sum.setRawBits(n);
    return (sum);
}

Fixed   Fixed::operator-(Fixed const &rhs) const
{
    //std::cout << "operator - called" << std::endl;
    int n = num - rhs.getRawBits();
    if (n > 1 << 23 || n < ~(1 << 23) + 1)
    {
        std::cout << "The result is too big for fixed point number" << std::endl;
        return (*this);
    }
    Fixed diff;
    diff.setRawBits(n);
    return (diff);
}

Fixed   Fixed::operator*(Fixed const &rhs) const
{
    //std::cout << "operator * called" << std::endl;
    int n;
    n = std::roundf((num * rhs.getRawBits()) / (1 << f_bits));
    if (n > 1 << 23 || n < ~(1 << 23) + 1)
    {
        std::cout << "The result is too big for fixed point number" << std::endl;
        return (*this);
    }
    Fixed mult;
    mult.setRawBits(n);
    return (mult);
}

Fixed   Fixed::operator/(Fixed const &rhs) const
{
    //std::cout << "operator / called" << std::endl;
    if (rhs.getRawBits() == 0)
    {
        std::cout << "Division by zero" << std::endl;
        return (*this);
    }
    int n = convert_float_int((float)num / rhs.getRawBits());
    if (n > 1 << 23 || n < ~(1 << 23) + 1)
    {
        std::cout << "The result is too big for fixed point number" << std::endl;
        return (*this);
    }
    Fixed divi;
    divi.setRawBits(n);
    return (divi);
}

bool    Fixed::operator==(Fixed const &rhs) const
{
    std::cout << "operator == called" << std::endl;
    if (num == rhs.getRawBits())
        return (true);
    return (false);
}

bool    Fixed::operator!=(Fixed const &rhs) const
{
    std::cout << "operator != called" << std::endl;
    if (num != rhs.getRawBits())
        return (true);
    return (false);
}

bool    Fixed::operator>(Fixed const &rhs) const
{
    //std::cout << "operator > called" << std::endl;
    if (num > rhs.getRawBits())
        return (true);
    return (false);
}

bool    Fixed::operator<(Fixed const &rhs) const
{
    //std::cout << "operator < called" << std::endl;
    if (num < rhs.getRawBits())
        return (true);
    return (false);
}

bool    Fixed::operator>=(Fixed const &rhs) const
{
    //std::cout << "operator >= called" << std::endl;
    if (num >= rhs.getRawBits())
        return (true);
    return (false);
}

bool    Fixed::operator<=(Fixed const &rhs) const
{
    //std::cout << "operator <= called" << std::endl;
    if (num <= rhs.getRawBits())
        return (true);
    return (false);
}

Fixed::Fixed(int const n)
{
    //std::cout << "constructor with int argument called" << std::endl;
    if (n > 1 << 23 || n < ~(1 << 23) + 1)
    {
        std::cout << "too big number to be a fixed point number" << std::endl;
        num = 0;
        return ;
    }
    num =  n << f_bits;
}

int Fixed::convert_float_int(float const n) const
{
    int         f = *(int *)(&n);
    unsigned    s = f >> (MANTISSA_BITS + EXP_BITS);
    unsigned    exp = f >> MANTISSA_BITS & 0xFF;
    unsigned    mantissa = f & 0x7FFFFF;
    int         x;
    int         e = exp - BIAS;
  
    if (exp == 0 || e > MANTISSA_BITS - 1)
    {
        std::cout << "too big number to be a fixed point number" << std::endl;
        return (0);
    }
    x = ((1 << MANTISSA_BITS) | mantissa) << (f_bits - 1);
    x = std::roundf((float)x / (1 << (23 - e - 1)));
    if (s)
        x = ~x + 1;
    return (x);
}

Fixed::Fixed(float const n)
{
    //std::cout << "constructor with float argument called" << std::endl;

    num = convert_float_int(n);
}

Fixed::Fixed(void) : num(0)
{
    //std::cout << "default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src) : num(src.getRawBits())
{
    //std::cout << "copy constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
    //std::cout << "destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
    //std::cout << "Assignation operator called" << std::endl;
    num = rhs.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const 
{
    //std::cout << "getRawBits member function called" << std::endl;
    return (num);
}

void    Fixed::setRawBits( int const raw )
{
    //std::cout << "setRawBits member function called" << std::endl;
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
