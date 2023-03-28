/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:57:34 by nikita            #+#    #+#             */
/*   Updated: 2022/08/10 11:46:18 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), hit_points(10), energy_points(10), attack_damage(0), max_health(10)
{
	std::cout << "constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &rhs) : name(rhs.get_name()), hit_points(rhs.get_hit()), energy_points(rhs.get_energy()), attack_damage(rhs.get_attack()), max_health(rhs.get_max())
{
	std::cout << "copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "destructor called" << std::endl;
}

ClapTrap   &ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "operator = called" << std::endl;
    name = rhs.get_name();
    hit_points = rhs.get_hit();
    energy_points = rhs.get_energy();
    attack_damage = rhs.get_attack();
	max_health = rhs.get_max();
    return (*this);
}

void    ClapTrap::attack(const std::string& target)
{
	if (get_energy() > 0 && get_hit() > 0)
	{
		std::cout << "ClapTrap " << get_name() << " attacks " << target
		<< " , causing " << get_attack() << " points of damage!" << std::endl;
		energy_points--;
	}
	else
		std::cout << get_name() << " : I can't attack." << std::endl;
	return ;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
	if (get_hit() > 0 && amount > 0)
	{
		std::cout << "ClapTrap " << get_name() << " was damaged for " << amount
		<< " amount of hit points!" << std::endl;
		if (hit_points <= amount)
		{
			hit_points = 0;
			energy_points = 0;
			attack_damage = 0;
		}
		else
			hit_points -= amount;
	}
	else
		std::cout << get_name() << " : I can't be damaged" << std::endl;
	return ;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
	if (get_energy() > 0 && get_hit() > 0 && amount > 0)
	{
		std::cout << "ClapTrap " << get_name() << " repairs itself " << amount
		<< " points of hit points!" << std::endl;
		if (hit_points + amount > max_health)
			hit_points = max_health;
		else
			hit_points += amount;
		energy_points--;
	}
	else
		std::cout << get_name() << " : I can't repair myself" << std::endl;
	return ;
}

unsigned int ClapTrap::get_hit() const
{
    return (hit_points);
}

unsigned int	ClapTrap::get_energy() const
{
    return (energy_points);
}

unsigned int	ClapTrap::get_attack() const
{
    return (attack_damage);
}

std::string	ClapTrap::get_name() const
{
    return (name);
}

unsigned int	ClapTrap::get_max() const
{
	return (max_health);
}

std::ostream   &operator<<(std::ostream &o, ClapTrap const &i)
{
	o << i.get_name();
	return (o);
}

void	ClapTrap::set_name(std::string name)
{
	this->name = name;
}

void	ClapTrap::set_hit(unsigned int n)
{
	this->hit_points = n;
}

void	ClapTrap::set_energy(unsigned int n)
{
	this->energy_points = n;
}

void	ClapTrap::set_attack(unsigned int n)
{
	this->attack_damage = n;
}
