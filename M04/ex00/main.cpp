/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 22:22:52 by nikita            #+#    #+#             */
/*   Updated: 2022/08/11 00:47:15 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(int argc, char const *argv[])
{
	(void)argc;(void)argv;
	
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
    meta->makeSound();

	delete meta; delete j; delete i;

	const WrongAnimal* wronganimal = new WrongAnimal();
	const WrongAnimal* wrongcat = new WrongCat();

	std::cout << wronganimal->getType() << " " << std::endl;
	std::cout << wrongcat->getType() << " " << std::endl;
	wronganimal->makeSound(); //will output the cat sound!
	wrongcat->makeSound();

	delete wronganimal; delete wrongcat;
	/*Animal	a;
	Cat		b;
	Dog		c;
	Cat		d("Puffy");
	Dog		e("Shelly");
	
	b = d;
	c = e;

	std::cout << a << " " << b << " " << c << " " << d << " " << e << std::endl;*/
	return 0;
}
