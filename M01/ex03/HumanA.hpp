/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 00:47:12 by nikita            #+#    #+#             */
/*   Updated: 2022/08/02 01:40:38 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{

    public:

    HumanA(std::string name, Weapon &weapon);
    ~HumanA();

    void    attack();

    private:

    std::string _name;
    Weapon      &_weapon;

};

#endif
