/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 11:46:57 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/16 17:44:08 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>

Form::Form(void):_name(""), _is_signed(false), _min_grade_to_sign(0), _min_grade_to_execute(0)
{
	return ;
}

Form::Form(const std::string &name, int min_sign, int min_exec): _name(name),
	_is_signed(false), _min_grade_to_sign(min_sign), _min_grade_to_execute(min_exec)
{
	if (this->_min_grade_to_sign < 1 || this->_min_grade_to_execute < 1)
		throw (Form::GradeTooHighException());
	if (this->_min_grade_to_sign > 150 || this->_min_grade_to_execute > 150)
		throw (Form::GradeTooLowException());
	return ;
}

Form::Form(const Form &src): _name(src._name), _is_signed(src._is_signed),
	_min_grade_to_sign(src._min_grade_to_sign), _min_grade_to_execute(src._min_grade_to_execute)
{
	return ;
}

Form	&Form::operator=(const Form &rhs)
{
	this->_is_signed = rhs._is_signed;
	this->_min_grade_to_sign = rhs._min_grade_to_sign;
	this->_min_grade_to_execute = rhs._min_grade_to_execute;
	return (*this);
}

Form::~Form(void)
{
	return ;
}

std::string const	&Form::getName(void) const
{
	return (this->_name);
}

int	Form::getGradeToSign(void) const
{
	return (this->_min_grade_to_sign);
}

int	Form::getGradeToExecute(void) const
{
	return (this->_min_grade_to_execute);
}

bool	Form::isSigned(void) const
{
	return (this->_is_signed);
}

void	Form::incrementGradeToSign(void)
{
	if (this->_min_grade_to_sign <= 1)
		throw (Form::GradeTooHighException());
	this->_min_grade_to_sign--;
}

void	Form::incrementGradeToExecute(void)
{
	if (this->_min_grade_to_execute <= 1)
		throw (Form::GradeTooHighException());
	this->_min_grade_to_execute--;
}

void	Form::decrementGradeToSign(void)
{
	if (this->_min_grade_to_sign >= 150)
		throw (Form::GradeTooLowException());
	this->_min_grade_to_sign++;
	return ;	
}

void	Form::decrementGradeToExecute(void)
{
	if (this->_min_grade_to_execute >= 150)
		throw (Form::GradeTooLowException());
	this->_min_grade_to_execute++;
	return ;	
}

bool	Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > this->_min_grade_to_sign)
	{
		throw (Form::GradeTooLowException());
		return (false);
	}
	this->_is_signed = true;
	return (true);
}

const char	*Form::GradeTooHighException::what(void) const throw()
{
	return ("grade too high");
}

const char *Form::GradeTooLowException::what(void) const throw()
{
	return ("grade too low");
}

std::ostream & operator<<(std::ostream &o, Form const &f)
{
	o << "Form " << f.getName() << ", grade to sign " << f.getGradeToSign()
		<< ", grade to execute " << f.getGradeToExecute() << ", ";
	if (f.isSigned())
		o << "signed.";
	else
		o << "not signed.";
	return (o);
}

bool	Form::isExecutable(const Bureaucrat &executor) const
{
	return (this->_is_signed && executor.getGrade() <= this->_min_grade_to_execute);
}

const char *Form::CannotExecuteException::what(void) const throw()
{
	return ("file has to be signed; executor has to be graded high enough");
}
