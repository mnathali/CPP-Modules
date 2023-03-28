/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnathali <mnathali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:01:57 by mnathali          #+#    #+#             */
/*   Updated: 2022/08/24 16:45:40 by mnathali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>

Base * generate(void)
{
	int i = rand() % 3;

	switch (i)
	{
	case 0:
		return (new A);
	case 1:
		return (new B);
	case 2:
		return (new C);
	}
	return (0);
}

void identify(Base* p)
{
	A *a = dynamic_cast<A *>(p);
	B *b = dynamic_cast<B *>(p);
	C *c = dynamic_cast<C *>(p);
	if (a)
		std::cout << "Identified class A" << std::endl;
	else if (b)
		std::cout << "Identified class B" << std::endl;
	else if (c)
		std::cout << "Identified class C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		std::cout << "Identified class A as a reference" << std::endl;
		(void)a;
	}
	catch(const std::exception& e)
	{
		// std::cerr << e.what() << '\n';
	}
	try
	{
		B &b = dynamic_cast<B &>(p);
		std::cout << "Identified class B as a reference" << std::endl;
		(void)b;

	}
	catch(const std::exception& e)
	{
		// std::cerr << e.what() << '\n';
	}
	try
	{
		C &c = dynamic_cast<C &>(p);
		std::cout << "Identified class C as a reference" << std::endl;
		(void)c;
	}
	catch(const std::exception& e)
	{
		// std::cerr << e.what() << '\n';
	}
	
	
}