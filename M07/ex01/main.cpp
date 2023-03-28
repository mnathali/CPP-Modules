/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnathali <mnathali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 00:02:51 by mnathali          #+#    #+#             */
/*   Updated: 2022/08/26 14:58:12 by mnathali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter_template.hpp"
#include "test_template.hpp"
#include <cmath>

void	for_int(int &i)
{
	int j = 0;

	while (j < 46340)
	{
		if (j * j == i)
		{
			i = j;
			return ;
		}
		j++;
	}
	i = 0;
}

void	for_float(float &f)
{
	if (f > 0)
		f = std::sqrt(f);
}

void	for_string(std::string &s)
{
	s += "_-_--_^";
}

int main(int argc, char const *argv[])
{
	(void)argc; (void)argv;
	int arr_i[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	float arr_f[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	std::string arr_s[5] = {"Hello", "world", "and", "everybody", "hello"};

	std::cout << std::fixed;
	for (int i = 0; i < 10; i++)
		std::cout << arr_i[i] << std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << arr_f[i] << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << arr_s[i] << std::endl;

	iter(arr_i, 10, for_int);
	iter(arr_f, 10, for_float);
	iter(arr_s, 5, for_string);
	for (int i = 0; i < 10; i++)
		std::cout << arr_i[i] << std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << arr_f[i] << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << arr_s[i] << std::endl;

	std::cout << "--------------------------------------------------------------\n";
	iter(arr_i, 10, addition<int>);
	iter(arr_f, 10, addition<float>);
	iter(arr_s, 5, addition<std::string>);

	for (int i = 0; i < 10; i++)
		std::cout << arr_i[i] << std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << arr_f[i] << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << arr_s[i] << std::endl;


	return 0;
}
