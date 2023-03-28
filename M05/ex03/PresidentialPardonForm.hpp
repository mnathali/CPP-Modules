/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 00:12:58 by nikita            #+#    #+#             */
/*   Updated: 2022/08/21 02:55:06 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{

	public:

	PresidentialPardonForm(std::string target = "target");
	PresidentialPardonForm(const PresidentialPardonForm &rhs);
	~PresidentialPardonForm();

	PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);

	void execute(Bureaucrat const & executor) const;

	std::string getTarget() const;

	private:

	std::string target;

};

#endif