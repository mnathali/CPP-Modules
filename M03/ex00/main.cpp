/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 14:50:09 by nikita            #+#    #+#             */
/*   Updated: 2022/08/08 16:50:47 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(int argc, char const *argv[])
{
	(void)argc;(void)argv;
	ClapTrap	one;
	ClapTrap	two("Jayson");
	ClapTrap	three(two);

	one = three;
	std::cout << one << std::endl;
	std::cout << two << std::endl;
	std::cout << three << std::endl;

	one = ClapTrap("Nick");

	std::cout << one << " --- " << "Health: " << one.get_hit() << " " << "Energy: " << one.get_energy() << " " << "Damage: " << one.get_hit() << std::endl;
	std::cout << one << std::endl;

	one.attack("Lucy");std::cout << one << " --- " << "Health: " << one.get_hit() << " " << "Energy: " << one.get_energy() << " " << "Damage: " << one.get_attack() << std::endl;
	one.attack("Lucy");std::cout << one << " --- " << "Health: " << one.get_hit() << " " << "Energy: " << one.get_energy() << " " << "Damage: " << one.get_attack() << std::endl;
	one.attack("Lucy");std::cout << one << " --- " << "Health: " << one.get_hit() << " " << "Energy: " << one.get_energy() << " " << "Damage: " << one.get_attack() << std::endl;
	one.attack("Lucy");std::cout << one << " --- " << "Health: " << one.get_hit() << " " << "Energy: " << one.get_energy() << " " << "Damage: " << one.get_attack() << std::endl;
	one.attack("Lucy");std::cout << one << " --- " << "Health: " << one.get_hit() << " " << "Energy: " << one.get_energy() << " " << "Damage: " << one.get_attack() << std::endl;
	one.attack("Lucy");std::cout << one << " --- " << "Health: " << one.get_hit() << " " << "Energy: " << one.get_energy() << " " << "Damage: " << one.get_attack() << std::endl;
	one.attack("Lucy");std::cout << one << " --- " << "Health: " << one.get_hit() << " " << "Energy: " << one.get_energy() << " " << "Damage: " << one.get_attack() << std::endl;
	one.attack("Lucy");std::cout << one << " --- " << "Health: " << one.get_hit() << " " << "Energy: " << one.get_energy() << " " << "Damage: " << one.get_attack() << std::endl;
	one.attack("Lucy");std::cout << one << " --- " << "Health: " << one.get_hit() << " " << "Energy: " << one.get_energy() << " " << "Damage: " << one.get_attack() << std::endl;
	one.attack("Lucy");std::cout << one << " --- " << "Health: " << one.get_hit() << " " << "Energy: " << one.get_energy() << " " << "Damage: " << one.get_attack() << std::endl;
	one.attack("Lucy");std::cout << one << " --- " << "Health: " << one.get_hit() << " " << "Energy: " << one.get_energy() << " " << "Damage: " << one.get_attack() << std::endl;

	one = two;
	one.takeDamage(3);std::cout << one << " --- " << "Health: " << one.get_hit() << " " << "Energy: " << one.get_energy() << " " << "Damage: " << one.get_attack() << std::endl;
	one.beRepaired(1);std::cout << one << " --- " << "Health: " << one.get_hit() << " " << "Energy: " << one.get_energy() << " " << "Damage: " << one.get_attack() << std::endl;
	one.takeDamage(3);std::cout << one << " --- " << "Health: " << one.get_hit() << " " << "Energy: " << one.get_energy() << " " << "Damage: " << one.get_attack() << std::endl;
	one.beRepaired(100);std::cout << one << " --- " << "Health: " << one.get_hit() << " " << "Energy: " << one.get_energy() << " " << "Damage: " << one.get_attack() << std::endl;
	one.takeDamage(150);std::cout << one << " --- " << "Health: " << one.get_hit() << " " << "Energy: " << one.get_energy() << " " << "Damage: " << one.get_attack() << std::endl;
	one.beRepaired(100);std::cout << one << " --- " << "Health: " << one.get_hit() << " " << "Energy: " << one.get_energy() << " " << "Damage: " << one.get_attack() << std::endl;
	one.attack("Lucy");std::cout << one << " --- " << "Health: " << one.get_hit() << " " << "Energy: " << one.get_energy() << " " << "Damage: " << one.get_attack() << std::endl;
	one.takeDamage(3);std::cout << one << " --- " << "Health: " << one.get_hit() << " " << "Energy: " << one.get_energy() << " " << "Damage: " << one.get_attack() << std::endl;


	
	return 0;
}