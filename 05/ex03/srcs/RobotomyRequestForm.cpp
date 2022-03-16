/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:34:42 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/16 16:48:46 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
#include <iostream>
#include <cstdlib>
#include <string>

RobotomyRequestForm::RobotomyRequestForm(void):
	Form("RobotomyRequestForm", 72, 45), _target("")
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target):
	Form("RobotomyRequestForm", 72, 45), _target(target)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src):
	Form("RobotomyRequestForm", 72, 45), _target(src._target)
{
	return ;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	(void)rhs;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ;
}

const std::string	&RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (!this->isExecutable(executor))
		throw (Form::CannotExecuteException());
	std::cout << "* frightful drill noises *" << std::endl;
	if (std::rand() % 2)
		std::cout << "Operation is a success. " << this->_target << " has been robotomized." << std::endl;
	else
		std::cout << "Operation is a failure." << std::endl;
	return ;
}
