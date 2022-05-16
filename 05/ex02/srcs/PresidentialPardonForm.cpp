/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:11:36 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/16 20:45:49 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: Form("PresidentialPardonForm", 25, 5),
	  _target("")
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
	: Form("PresidentialPardonForm", 25, 5),
	  _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &x)
	: Form("PresidentialPardonForm", 25, 5),
	  _target(x._target)
{
}

PresidentialPardonForm&
PresidentialPardonForm::operator=(const PresidentialPardonForm&)
{
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

const std::string&
PresidentialPardonForm::getTarget() const
{
	return _target;
}

void
PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (!this->isExecutable(executor))
		throw (Form::CannotExecuteException());
	std::cout << "Zaphod Beeblebrox forgave " << this->_target << "." << std::endl;
}
