/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:32:29 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/14 17:12:36 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>

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

		class GradeTooHighException: public std::exception {
			virtual const char *what() const throw();
		};

		class GradeTooLowException: public std::exception {
			virtual const char *what() const throw();
		};

		std::string const	&getName(void)const;
		int					getGrade(void)const;

		void	incrementGrade(void);
		void	decrementGrade(void);
};

std::ostream	& operator<<(std::ostream &, const Bureaucrat &);

#endif /* !defined BUREAUCRAT_HPP */