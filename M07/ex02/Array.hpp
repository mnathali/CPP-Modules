/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnathali <mnathali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 00:36:15 by mnathali          #+#    #+#             */
/*   Updated: 2022/08/26 12:40:41 by mnathali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T>
class Array
{
	public:

	Array() : sz(0), data(0) {std::cout << "Default constructor" << std::endl;};
	Array(unsigned int n) :sz(n), data(new T[n]) {std::cout << "Constructor with number" << std::endl;}
	~Array() {delete [] data; std::cout << "Destructor" << std::endl;}

	Array(const Array &rhs) : sz(rhs.size())
	{
		data = new T[sz];
		for (unsigned int i = 0; i < sz; i++)
			data[i] = rhs[i];
	}

	Array &operator=(const Array &rhs)
	{
		if (&rhs != this)
		{
			delete [] data;
			sz = rhs.size();
			data = new T[sz];
			for (unsigned int i = 0; i < sz; i++)
				data[i] = rhs[i];
		}
		return (*this);
	}
	
	T	operator[](unsigned int i) const
	{
		if (!(i < sz))
			throw std::exception();
		return (data[i]);
	}

	T	&operator[](unsigned int i)
	{
		if (!(i < sz))
			throw std::exception();
		return (data[i]);
	}

	unsigned int	size() const {return (sz);}

	private:

	unsigned int	sz;
	T				*data;

};

template <class Type>
std::ostream	&operator<<(std::ostream &o, Array<Type> &rhs)
{
	unsigned int sz = rhs.size();

	for (unsigned int i = 0; i < sz; i++)
		o << rhs[i] << " ";
	return (o);
}

#endif