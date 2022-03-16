/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:35:35 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/16 17:51:46 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

static void	test_intern(const std::string &type, const std::string &target)
{
	Intern		bob;
	Form		*form;
	Bureaucrat	jim("Jim", 1);

	form = bob.makeForm(type, target);
	if (form)
	{
		std::cout << *form << std::endl;
		jim.signForm(*form);
	}
	delete (form);
}

int	main(void)
{
	test_intern("shrubbery creation", "trees");
	std::cout << "--------------" << std::endl;
	test_intern("robotomy request", "Bender");
	std::cout << "--------------" << std::endl;
	test_intern("presidential pardon", "target");
	std::cout << "--------------" << std::endl;
	test_intern("unknown form", "target");
	return (0);
}
