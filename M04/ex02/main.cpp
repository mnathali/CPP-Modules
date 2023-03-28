/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 22:22:52 by nikita            #+#    #+#             */
/*   Updated: 2022/08/13 21:43:19 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brains.hpp"

int main(int argc, char const *argv[])
{
	if (argc != 2 || std::atoi(std::string(argv[1]).c_str()) < 3)
		return (1);
	int m = std::atoi(std::string(argv[1]).c_str());
	Animal *animals[m];
	// Animal *anni = new Animal;delete anni;
	for (int i = 0; i < m; i++)
	{
		if (i % 2)
		{
			animals[i] = new Cat;
			for (int j = 0; j < 100; j++)
				((Cat *)animals[i])->get_brains()->set_idea("I am Kitty\n", j);
		}
		else
		{
			animals[i] = new Dog;
			for (int j = 0; j < 100; j++)
				((Dog *)animals[i])->get_brains()->set_idea("I am Puppy\n", j);
		}
	}
	for (int i = 0; i < m; i++)
		animals[i]->makeSound();
	((Cat *)animals[0])->get_brains()->set_idea("New idea", 6);
	*animals[2] = *animals[0];
	((Cat *)animals[0])->get_brains()->set_idea("Another idea", 6);
	for (int i = 0; i < m; i++)
		std::cout << i + 1 << " : " << ((Cat *)animals[i])->get_brains()->get_idea(6) << std::endl;
	for (int i = 0; i < m; i++)
		delete animals[i];
	/*const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
    meta->makeSound();

	delete meta; delete j; delete i;

	Brains a;
	
	a = Brains();*/

	return 0;
}
