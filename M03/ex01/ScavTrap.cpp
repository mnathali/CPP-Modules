/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:06:35 by nikita            #+#    #+#             */
/*   Updated: 2022/08/09 19:16:20 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void    ScavTrap::attack(const std::string& target)
{
	if (get_energy() > 0 && get_hit() > 0)
	{
		std::cout << "ScavTrap " << get_name() << " attacks " << target
		<< " , causing " << get_attack() << " points of damage!" << std::endl;
		energy_points--;
	}
	else
		std::cout << get_name() << " : I can't attack." << std::endl;
	return ;
}

void	ScavTrap::guardGate()
{
	if (energy_points && hit_points && !mode)
	{
		std::cout << get_name() << " in gate keeper mode" << std::endl;
		energy_points--;
		mode = true;
	}
	else
		std::cout << get_name() << " can't turn on guard mode anymore" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	max_health = 100;
	mode = false;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &rhs)
{
	set_name(rhs.get_name());
	set_hit(rhs.get_hit());
	set_energy(rhs.get_energy());
	set_attack(rhs.get_attack());
	mode = rhs.get_mode();
	std::cout << "copy ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "ScavTrap operator = called" << std::endl;
    name = rhs.get_name();
    hit_points = rhs.get_hit();
    energy_points =  rhs.get_energy();
    attack_damage = rhs.get_attack();
    return (*this);
}

bool	ScavTrap::get_mode() const
{
	return (mode);
}
