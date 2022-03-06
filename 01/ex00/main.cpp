/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 10:52:17 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/06 13:05:34 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

/* We can use the newly created zombie everywhere */
void example(Zombie *zombor)
{
	zombor->announce();
}

/* This creates a copy (on the stack) of the passed in
 * Zombie instance, automatically deleted */
void example2(Zombie zombor)
{
	std::cout << "[DEBUG] Copy of Zombor:" << std::endl;
	zombor.announce();
}

int main(void)
{
	// Creating a zombie on the heap
	std::cout << "[DEBUG] -- Example 1: on the heap --" << std::endl;

	Zombie *zombor = newZombie("Zombor");
	example(zombor);
	std::cout << std::endl;

	example2(*zombor);
	std::cout << std::endl;

	// Manually delete what we're done using on the heap
	delete zombor;
	std::cout << std::endl;

	// Creating a zombie on the stack, automatically deleted when done
	std::cout << "[DEBUG] -- Example 2: on the stack --" << std::endl;
	randomChump("Zombax");

	return (0);
}
