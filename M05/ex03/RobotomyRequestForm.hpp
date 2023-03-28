/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 00:15:43 by nikita            #+#    #+#             */
/*   Updated: 2022/08/21 02:55:12 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{

	public:

	RobotomyRequestForm(std::string target = "target");
	RobotomyRequestForm(const RobotomyRequestForm &rhs);
	~RobotomyRequestForm();

	RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);

	void execute(Bureaucrat const & executor) const;

	std::string getTarget() const;

	private:

	std::string target;

};

#endif