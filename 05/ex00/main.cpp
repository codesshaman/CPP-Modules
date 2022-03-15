/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:35:35 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/15 11:52:12 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int	main(void)
{
	{
		Bureaucrat bob("bob", 2);

		std::cout << bob << std::endl;
		std::cout << "Incrementing " << bob.getName() << "'s grade (currently " << bob.getGrade() << ")" << std::endl;
		bob.incrementGrade();
		std::cout << bob << std::endl;

		try {
			std::cout << "Incrementing " << bob.getName() << "'s grade (currently " << bob.getGrade() << ")" << std::endl;
			bob.incrementGrade();
		}
		catch (std::exception &e) {
			std::cerr << "Could not increment grade: " << e.what() << std::endl;
		}
	}
	std::cout << "----------" << std::endl;
	{
		Bureaucrat *jim = new Bureaucrat("jim", 149);

		std::cout << *jim << std::endl;
		std::cout << "Decrementing " << jim->getName() << "'s grade (currently " << jim->getGrade() << ")" << std::endl;
		jim->decrementGrade();
		std::cout << *jim << std::endl;

		try {
			std::cout << "Decrementing " << jim->getName() << "'s grade (currently " << jim->getGrade() << ")" << std::endl;
			jim->decrementGrade();
		}
		catch (std::exception &e) {
			std::cerr << "Could not decrement grade: " << e.what() << std::endl;
		}

		delete (jim);
	}
//	This should throw an error
/*	{
		Bureaucrat bob("bob", 175);
	}*/
	return (0);
}
