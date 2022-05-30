/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:34:34 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/30 17:01:01 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

# include "Form.hpp"
# include <string>

class RobotomyRequestForm : public Form
{
private:
	std::string	_target;

public:
	RobotomyRequestForm(const std::string &);
	RobotomyRequestForm(const RobotomyRequestForm &);
	RobotomyRequestForm& operator=(const RobotomyRequestForm &);
	~RobotomyRequestForm();

	const std::string& getTarget() const;
	void               execute(const Bureaucrat &) const;

private:
	RobotomyRequestForm();
};

#endif /* ROBOTOMY_REQUEST_FORM_HPP */
