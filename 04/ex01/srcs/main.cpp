/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:50:54 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/11 17:07:45 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

#define NB_ANIMALS	4

int	main(void)
{
	{ // subject tests
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		delete j;//should not create a leak
		delete i;
	}
	{
		int		i;
		Animal	*animals[NB_ANIMALS];

		std::cout << ">>> CREATING CATS <<<" << std::endl;
		for (i = 0; i < NB_ANIMALS / 2; i++)
		{
			std::cout << "Animal n°" << i << ":" << std::endl;
			animals[i] = new Cat();
			std::cout << "--------------" << std::endl;
		}
		std::cout << ">>> CREATING DOGS <<<" << std::endl;
		for (; i < NB_ANIMALS; i++)
		{
			std::cout << "Animal n°" << i << ":" << std::endl;
			animals[i] = new Dog();
			std::cout << "--------------" << std::endl;
		}
		for (i = 0; i < NB_ANIMALS; i++)
		{
			std::cout << "\'animal " << i << "\' type is: " << animals[i]->getType() << std::endl;
			animals[i]->makeSound();
		}

		std::cout << ">>> DESTROYING ANIMALS <<<" << std::endl;
		for (i = 0; i < NB_ANIMALS; i++)
		{
			std::cout << "Animal n°" << i << ":" << std::endl;
			delete (animals[i]);
			std::cout << "--------------" << std::endl;
		}
	}
	//return (0);
	{
		Cat		cat("sleep");
		Cat		copycat;

		cat.printIdeas();
		copycat.printIdeas();
		copycat = cat;
		copycat.printIdeas();
	}
	return (0);
}
