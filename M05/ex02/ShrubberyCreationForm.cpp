/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 00:33:00 by nikita            #+#    #+#             */
/*   Updated: 2022/08/21 02:18:35 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), target(target)
{
	std::cout << target << " ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs) : Form(rhs.getName(), rhs.getGrade_sign(), rhs.getGrade_ex())
{
	std::cout << target << " ShrubberyCreationForm copy constructor called" << std::endl;
	target = rhs.getTarget();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << target << " ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	std::cout << target << " ShrubberyCreationForm operator = called" << std::endl;
	*(Form *)this = *(Form *)&rhs;
	target = rhs.getTarget();
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (getGrade_ex() < executor.getGrade())
		throw GradeTooLowException();
	if (is_signed())
	{
		std::ofstream ofs(std::string(target).append("_shrubbery"));
		if (ofs.is_open())
		{
			ofs << "    oxoxoo    ooxoo" << std::endl
				<< "  ooxoxo oo  oxoxooo" << std::endl
				<< " oooo xxoxoo ooo ooox" << std::endl
				<< " oxo o oxoxo  xoxxoxo" << std::endl
				<< "  oxo xooxoooo o ooo" << std::endl
				<< "    ooo\\oo\\  /o/o" << std::endl
				<< "        \\  \\/ /" << std::endl
				<< "         |   /" << std::endl
				<< "         |  |" << std::endl
				<< "         | D|" << std::endl
				<< "         |  |" << std::endl
				<< "         |  |" << std::endl
				<< "  ______/____\\____" << std::endl;
		}
		ofs.close();
	}
	executor.executeForm(*this);
}

std::string ShrubberyCreationForm::getTarget() const
{
	return (target);
}
