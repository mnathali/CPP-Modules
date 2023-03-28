/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnathali <mnathali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 22:40:28 by mnathali          #+#    #+#             */
/*   Updated: 2022/08/31 13:41:55 by mnathali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
	public:

	Span(unsigned int N = 0);
	Span(Span const &rhs);
	~Span();

	Span &operator=(Span const &rhs);

	void	addNumber(int i, unsigned int n = 1);
	
	unsigned int shortestSpan() const;
	unsigned int longestSpan() const;

	const int	&operator[](size_t i) const;
	int	&operator[](size_t i);

	unsigned int	getN() const;
	const std::vector<int> &getNums() const;


	private:

	const unsigned int	N;
	std::vector<int>	nums;

};

#endif