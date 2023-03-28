/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 23:33:31 by nikita            #+#    #+#             */
/*   Updated: 2022/08/03 02:02:25 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::complain( std::string level )
{
    void    (Harl::*f[4])(void);
    std::string name[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    f[0] = &Harl::debug;
    f[1] = &Harl::info;
    f[2] = &Harl::warning;
    f[3] = &Harl::error;

    int i = 0;

    while (name[i] != level && i < 4)
        i++;
    switch (i)
    {
        case 0:
            (this->*f[0])();
        case 1:
            (this->*f[1])();
        case 2:
            (this->*f[2])();
        case 3:
            (this->*f[3])();
            return ;

        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            return ;
    }
}
    
void    Harl::debug( void )
{
    std::cout << "[DEBUG]" << std::endl << "I love having extra bacon for my "
    << "7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void    Harl::info( void )
{
    std::cout << "[INFO]" << std::endl << "I cannot believe adding extra bacon costs more money. "
        << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning( void )
{
    std::cout << "[WARNING]" << std::endl << "I think I deserve to have some extra bacon for free. "
        << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error( void )
{
    std::cout << "[ERROR]" << std::endl << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
