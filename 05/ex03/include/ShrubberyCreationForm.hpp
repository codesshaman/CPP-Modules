/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:45:32 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/16 16:52:01 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include "Form.hpp"
# include <string>

class ShrubberyCreationForm : public Form
{
	private:
		std::string	_target;
		ShrubberyCreationForm(void);
	public:
		ShrubberyCreationForm(const std::string &);
		ShrubberyCreationForm(const ShrubberyCreationForm &);
		ShrubberyCreationForm	& operator=(const ShrubberyCreationForm &);
		~ShrubberyCreationForm(void);

		const std::string	&getTarget(void) const;
		void	execute(const Bureaucrat &) const;
};

#endif /* !defined SHRUBBERY_CREATION_FORM_HPP */
