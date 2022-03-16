/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:34:34 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/16 16:51:09 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

# include "Form.hpp"
# include <string>

class Form;

class RobotomyRequestForm : public Form
{
	private:
		std::string	_target;
		RobotomyRequestForm(void);
	public:
		RobotomyRequestForm(const std::string &);
		RobotomyRequestForm(const RobotomyRequestForm &);
		RobotomyRequestForm	& operator=(const RobotomyRequestForm &);
		~RobotomyRequestForm(void);

		const std::string	&getTarget(void) const;
		void				execute(const Bureaucrat &) const;
};

#endif /* !defined ROBOTOMY_REQUEST_FORM_HPP */
