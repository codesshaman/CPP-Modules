/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:32:04 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/31 11:31:13 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

Bureaucrat::Bureaucrat(const std::string &name, int grade): _name(name), _grade(grade)
{
	if (this->_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (this->_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
//	std::cout << "Created bureaucrat " << this->_name << " with grade " << this->_grade << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src): _name(src._name), _grade(src._grade)
{
	if (this->_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (this->_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
//	std::cout << "Copied " << src._name << "'s grade to " << this->_name;
	return ;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &rhs)
{
	this->_grade = rhs._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

std::string const	&Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade(void)
{
	if (this->_grade <= 1)
		throw (Bureaucrat::GradeTooHighException());
	this->_grade--;
}

void	Bureaucrat::decrementGrade(void)
{
	if (this->_grade >= 150)
		throw (Bureaucrat::GradeTooLowException());
	this->_grade++;
	return ;	
}

const char	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("grade too high");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("grade too low");
}

std::ostream & operator<<(std::ostream &o, Bureaucrat const &b)
{
	o << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	return (o);
}
