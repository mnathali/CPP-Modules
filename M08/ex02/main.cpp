/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnathali <mnathali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 23:28:40 by mnathali          #+#    #+#             */
/*   Updated: 2022/09/01 11:57:09 by mnathali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <vector>

int main(int argc, char const *argv[])
{
	(void)argc; (void)argv;

	MutantStack<int> A;

	A.push(42);
	A.push(21);

	std::cout << "----------begin test-----------\n";

	MutantStack<int>::iterator it = A.begin();
	MutantStack<int>::const_iterator c_it = A.begin();
	MutantStack<int>::reverse_iterator rit = A.rbegin();
	MutantStack<int>::const_reverse_iterator c_rit = A.rbegin();


	std::cout << &it[0] << " " << &c_it[0] << std::endl;
	std::cout << &it[1] << " " << &c_it[1] << std::endl;

	std::cout << *it << " " << *c_it << std::endl;
	std::cout << *rit << " " << *c_rit << std::endl;

	std::cout << *(it+1) << " " << *(c_it+1) << std::endl;
	std::cout << *(rit+1) << " " << *(c_rit+1) << std::endl;

	std::cout << "----------end test-----------\n";

	it = A.end();
	c_it = A.end();
	rit = A.rend();
	c_rit = A.rend();

	std::cout << &it[0] << " " << &c_it[0] << std::endl;

	std::cout << *(it-1) << " " << *(c_it-1) << std::endl;

	std::cout << *(rit-1) << " " << *(c_rit-1) << std::endl;

	std::cout << "----------subject test-----------\n";

	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737); //[...] mstack.push(0);
	MutantStack<int>::iterator it1 = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it1;
	--it1;
	while (it1 != ite) {
    	std::cout << *it1 << std::endl;
		++it1; }
	std::stack<int> s(mstack);
	std::cout << "----------test algorithm func-----------\n";
	it1 = mstack.begin();
	ite = mstack.end();

	std::fill(it1, ite, 2147483647);
	while (it1 != ite) {
    	std::cout << *it1 << std::endl;
		++it1; }

	return 0;

	return 0;
}
