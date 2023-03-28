/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 14:59:20 by nikita            #+#    #+#             */
/*   Updated: 2022/08/21 16:25:34 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(int argc, char const *argv[])
{
	(void)argc;(void)argv;

	try
	{
		Bureaucrat B(151);
		std::cout << "This massage should not be written to stdout\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	Bureaucrat A;
	Bureaucrat B(1);
	Bureaucrat C(110, "Jonny");

	std::cout << A << std::endl;
	std::cout << B << std::endl;
	std::cout << C << std::endl;
	std::cout << "-----------------------------------------------\n";
	try
	{
		B.upper_grade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-----------------------------------------------\n";
	try
	{
		A.upper_grade(150);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-----------------------------------------------\n";
	
	A = B;
	A = C;

	std::cout << A << std::endl;
	std::cout << B << std::endl;
	std::cout << C << std::endl;
	std::cout << "--------------TEST CREATING FORMS-----------------------\n";


	Form D;
	Form E("Doc", 30, 25);
	Form F(E);

	std::cout << D << std::endl;
	std::cout << E << std::endl;
	std::cout << F << std::endl;

	try
	{
		Form G("horm", 0, 5);
		std::cout << "This massage should not be written to stdout\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		E.beSigned(A);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "---------------TEST SIGN FORM--------------------\n";
	try
	{
		E.beSigned(B);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		E.beSigned(B);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
