/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 00:33:50 by nikita            #+#    #+#             */
/*   Updated: 2022/08/01 02:02:36 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main()
{
    std::cout << "TEST NEW ZOMBIE WITH HEAP:" << std::endl;
    Zombie *zombie;
    zombie = newZombie("");zombie->announce();delete zombie;
    zombie = newZombie("Bob");zombie->announce();delete zombie;
    zombie = newZombie("Sam");zombie->announce();delete zombie;
    zombie = newZombie("\0");zombie->announce();delete zombie;
    //zombie = newZombie(0);zombie->announce();delete zombie;

    std::cout << "TEST ZOMBIE ON STACK:" << std::endl;
    randomChump("");
    randomChump("Bob");
    randomChump("Sam");
    randomChump("\0");


    return 0;
}
