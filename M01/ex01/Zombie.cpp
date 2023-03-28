/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 01:06:10 by nikita            #+#    #+#             */
/*   Updated: 2022/08/01 14:04:03 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name) 
{
    std::cout << "constructor called : " << name << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "destructor called : " << name << std::endl;
}

void Zombie::announce( void )
{
    if (name.c_str())
        std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
