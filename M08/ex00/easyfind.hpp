/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnathali <mnathali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 19:14:26 by mnathali          #+#    #+#             */
/*   Updated: 2022/09/01 11:31:34 by mnathali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <template <class, class> class Container>
typename Container<int, std::allocator<int> >::const_iterator	easyfind(Container<int, std::allocator<int> > const &c, int i)
{
	typename Container<int, std::allocator<int> >::const_iterator n = std::find(c.begin(), c.end(), i);
	if (n != c.end())
		return (n);
	throw std::exception();
}

#endif