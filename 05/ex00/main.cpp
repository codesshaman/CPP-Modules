/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:35:35 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/14 17:20:01 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int	main(void)
{
	Bureaucrat bob("bob", 2);
	Bureaucrat *jim = new Bureaucrat("jim", 140);

	std::cout << bob << std::endl;
	std::cout << *jim << std::endl;
	bob.incrementGrade();
	std::cout << bob << std::endl;
	bob.decrementGrade();
	std::cout << bob << std::endl;
	
// These tests should throw an exception
/*	bob.incrementGrade();
	std::cout << bob << std::endl; */
/*	while (1)
	{
		std::cout << jim << std::endl;
		jim.decrementGrade();
	}*/

	delete (jim);
	return (0);
}
