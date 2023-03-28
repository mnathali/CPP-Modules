/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 01:14:51 by nikita            #+#    #+#             */
/*   Updated: 2022/08/09 01:16:55 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

	public:
	
	FragTrap(std::string name = "");
    FragTrap(FragTrap const &rhs);
    ~FragTrap();

	FragTrap	&operator=(FragTrap const &rhs);

	void	highFivesGuys(void);

};

#endif