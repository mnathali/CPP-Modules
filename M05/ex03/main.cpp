/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 14:59:20 by nikita            #+#    #+#             */
/*   Updated: 2022/08/21 17:34:50 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(int argc, char const *argv[])
{
	(void)argc;(void)argv;

	Form *form = 0;
	std::cout << "--------------TEST INTERNS----------------\n";
	try
	{
		form = Intern().makeForm("standard form", "target");
		delete form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "--------------TEST WITH FORM SRUBBERY---------------\n";

	try
	{
		form = Intern().makeForm("shrubbery creation", "Docs");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	Bureaucrat jeff(70, "Jeff");

	form->beSigned(jeff);
	form->execute(jeff);
	delete form;
	// try
	// {
	// 	form->beSigned(jeff);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }

	std::cout << "--------------TEST WITH FORM ROBOTOMY---------------\n";

	try
	{
		form = Intern().makeForm("robotomy request", "Box");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		form->beSigned(jeff);
		form->execute(jeff);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	delete form;

		std::cout << "--------------TEST WITH FORM PRESIDENTIAL---------------\n";

	try
	{
		form = Intern().makeForm("presidential pardon", "Pres");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		jeff.upper_grade(68);
		form->beSigned(jeff);
		form->execute(jeff);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	delete form;

	return 0;
}
