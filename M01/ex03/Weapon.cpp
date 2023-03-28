/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 23:16:51 by nikita            #+#    #+#             */
/*   Updated: 2022/08/02 01:42:31 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str) : type(str) {}

Weapon::~Weapon() {}

std::string const & Weapon::getType() const
{
    return (type);
}

void    Weapon::setType(std::string str)
{
    type = str;
}
