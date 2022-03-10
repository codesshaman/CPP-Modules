/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:50:54 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/10 19:41:11 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int	main(void)
{
	{
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
	{
		const WrongAnimal *w = new WrongAnimal();
		const WrongCat *c = new WrongCat();

		std::cout << c->getType() << std::endl;
		c->makeSound();
		w->makeSound();

		delete (w);
		delete (c);
	}
	std::cout << "-------------" << std::endl;
	{
		Animal	animal;
		Cat		cat;
		Dog		dog;

		animal.getType();
		animal.makeSound();
		cat.getType();
		cat.makeSound();
		dog.getType();
		dog.makeSound();
	}
	return (0);
}
