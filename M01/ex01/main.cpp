/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 00:33:50 by nikita            #+#    #+#             */
/*   Updated: 2022/08/02 23:14:04 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name );

int main()
{
    Zombie *array_of_zombies;
    int i;

    std::cout << "TEST ARRAY OF ZOMBIES WITH HEAP:" << std::endl;
    i = 10;
    array_of_zombies = zombieHorde(i, "Bob");
    for (int j = 0; j < i; j++)
        array_of_zombies[j].announce();
    delete [] array_of_zombies;

    i = 5;
    array_of_zombies = zombieHorde(i, "Sam");
    for (int j = 0; j < i; j++)
        array_of_zombies[j].announce();
    delete [] array_of_zombies;

    i = 1;
    array_of_zombies = zombieHorde(i, "Jayson");
    for (int j = 0; j < i; j++)
        array_of_zombies[j].announce();
    delete [] array_of_zombies;

    i = 0;
    array_of_zombies = zombieHorde(i, "Bill");
    for (int j = 0; j < i; j++)
        array_of_zombies[j].announce();
    delete [] array_of_zombies;


    i = -5;
    array_of_zombies = zombieHorde(i, "Will");
    for (int j = 0; j < i; j++)
        array_of_zombies[j].announce();
    delete [] array_of_zombies;


    return 0;
}
