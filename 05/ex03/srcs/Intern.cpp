/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:59:48 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/30 12:45:13 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern&)
{
}

Intern&
Intern::operator=(const Intern&)
{
	return *this;
}

Intern::~Intern()
{
}

static Form*
newShrubberyCreationForm(const std::string& target)
{
	return new ShrubberyCreationForm(target);
}

static Form*
newRobotomyRequestForm(const std::string& target)
{
	return new RobotomyRequestForm(target);
}

static Form*
newPresidentialPardonForm(const std::string& target)
{
	return new PresidentialPardonForm(target);
}

static Form*
generateNewForm(Form *(*f)(const std::string&), const std::string& target)
{
	return (*f)(target);
}

Form*
Intern::makeForm(const std::string& name, const std::string& target)
{
	int			index;
	Form		*form = 0;
	std::string	names[6] = {"shrubbery creation", "robotomy request", "presidential pardon",};
	Form		*(*forms[3])(const std::string &) = {&newShrubberyCreationForm,
													&newRobotomyRequestForm,
													&newPresidentialPardonForm
	};

	index = -1;
	for (int i = 0; i < 3; i++)
		if (name == names[i])
			index = i;
	if (index >= 0)
	{
		form = generateNewForm(forms[index], target);
		std::cout << "Intern creates " << form->getName() << std::endl;
	}
	else
		std::cerr << "'" << name << "': no such form" << std::endl;
	return (form);
}
