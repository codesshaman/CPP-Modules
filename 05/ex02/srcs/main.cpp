/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:35:35 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/16 14:34:20 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <cstdlib>

int	main(void)
{
	srand(time(NULL));
/*	{
		ShrubberyCreationForm	form("trees");
		Bureaucrat				bob("bob", 138);

		std::cout << "> " << form << std::endl;
		std::cout << "> " << bob << std::endl;
		bob.signForm(form);
		bob.executeForm(form);
		std::cout << "> Incrementing " << bob.getName() << "'s grade" << std::endl;
		bob.incrementGrade();
		bob.executeForm(form);
	}*/
	{
		RobotomyRequestForm	form("target2");
		Bureaucrat			jim("jim", 30);

		jim.signForm(form);
		jim.executeForm(form);
	}
	return (0);
}
