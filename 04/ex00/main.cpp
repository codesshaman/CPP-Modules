/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:50:54 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/16 17:22:06 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int	main()
{
	{ // subject tests
		const Animal* meta = new Animal();
		const Animal *j = new Dog();
		const Animal *i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); // will output the cat sound!
		j->makeSound();
		meta->makeSound();

		delete (meta);
		delete (j);
		delete (i);
	}
	std::cout << "-------------" << std::endl;
	{ // WrongAnimal tests
		const WrongAnimal* animal = new WrongAnimal();
		const WrongAnimal* wcat = new WrongCat();
		const WrongCat* cat = new WrongCat();

		animal->makeSound();
		wcat->makeSound(); //will output the wronganimal sound!
		cat->makeSound(); //will output the wrongcat sound!

		delete (animal);
		delete (wcat);
		delete (cat);
	}
	std::cout << "-------------" << std::endl;
	{ // more tests
		Animal	animal;
		Cat		cat;
		Dog		dog;
		Animal	*cat2 = new Cat();
		Animal	*dog2 = new Dog();

		std::cout << "\'animal\' type is: " << animal.getType() << std::endl;
		animal.makeSound();
		std::cout << "\'cat\' type is: " << cat.getType() << std::endl;
		cat.makeSound();
		std::cout << "\'dog\' type is: " << dog.getType() << std::endl;
		dog.makeSound();

		std::cout << "\'cat2\' type is: " << cat2->getType() << std::endl;	// cat2 and dog2 are instances of Animal
		cat2->makeSound();													// but compiler still calls the expected
		std::cout << "\'dog2\' type is: " << dog2->getType() << std::endl;	// Cat and Dog functions
		dog2->makeSound();

		delete (cat2);
		delete (dog2);
	}
	return (0);
}
