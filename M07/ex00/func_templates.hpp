/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_templates.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnathali <mnathali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 23:11:09 by mnathali          #+#    #+#             */
/*   Updated: 2022/08/26 00:34:10 by mnathali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNC_TEMPLATES_HPP
#define FUNC_TEMPLATES_HPP

template <class Type>
void	swap(Type &a, Type &b)
{
	Type temp = a;

	a = b;
	b = temp;
}

template <class Type>
const Type &min(const Type &a, const Type &b)
{
	return (a < b ? a : b);
}

template <class Type>
const Type &max(const Type &a, const Type &b)
{
	return (a > b ? a : b);
}

#endif
