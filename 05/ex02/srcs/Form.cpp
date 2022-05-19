/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 11:46:57 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/19 14:34:24 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <string>

Form::Form()
	: _name(""),
	  _is_signed(false),
	  _min_grade_to_sign(0),
	  _min_grade_to_execute(0)
{
}

Form::Form(const std::string& name, int min_sign, int min_exec)
	: _name(name),
	  _is_signed(false),
	  _min_grade_to_sign(min_sign),
	  _min_grade_to_execute(min_exec)
{
	if (this->_min_grade_to_sign < 1 || this->_min_grade_to_execute < 1)
		throw (Form::GradeTooHighException());
	if (this->_min_grade_to_sign > 150 || this->_min_grade_to_execute > 150)
		throw (Form::GradeTooLowException());
}

Form::Form(const Form &x)
	: _name(x._name),
	  _is_signed(x._is_signed),
	  _min_grade_to_sign(x._min_grade_to_sign),
	  _min_grade_to_execute(x._min_grade_to_execute)
{
}

Form	&Form::operator=(const Form &x)
{
	this->_is_signed = x._is_signed;
	this->_min_grade_to_sign = x._min_grade_to_sign;
	this->_min_grade_to_execute = x._min_grade_to_execute;
	return (*this);
}

Form::~Form()
{
	return ;
}

const std::string&
Form::getName() const
{
	return _name;
}

int
Form::getGradeToSign() const
{
	return _min_grade_to_sign;
}

int
Form::getGradeToExecute() const
{
	return _min_grade_to_execute;
}

bool
Form::isSigned() const
{
	return _is_signed;
}

void
Form::incrementGradeToSign()
{
	if (_min_grade_to_sign <= 1)
		throw (Form::GradeTooHighException());
	_min_grade_to_sign--;
}

void
Form::incrementGradeToExecute()
{
	if (_min_grade_to_execute <= 1)
		throw (Form::GradeTooHighException());
	_min_grade_to_execute--;
}

void
Form::decrementGradeToSign()
{
	if (_min_grade_to_sign >= 150)
		throw (Form::GradeTooLowException());
	_min_grade_to_sign++;
}

void
Form::decrementGradeToExecute()
{
	if (_min_grade_to_execute >= 150)
		throw (Form::GradeTooLowException());
	_min_grade_to_execute++;
}

bool
Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > _min_grade_to_sign)
		throw (Form::GradeTooLowException());
	_is_signed = true;
	return (true);
}

const char*
Form::GradeTooHighException::what() const throw()
{
	return ("form: grade too high");
}

const char*
Form::GradeTooLowException::what() const throw()
{
	return ("form: grade too low");
}

std::ostream&
operator<<(std::ostream& o, const Form& f)
{
	o << "Form " << f.getName() << ", grade to sign " << f.getGradeToSign()
		<< ", grade to execute " << f.getGradeToExecute() << ", ";
	if (f.isSigned())
		o << "signed.";
	else
		o << "not signed.";
	return (o);
}

bool
Form::isExecutable(const Bureaucrat &executor) const
{
	return (_is_signed && executor.getGrade() <= _min_grade_to_execute);
}

const char*
Form::CannotExecuteException::what() const throw()
{
	return ("file has to be signed; executor has to be graded high enough");
}
