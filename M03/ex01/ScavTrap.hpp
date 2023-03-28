/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:00:35 by nikita            #+#    #+#             */
/*   Updated: 2022/08/09 19:14:30 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

	public:
	
	ScavTrap(std::string name = "");
    ScavTrap(ScavTrap const &rhs);
    ~ScavTrap();

	ScavTrap	&operator=(ScavTrap const &rhs);

	void		attack(const std::string& target);

	void		guardGate();

	bool		get_mode() const;

	private:

	bool	mode;

};

#endif