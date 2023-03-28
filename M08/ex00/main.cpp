/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnathali <mnathali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 19:27:45 by mnathali          #+#    #+#             */
/*   Updated: 2022/09/01 11:32:06 by mnathali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>

int main(int argc, char const *argv[])
{
	(void)argc;(void)argv;
	std::cout << "----------------Test vector-------------------\n";
	std::vector<int> obj(10);

	obj[5] = 42;
	std::cout << &obj[5] << std::endl;
	std::vector<int>::const_iterator n = easyfind(obj, 42);
	std::cout << n.base() << " value : " << *n << std::endl;
	try
	{
		std::cout << *easyfind(obj, 3) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << " Not found element" << '\n';
	}

	std::cout << "----------------Test list-------------------\n";

	std::list<int> obj_l(10, 4242);

	std::cout << obj_l.size() << std::endl;
	std::cout << " value : " << *easyfind(obj_l, 4242) << std::endl;
	obj_l.push_back(2121);
	std::cout << " value : " << *easyfind(obj_l, 2121) << std::endl;
	try
	{
		std::cout << *easyfind(obj, 3) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << " Not found element" << '\n';
	}

	std::cout << "----------------Test deque-------------------\n";

	std::deque<int> obj_d(10, 225);

	obj_d.insert(obj_d.begin() + 4, 42);
	for (std::deque<int>::iterator it = obj_d.begin(); it != obj_d.end(); it++)
		std::cout << *it << " " << std::endl;
	std::cout << " value : " << *easyfind(obj_d, 225) << std::endl;
	try
	{
		std::cout << *easyfind(obj_d, 3) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << " Not found element" << '\n';
	}

	return 0;
}
