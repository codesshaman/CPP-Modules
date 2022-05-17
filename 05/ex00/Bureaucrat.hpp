/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:32:29 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/16 21:04:40 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;

public:
	Bureaucrat(const std::string&, int);
	Bureaucrat(const Bureaucrat&);
	Bureaucrat& operator=(const Bureaucrat&);
	~Bureaucrat();

	const std::string &getName() const;
	int                getGrade() const;
	void               incrementGrade();
	void               decrementGrade();

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

private:
	Bureaucrat();
};

std::ostream& operator<<(std::ostream &, const Bureaucrat &);

#endif /* BUREAUCRAT_HPP */
