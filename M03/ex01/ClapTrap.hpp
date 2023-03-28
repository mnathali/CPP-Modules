/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:47:27 by nikita            #+#    #+#             */
/*   Updated: 2022/08/10 11:40:28 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{

    public:

    ClapTrap(std::string name = "");
    ClapTrap(ClapTrap const &rhs);
    ~ClapTrap();

    ClapTrap	&operator=(ClapTrap const &rhs);

    void		attack(const std::string& target);
    void		takeDamage(unsigned int amount);
    void		beRepaired(unsigned int amount);

    unsigned int	get_hit() const;
    unsigned int	get_energy() const;
    unsigned int	get_attack() const;
    std::string		get_name() const;
	unsigned int	get_max() const;

	void			set_name(std::string name);
	void			set_hit(unsigned int n);
	void			set_energy(unsigned int n);
	void			set_attack(unsigned int n);

    protected:

    std::string		name;
    unsigned int	hit_points;
    unsigned int	energy_points;
    unsigned int	attack_damage;

	unsigned int	max_health;
    
};

std::ostream   &operator<<(std::ostream &o, ClapTrap const &i);

#endif
