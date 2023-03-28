/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 19:47:43 by nikita            #+#    #+#             */
/*   Updated: 2022/08/06 13:39:37 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{

    public:

    Fixed(void);
    Fixed(Fixed const &src);
    ~Fixed(void);

    Fixed   &operator=(Fixed const &rhs);
    
    int     getRawBits( void ) const;
    void    setRawBits( int const raw );

    private:
    
    int                 num;
    static const int    f_bist = 8;
};

#endif