/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 02:48:38 by nikita            #+#    #+#             */
/*   Updated: 2022/08/21 16:06:55 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), target(target)
{
	std::cout << target << " RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rhs) : Form(rhs.getName(), rhs.getGrade_sign(), rhs.getGrade_ex())
{
	std::cout << target << " RobotomyRequestForm copy constructor called" << std::endl;
	target = rhs.getTarget();
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << target << " RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	std::cout << target << " RobotomyRequestForm operator = called" << std::endl;
	*(Form *)this = *(Form *)&rhs;
	target = rhs.getTarget();
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (getGrade_ex() < executor.getGrade())
		throw GradeTooLowException();
	if (is_signed() && rand() % 100 < 50)
	{
		std::cout << "BZZBZBBZBZ " << target << " has been robotomized" << std::endl;
	}
	else if (is_signed())
		std::cout << "BZZBZBBZBZ " << target << " has not been robotomized" << std::endl;
	executor.executeForm(*this);
}

std::string RobotomyRequestForm::getTarget() const
{
	return (target);
}
