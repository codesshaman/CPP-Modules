/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:51:19 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/15 13:04:01 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <string>

class Bureaucrat;

class Form
{
	private:
		Form(void);
		const std::string	_name;
		bool				_is_signed;
		int					_min_grade_to_sign;
		int					_min_grade_to_execute;
	public:
		Form(const std::string &, bool, int, int);
		Form(const Form &);
		Form	& operator=(const Form &);
		~Form(void);

		std::string const	&getName(void) const;
		int					getGradeToSign(void) const;
		int					getGradeToExecute(void) const;
		bool				isSigned(void) const;

		void				incrementGradeToSign(void);
		void				decrementGradeToSign(void);
		void				incrementGradeToExecute(void);
		void				decrementGradeToExecute(void);

		void				beSigned(const Bureaucrat &);

		class GradeTooHighException: public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException: public std::exception {
			public:
				virtual const char *what() const throw();
		};
};

std::ostream & operator<<(std::ostream &o, Form const &f);

#endif /* !defined FORM_HPP */
