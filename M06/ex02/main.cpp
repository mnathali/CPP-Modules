/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnathali <mnathali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:08:06 by mnathali          #+#    #+#             */
/*   Updated: 2022/08/24 17:53:21 by mnathali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "declarations.hpp"
#include <cstdlib>

int main(int argc, char const *argv[])
{
	(void)argc;(void)argv;
	srand(argc);
	std::cout << "------------------TEST WITH POINTER-----------------------" << std::endl;

	Base *p = generate();
	identify(p);
	delete p;
	p = generate();
	identify(p);
	delete p;
	p = generate();
	identify(p);
	delete p;
	p = generate();
	identify(p);
	delete p;
	p = generate();
	identify(p);
	delete p;
	std::cout << "------------------TEST WITH REFERENCE-----------------------" << std::endl;

	p = generate();
	identify(*p);
	delete p;
	p = generate();
	identify(*p);
	delete p;
	p = generate();
	identify(*p);
	delete p;
	p = generate();
	identify(*p);
	delete p;
	p = generate();
	identify(*p);
	delete p;

	return 0;
}
