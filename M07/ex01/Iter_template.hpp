/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter_template.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnathali <mnathali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 23:41:03 by mnathali          #+#    #+#             */
/*   Updated: 2022/08/26 00:17:17 by mnathali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_TEMPLATE_HPP
#define ITER_TEMPLATE_HPP

#include <iostream>

template <class Type, typename f>
void iter(Type array, size_t n, f func)
{
	for (size_t i = 0; i < n; i++)
		func(array[i]);
}

#endif