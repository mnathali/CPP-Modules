/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 14:59:20 by nikita            #+#    #+#             */
/*   Updated: 2022/08/21 16:52:47 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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
	std::cout << "-----------TEST SHRUBBERY CREATION-----------------------\n";


	Form *D = new ShrubberyCreationForm();

	std::cout << *D << std::endl;
	
	try
	{
		D->execute(B);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	D->beSigned(B);
	D->execute(B);

	A = Bureaucrat();
	try
	{
		D->execute(A);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete D;

	std::cout << "---------------TEST ROBOTOMY REQUEST-----------------\n";

	D = new RobotomyRequestForm("Lalala");

	try
	{
		D->execute(B);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	D->beSigned(B);
	D->execute(B);

	A = Bureaucrat();
	try
	{
		D->execute(A);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete D;

	std::cout << "------------TEST PRESIDENTIAL PARDON------------------\n";

	D = new PresidentialPardonForm("Pres");

	try
	{
		D->execute(B);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	D->beSigned(B);
	D->execute(B);

	A = Bureaucrat();
	try
	{
		D->execute(A);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete D;
	return 0;
}
