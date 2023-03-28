/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 13:19:21 by nikita            #+#    #+#             */
/*   Updated: 2022/08/02 23:13:29 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name )
{
    if (N < 0)
        N = 0;
    Zombie *array_of_zombies = new Zombie[N];

    for (int i = 0; i < N; i++)
        array_of_zombies[i] = name;
    return (array_of_zombies);
}