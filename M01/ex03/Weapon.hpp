/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 23:11:18 by nikita            #+#    #+#             */
/*   Updated: 2022/08/02 01:39:38 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{

    public:

    Weapon(std::string str = "");
    ~Weapon();

    std::string const & getType() const;
    void        setType(std::string str);

    private:

    std::string type;

};

#endif