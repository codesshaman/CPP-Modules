/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:34:42 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/16 20:47:27 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
#include <iostream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm()
	: Form("RobotomyRequestForm", 72, 45),
	  _target("")
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
	: Form("RobotomyRequestForm", 72, 45),
	  _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &x)
	: Form("RobotomyRequestForm", 72, 45),
	  _target(x._target)
{
}

RobotomyRequestForm&
RobotomyRequestForm::operator=(const RobotomyRequestForm&)
{
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

const std::string&
RobotomyRequestForm::getTarget() const
{
	return _target;
}

void
RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	if (!isExecutable(executor))
		throw (Form::CannotExecuteException());
	std::cout << "* frightful drill noises *" << std::endl;
	if (std::rand() % 2)
		std::cout << "Operation is a success. " << _target << " has been robotomized." << std::endl;
	else
		std::cout << "Operation is a failure." << std::endl;
	return ;
}
