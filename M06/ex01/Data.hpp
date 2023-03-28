/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnathali <mnathali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:59:49 by mnathali          #+#    #+#             */
/*   Updated: 2022/08/24 13:35:50 by mnathali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef unsigned int* uintptr_t;

struct Data
{

	public:

	Data(unsigned int i = 42, unsigned int j = 21);
	Data(const Data &rhs);
	~Data();

	Data &operator=(const Data &rhs);

	unsigned int get_i() const;
	unsigned int get_j() const;
	uintptr_t	get_pointer_i();
	uintptr_t	get_pointer_j();

	private:

	unsigned int	i;
	unsigned int	j;

};

std::ostream &operator<<(std::ostream &o, const Data &rhs);
