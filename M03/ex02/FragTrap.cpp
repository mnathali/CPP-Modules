/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 01:17:04 by nikita            #+#    #+#             */
/*   Updated: 2022/08/10 11:47:17 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void	FragTrap::highFivesGuys(void)
{
	if (energy_points && hit_points)
	{
		std::cout << get_name() << " high fives!" << std::endl;
		energy_points--;
	}
	else
		std::cout << get_name() << " can't high fives" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;;
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
	max_health = 100;
	std::cout << get_name() << " FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &rhs)
{
	set_name(rhs.get_name());
	set_hit(rhs.get_hit());
	set_energy(rhs.get_energy());
	set_attack(rhs.get_attack());
	max_health = 100;
	std::cout << get_name() << " copy FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << get_name() << " FragTrap destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	std::cout << "FragTrap operator = called" << std::endl;
    name = rhs.get_name();
    hit_points = rhs.get_hit();
    energy_points =  rhs.get_energy();
    attack_damage = rhs.get_attack();
    return (*this);
}
