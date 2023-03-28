/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 14:42:46 by nikita            #+#    #+#             */
/*   Updated: 2022/08/20 14:49:56 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(short grade, std::string name) : grade(0), name(name)
{
	std::cout << name << " with grade " << grade << " constructor called" << std::endl;
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &rhs) : grade(rhs.getGrade()), name(rhs.getName())
{
	std::cout << rhs.getName() << " with grade " << rhs.getGrade() << " copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << name << " with grade " << grade << " destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
	std::cout << rhs.getName() << " with grade " << rhs.getGrade() << " operator = called" << std::endl;
	grade = rhs.getGrade();
	//name = rhs.getName();
	return (*this);
}

short		Bureaucrat::getGrade() const
{
	return (grade);
}

std::string Bureaucrat::getName() const
{
	return (name);
}

void	Bureaucrat::upper_grade(int i)
{
	if (grade - i < 1)
		throw GradeTooHighException();
	grade -= i;
}

void	Bureaucrat::lower_grade(int i)
{
	if (grade + i > 150)
		throw GradeTooLowException();
	grade -= i;
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return (o);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	std::cout << "throw too high exception" << std::endl;
	return ("this grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	std::cout << "throw too low exception" << std::endl;
	return ("this grade is too low");
}
