/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_template.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnathali <mnathali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 00:24:31 by mnathali          #+#    #+#             */
/*   Updated: 2022/08/26 00:32:11 by mnathali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_TEMPLATE
#define TEST_TEMPLATE

template <class Type>
void addition(Type &T)
{
	T += T;
}

#endif