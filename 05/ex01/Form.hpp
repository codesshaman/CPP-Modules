/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:51:19 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/16 20:32:07 by ugdaniel         ###   ########.fr       */
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
	int               _min_grade_to_sign;
	int               _min_grade_to_execute;

public:
	Form(const std::string&, int, int);
	Form(const Form&);
	Form& operator=(const Form&);
	~Form();

	const std::string& getName() const;
	int                getGradeToSign() const;
	int                getGradeToExecute() const;
	bool               isSigned() const;
	void               incrementGradeToSign();
	void               decrementGradeToSign();
	void               incrementGradeToExecute();
	void               decrementGradeToExecute();
	bool               beSigned(const Bureaucrat&);

public:
	class GradeTooHighException: public std::exception {
	public:
		virtual const char *what() const throw();
	};

	class GradeTooLowException: public std::exception {
	public:
		virtual const char *what() const throw();
	};

private:
	Form();
};

std::ostream & operator<<(std::ostream &o, Form const &f);

#endif /* FORM_HPP */
