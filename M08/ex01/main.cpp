/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnathali <mnathali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 22:39:27 by mnathali          #+#    #+#             */
/*   Updated: 2022/09/01 11:49:57 by mnathali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(int argc, char const *argv[])
{
	(void)argc;(void)argv;
	Span A(1000);
	Span B(10000);

	A.addNumber(42,1000);
	B = A;
	A[99] = 10;
	std::cout << A[99] << " " << B[99] << std::endl;
	std::cout << "----------Subject Main---------" << std::endl;

	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	for (size_t i = 0; i < sp.getNums().size(); i++)
		std::cout << sp[i] << std::endl;
	std::cout << "----------Large Span---------" << std::endl;
	try
	{
		Span mx(4294967295);
		mx.addNumber(2147483647, 10000000);
		mx[999] = 0;
		std::cout << mx.shortestSpan() << std::endl;
		std::cout << mx.longestSpan() << std::endl;

		Span mn(100);
		mn.addNumber(12);
		mn.addNumber(11);
		std::cout << mn.shortestSpan() << std::endl;
		std::cout << mn.longestSpan() << std::endl;
		mn.addNumber(1, 99);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}
