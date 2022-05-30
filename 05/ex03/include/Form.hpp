/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:51:19 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/30 16:53:25 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <string>

class Bureaucrat;

class Form
{
private:
	const std::string _name;
	bool              _is_signed;
	const int         _min_grade_to_sign;
	const int         _min_grade_to_execute;

public:
	Form(const std::string &, int, int);
	Form(const Form &);
	Form& operator=(const Form &);
	virtual ~Form();

	const std::string& getName() const;
	int                getGradeToSign() const;
	int                getGradeToExecute() const;
	bool               isSigned() const;
	bool               beSigned(const Bureaucrat &);
	bool               isExecutable(const Bureaucrat &) const;
	virtual void       execute(const Bureaucrat &) const = 0;

public:
	class GradeTooHighException: public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	class GradeTooLowException: public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	class CannotExecuteException: public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

private:
	Form();
};

std::ostream & operator<<(std::ostream &o, Form const &f);

#endif /* FORM_HPP */
