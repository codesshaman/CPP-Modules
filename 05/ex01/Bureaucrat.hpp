/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:32:29 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/15 13:03:49 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include "Form.hpp"
#include <string>
#include <iostream>

class Form;

class Bureaucrat
{
	private:
		Bureaucrat(void);
		const std::string	_name;
		int					_grade;
	public:
		Bureaucrat(const std::string &, int);
		Bureaucrat(const Bureaucrat &);
		Bureaucrat	& operator=(const Bureaucrat &);
		~Bureaucrat(void);

		std::string const	&getName(void)const;
		int					getGrade(void)const;

		void				incrementGrade(void);
		void				decrementGrade(void);

		void				signForm(Form &) const;

		class GradeTooHighException: public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException: public std::exception {
			public:
				virtual const char *what() const throw();
		};
};

std::ostream	& operator<<(std::ostream &, const Bureaucrat &);

#endif /* !defined BUREAUCRAT_HPP */