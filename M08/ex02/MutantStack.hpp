/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnathali <mnathali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 14:38:24 by mnathali          #+#    #+#             */
/*   Updated: 2022/08/31 23:59:28 by mnathali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{

	public:

	typedef typename Container::iterator iterator;
	typedef typename Container::const_iterator const_iterator;
	typedef typename Container::reverse_iterator  reverse_iterator;
	typedef typename Container::const_reverse_iterator const_reverse_iterator;

	iterator	begin()
	{
		return	this->c.begin();
	}
	
	const_iterator	begin() const
	{
		return	this->c.begin();
	}

	reverse_iterator	rbegin()
	{
		return	this->c.rbegin();
	}

	const_reverse_iterator	rbegin() const
	{
		return	this->c.rbegin();
	}

	iterator	end()
	{
		return	this->c.end();
	}
	
	const_iterator	end() const
	{
		return	this->c.end();
	}

	reverse_iterator	rend()
	{
		return	this->c.rend();
	}

	const_reverse_iterator	rend() const
	{
		return	this->c.rend();
	}


};

#endif