/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:32:04 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/16 20:42:51 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

Bureaucrat::Bureaucrat(const std::string &name, int grade)
	: _name(name),
	  _grade(grade)
{
	if (this->_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (this->_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
//	std::cout << "Created bureaucrat " << this->_name << " with grade " << this->_grade << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &x)
	: _name(x._name),
	  _grade(x._grade)
{
	if (this->_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (this->_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
//	std::cout << "Copied " << x._name << "'s grade to " << this->_name;
}

Bureaucrat&
Bureaucrat::operator=(const Bureaucrat &x)
{
	this->_grade = x._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

const std::string&
Bureaucrat::getName() const
{
	return this->_name;
}

int
Bureaucrat::getGrade() const
{
	return this->_grade;
}

void
Bureaucrat::incrementGrade()
{
	if (this->_grade <= 1)
		throw (Bureaucrat::GradeTooHighException());
	this->_grade--;
}

void
Bureaucrat::decrementGrade()
{
	if (this->_grade >= 150)
		throw (Bureaucrat::GradeTooLowException());
	this->_grade++;
}

const char*
Bureaucrat::GradeTooHighException::what() const throw()
{
	return "grade too high";
}

const char*
Bureaucrat::GradeTooLowException::what() const throw()
{
	return "grade too low";
}

std::ostream&
operator<<(std::ostream &o, Bureaucrat const &b)
{
	o << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	return (o);
}
