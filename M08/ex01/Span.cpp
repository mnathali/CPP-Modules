/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnathali <mnathali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 22:40:26 by mnathali          #+#    #+#             */
/*   Updated: 2022/08/31 13:44:08 by mnathali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <exception>
#include <algorithm>

Span::Span(unsigned int N) : N(N), nums(0)
{
	std::cout << "Constructor called\n";
}

Span::Span(Span const &rhs) : N(rhs.N), nums(rhs.nums)
{
	std::cout << "Copy constructor called\n";
}

Span::~Span() {std::cout << "Destructor called\n";}

Span &Span::operator=(Span const &rhs)
{
	std::cout << "Operator = called\n";
	if (rhs.getNums().size() > N)
		throw std::exception();
	nums = rhs.getNums();
	return (*this);
}

void	Span::addNumber(int i, unsigned int n)
{
	if (n + nums.size() > N)
		throw std::exception();
	nums.insert(nums.end(), n, i);
}
	
unsigned int Span::shortestSpan() const
{
	if (nums.size() <= 1)
		throw std::exception();
	std::vector<int> tmp = nums;
	std::sort(tmp.begin(), tmp.end());
	int diff = tmp[1] - tmp[0];
	for (std::vector<int>::iterator it = tmp.begin(); it + 1 != tmp.end(); it++)
		if (*(it + 1) - *it < diff)
			diff = *(it + 1) - *it;
	return (diff);
}

unsigned int Span::longestSpan() const
{
	if (nums.size() <= 1)
		throw std::exception();
	return (*std::max_element(nums.begin(), nums.end()) - *std::min_element(nums.begin(), nums.end()));
}

unsigned int	Span::getN() const {return N;}

const std::vector<int> &Span::getNums() const
{
	return (nums);
}

const int	&Span::operator[](size_t i) const
{
	if (i + 1 > nums.size())
		throw std::exception();
	return (nums[i]);
}

int	&Span::operator[](size_t i)
{
	if (i + 1 > nums.size())
		throw std::exception();
	return (nums[i]);
}

