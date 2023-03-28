/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 01:04:02 by nikita            #+#    #+#             */
/*   Updated: 2022/08/02 01:41:39 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{

    public:

    HumanB(std::string name = "");
    ~HumanB();

    void    setWeapon(Weapon &weapon);
    void    attack();

    private:

    std::string _name;
    Weapon      *_weapon;

};

#endif