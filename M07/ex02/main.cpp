/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnathali <mnathali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 00:40:44 by mnathali          #+#    #+#             */
/*   Updated: 2022/08/26 12:55:06 by mnathali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(int argc, char const *argv[])
{
	(void)argc; (void)argv;

	Array<int> ints(10);

	Array<Array<int> > ArrI(10);

	for (int i = 0; i < 10; i++)
		ArrI[i] = Array<int>(10);

	std::cout << ints << std::endl;
	std::cout << ArrI << std::endl;

	for (int i = 0; i < 10; i++)
		ints[i] = i;
	std::cout << ints << std::endl;
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			ArrI[i][j] = i;
	std::cout << ArrI << std::endl;
	ArrI[5] = ints;
	ints = ArrI[9];
	ints[5] = 2147483647;
	std::cout << ints << std::endl;
	std::cout << ArrI << std::endl;

	try
	{
		ints[1000] = 10;
		std::cout << "This massage should not be written" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		std::cout << "Test write inside try :" << ArrI[100] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
