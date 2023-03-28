/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 14:50:09 by nikita            #+#    #+#             */
/*   Updated: 2022/08/09 12:57:56 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(int argc, char const *argv[])
{
	(void)argc;(void)argv;
	ScavTrap	one;
	ScavTrap	two("Jane");
	ScavTrap	three(one);

	one = three;

	std::cout << one << std::endl;
	std::cout << two << std::endl;
	std::cout << three << std::endl;

	std::cout << one << " --- " << "Health: " << one.get_hit() << " " << "Energy: " << one.get_energy() << " " << "Damage: " << one.get_attack() << std::endl;
	one.guardGate();two.guardGate();
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

	one = two;	one.guardGate();	one.guardGate();
	one.takeDamage(3);std::cout << one << " --- " << "Health: " << one.get_hit() << " " << "Energy: " << one.get_energy() << " " << "Damage: " << one.get_attack() << std::endl;
	one.beRepaired(1);std::cout << one << " --- " << "Health: " << one.get_hit() << " " << "Energy: " << one.get_energy() << " " << "Damage: " << one.get_attack() << std::endl;
	one.takeDamage(3);std::cout << one << " --- " << "Health: " << one.get_hit() << " " << "Energy: " << one.get_energy() << " " << "Damage: " << one.get_attack() << std::endl;
	one.beRepaired(100);std::cout << one << " --- " << "Health: " << one.get_hit() << " " << "Energy: " << one.get_energy() << " " << "Damage: " << one.get_attack() << std::endl;
	one.takeDamage(150);std::cout << one << " --- " << "Health: " << one.get_hit() << " " << "Energy: " << one.get_energy() << " " << "Damage: " << one.get_attack() << std::endl;
	one.beRepaired(100);std::cout << one << " --- " << "Health: " << one.get_hit() << " " << "Energy: " << one.get_energy() << " " << "Damage: " << one.get_attack() << std::endl;
	one.attack("Lucy");std::cout << one << " --- " << "Health: " << one.get_hit() << " " << "Energy: " << one.get_energy() << " " << "Damage: " << one.get_attack() << std::endl;
	one.takeDamage(3);std::cout << one << " --- " << "Health: " << one.get_hit() << " " << "Energy: " << one.get_energy() << " " << "Damage: " << one.get_attack() << std::endl;
	one.guardGate();
	
	ClapTrap four = ScavTrap("Nick");

	four.takeDamage(3);std::cout << four << " --- " << "Health: " << four.get_hit() << " " << "Energy: " << four.get_energy() << " " << "Damage: " << four.get_attack() << std::endl;
	four.beRepaired(1);std::cout << four << " --- " << "Health: " << four.get_hit() << " " << "Energy: " << four.get_energy() << " " << "Damage: " << four.get_attack() << std::endl;
	four.takeDamage(3);std::cout << four << " --- " << "Health: " << four.get_hit() << " " << "Energy: " << four.get_energy() << " " << "Damage: " << four.get_attack() << std::endl;
	four.beRepaired(100);std::cout << four << " --- " << "Health: " << four.get_hit() << " " << "Energy: " << four.get_energy() << " " << "Damage: " << four.get_attack() << std::endl;
	four.takeDamage(150);std::cout << four << " --- " << "Health: " << four.get_hit() << " " << "Energy: " << four.get_energy() << " " << "Damage: " << four.get_attack() << std::endl;
	four.beRepaired(100);std::cout << four << " --- " << "Health: " << four.get_hit() << " " << "Energy: " << four.get_energy() << " " << "Damage: " << four.get_attack() << std::endl;
	four.attack("Lucy");std::cout << four << " --- " << "Health: " << four.get_hit() << " " << "Energy: " << four.get_energy() << " " << "Damage: " << four.get_attack() << std::endl;
	four.takeDamage(3);std::cout << four << " --- " << "Health: " << four.get_hit() << " " << "Energy: " << four.get_energy() << " " << "Damage: " << four.get_attack() << std::endl;
	

	return 0;
}