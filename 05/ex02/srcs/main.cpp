/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:35:35 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/16 20:20:10 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <cstdlib>

int	main()
{
	srand(time(NULL));
	{
		ShrubberyCreationForm	form("trees");
		Bureaucrat				bob("Bob", 138);

		std::cout << "> " << form << std::endl;
		std::cout << "> " << bob << std::endl;
		bob.signForm(form);
		bob.executeForm(form);
		std::cout << "> Incrementing " << bob.getName() << "'s grade" << std::endl;
		bob.incrementGrade();
		bob.executeForm(form);
	}
	std::cout << "----------------------------------" << std::endl;
	{
		RobotomyRequestForm	form("target2");
		Bureaucrat			jim("Jim", 30);

		jim.signForm(form);
		jim.executeForm(form);
	}
	std::cout << "----------------------------------" << std::endl;
	{
		PresidentialPardonForm	form("target3");
		Bureaucrat				tom("Tom", 2);

		tom.signForm(form);
		tom.executeForm(form);
	}
	return (0);
}
