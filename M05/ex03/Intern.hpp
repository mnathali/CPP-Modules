/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 13:31:44 by nikita            #+#    #+#             */
/*   Updated: 2022/08/21 17:02:07 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{

	public:

	Intern();
	Intern(const Intern &rhs);
	~Intern();

	Intern	&operator=(const Intern &rhs);

	Form	*makeForm(std::string name, std::string target);

	class CreateFormException : public std::exception
	{
		public:

		virtual const char *what() const throw();

	};

};

#endif