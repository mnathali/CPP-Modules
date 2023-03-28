/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 14:08:16 by nikita            #+#    #+#             */
/*   Updated: 2022/08/21 16:11:23 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, short grade_sign, short grade_ex) : name(name), grade_sign(grade_sign), grade_ex(grade_ex), sign(0)
{
	std::cout << name << " grade_sign = " << grade_sign << " grade_ex = " << grade_ex << " constructor called" << std::endl;
	if (grade_sign > 150 || grade_ex > 150)
		throw Form::GradeTooLowException();
	else if (grade_sign < 1 || grade_ex < 1)
		throw Form::GradeTooHighException();
}

Form::Form(const Form &rhs) : name(rhs.getName()), grade_sign(rhs.getGrade_sign()), grade_ex(rhs.getGrade_ex()), sign(rhs.is_signed())
{
	std::cout << name << " grade_sign = " << grade_sign << " grade_ex = " << grade_ex << " copy constructor called" << std::endl;
}

Form::~Form()
{
	std::cout << name << " grade_sign = " << grade_sign << " grade_ex = " << grade_ex << " destructor called" << std::endl;
}

Form &Form::operator=(const Form &rhs)
{
	std::cout << "operator = called" << std::endl;
	sign = rhs.is_signed();
	return (*this);
}

std::string	Form::getName() const
{
	return (name);
}

short	Form::getGrade_sign() const
{
	return (grade_sign);
}

short	Form::getGrade_ex() const
{
	return (grade_ex);
}

bool	Form::is_signed() const
{
	return (sign);
}

bool	Form::beSigned(const Bureaucrat &rhs)
{
	int grade = rhs.getGrade();
	if (grade > grade_sign)
		throw Form::GradeTooLowException();
	rhs.signForm(*this);
	sign = true;
	return (true);
}

const char *Form::GradeTooHighException::what() const throw()
{
	std::cout << "Form throw too high exception" << std::endl;
	return ("this grade is too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	std::cout << "Form throw too low exception" << std::endl;
	return ("this grade is too low");
}

std::ostream	&operator<<(std::ostream &o, Form const &rhs)
{
	o << "Form's name : " << rhs.getName() << ", grade_sign =  " << rhs.getGrade_sign() << ", grade_ex = " << rhs.getGrade_ex() << ", status : " << rhs.is_signed() << std::endl;
	return (o);
}