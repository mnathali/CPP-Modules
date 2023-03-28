/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 13:40:31 by nikita            #+#    #+#             */
/*   Updated: 2022/08/21 17:10:28 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern constructor called" << std::endl;
}

Intern::Intern(const Intern &rhs)
{
	(void)rhs;
	std::cout << "Intern copy constructor called" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}
	
Intern	&Intern::operator=(const Intern &rhs)
{
	(void)rhs;
	std::cout << "Intern operator = called" << std::endl;
	return (*this);
}

Form	*Intern::makeForm(std::string name, std::string target)
{
	Form *form = 0;
	int j = 4;
	std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	for (int i = 0; i < 3; i++)
		(name == forms[i]) ? j = i : j += 0;
	switch (j)
	{
	case 0:
		form = new ShrubberyCreationForm(target);
		break;
	case 1:
		form = new RobotomyRequestForm(target);
		break;
	case 2:
		form = new PresidentialPardonForm(target);
		break;
	default:
		throw CreateFormException();
	}
	std::cout << "Intern creates " << name << std::endl;
	return (form);
}

const char *Intern::CreateFormException::what() const throw()
{
	std::cerr << "Form type doesn't exists" << std::endl;
	return ("Error with form type");
}
