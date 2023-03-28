/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 02:27:07 by nikita            #+#    #+#             */
/*   Updated: 2022/08/21 02:51:37 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), target(target)
{
	std::cout << target << " PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &rhs) : Form(rhs.getName(), rhs.getGrade_sign(), rhs.getGrade_ex())
{
	std::cout << target << " PresidentialPardonForm copy constructor called" << std::endl;
	target = rhs.getTarget();
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << target << " PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	std::cout << target << " PresidentialPardonForm operator = called" << std::endl;
	*(Form *)this = *(Form *)&rhs;
	target = rhs.getTarget();
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (getGrade_ex() < executor.getGrade())
		throw GradeTooLowException();
	if (is_signed())
		std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	executor.executeForm(*this);
}

std::string PresidentialPardonForm::getTarget() const
{
	return (target);
}
