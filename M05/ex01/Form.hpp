/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:37:04 by nikita            #+#    #+#             */
/*   Updated: 2022/08/21 15:44:53 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>

#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{

	public:

	Form(std::string name = "Form", short grade_sign = 1, short grade_ex = 1);
	Form(const Form &rhs);
	~Form();

	Form &operator=(const Form &rhs);

	std::string	getName() const;
	short		getGrade_sign() const;
	short		getGrade_ex() const;
	bool		is_signed() const;

	bool		beSigned(const Bureaucrat &rhs);

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

	private:

	const std::string	name;
	const short			grade_sign;
	const short			grade_ex;
	bool				sign;

};

std::ostream	&operator<<(std::ostream &o, Form const &rhs);

#endif
