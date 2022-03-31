/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:34:45 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/31 11:35:36 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string	_target;
		PresidentialPardonForm(void);

	public:
		PresidentialPardonForm(const std::string &);
		PresidentialPardonForm(const PresidentialPardonForm &);
		PresidentialPardonForm	& operator=(const PresidentialPardonForm &);
		~PresidentialPardonForm(void);

		const std::string	&getTarget(void) const;
		void				execute(const Bureaucrat &) const;
};

#endif /* PRESIDENTIAL_PARDON_FORM_HPP */
