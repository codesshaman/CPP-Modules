/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:32:04 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/30 16:59:56 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <string>

Bureaucrat::Bureaucrat()
	: _name(""),
	  _grade(1)
{
}

Bureaucrat::Bureaucrat(const std::string &name, int grade)
	: _name(name),
	  _grade(grade)
{
	if (this->_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (this->_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

Bureaucrat::Bureaucrat(const Bureaucrat &x)
	: _name(x._name),
	  _grade(x._grade)
{
	if (_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

Bureaucrat&
Bureaucrat::operator=(const Bureaucrat &x)
{
	this->_grade = x._grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
}

const std::string&
Bureaucrat::getName() const
{
	return _name;
}

int
Bureaucrat::getGrade() const
{
	return _grade;
}

void
Bureaucrat::incrementGrade()
{
	if (_grade <= 1)
		throw (Bureaucrat::GradeTooHighException());
	_grade--;
}

void
Bureaucrat::decrementGrade()
{
	if (_grade >= 150)
		throw (Bureaucrat::GradeTooLowException());
	_grade++;
}

void
Bureaucrat::signForm(Form &f) const
{
	try {
		f.beSigned(*this);
		std::cout << this->getName() << " signed form '" << f.getName() << "'." << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << this->getName() << " could not sign form '" << f.getName() << "': " << e.what() << std::endl;
	}
}

const char*
Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("bureaucrat: grade too high");
}

const char*
Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("bureaucrat: grade too low");
}

std::ostream&
operator<<(std::ostream &o, Bureaucrat const &b)
{
	o << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	return (o);
}
