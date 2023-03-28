/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 23:19:59 by nikita            #+#    #+#             */
/*   Updated: 2022/08/03 01:32:09 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class   Harl
{

    public:

    void    complain( std::string level );
    
    private:

    void    debug( void );
    void    info( void );
    void    warning( void );
    void    error( void );


};

#endif