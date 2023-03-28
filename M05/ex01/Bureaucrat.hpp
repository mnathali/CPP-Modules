/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 01:42:30 by nikita            #+#    #+#             */
/*   Updated: 2022/08/21 16:17:44 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

#include "Form.hpp"
class Form;

class Bureaucrat
{

	public:

	Bureaucrat(short grade = 150, std::string name = "Bureaucrat");
	Bureaucrat(const Bureaucrat &rhs);
	~Bureaucrat();

	Bureaucrat &operator=(const Bureaucrat &rhs);

	short		getGrade() const;
	std::string getName() const;

	void	upper_grade(int i = 1);
	void	lower_grade(int i = 1);

	void	signForm(Form &rhs) const;

	class GradeTooHighException : public std::exception
	{
		public:

		virtual const char *what() const throw();

	};

	class GradeTooLowException : public std::exception
	{
		public:

		virtual const char *what() const throw();
	};

	class AlreadySignedException : public std::exception
	{
		public:

		AlreadySignedException(const Bureaucrat &parent, const Form &parent_form);

		virtual const char *what() const throw();

		const Bureaucrat &parent;
		const Form &parent_form;
	};

	private:

	short				grade;
	const std::string	name;

};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif
