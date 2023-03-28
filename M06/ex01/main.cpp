/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnathali <mnathali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 13:24:37 by mnathali          #+#    #+#             */
/*   Updated: 2022/08/24 13:32:58 by mnathali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "defenitions.hpp"

int main(int argc, char const *argv[])
{
	(void)argc; (void)argv;
	Data A;
	Data B(52, 26);

	std::cout << "A adress : " << &A << "; A << operator : " << A << std::endl;
	std::cout << "B adress : " << &B << "; B << operator : " << B << std::endl;
	uintptr_t p1 = serialize(&A);
	uintptr_t p2 = serialize(&B);
	std::cout << "p1 : " << p1 << "; Inside p1 : " << *p1 << std::endl;
	std::cout << "p2 : " << p2 << "; Inside p2 : " << *p2 << std::endl;
	Data *C = deserialize(p1);
	Data *D = deserialize(p2);
	std::cout << "C : " << C << "; Inside C : " << *C << std::endl;
	std::cout << "D : " << D << "; Inside D : " << *D << std::endl;
	return 0;
}
