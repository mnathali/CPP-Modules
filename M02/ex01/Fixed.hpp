/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 19:47:43 by nikita            #+#    #+#             */
/*   Updated: 2022/08/07 00:30:34 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

#define BIAS 127
#define EXP_BITS 8
#define MANTISSA_BITS 23

class Fixed
{

    public:

    Fixed(void);
    Fixed(int const n);
    Fixed(float const f);
    Fixed(Fixed const &src);
    ~Fixed(void);

    Fixed   &operator=(Fixed const &rhs);
    
    int     getRawBits( void ) const;
    void    setRawBits( int const raw );

    float   toFloat( void ) const;
    int     toInt( void ) const;

    private:
    
    int                 num;
    static const int    f_bits = 8;
};

    std::ostream   &operator<<(std::ostream &o, Fixed const &i);

#endif