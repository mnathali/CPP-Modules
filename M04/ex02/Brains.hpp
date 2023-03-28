/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brains.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 13:02:07 by nikita            #+#    #+#             */
/*   Updated: 2022/08/13 01:03:49 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAINS_HPP
#define BRAINS_HPP

#include <iostream>

class	Brains
{

	public:

	Brains();
	~Brains();
	Brains(Brains const &rhs);

	Brains &operator=(Brains const &rhs);

	void		set_idea(std::string idea, int i);
	std::string	get_idea(int i) const;

	private:

	std::string	ideas[100];

};

#endif