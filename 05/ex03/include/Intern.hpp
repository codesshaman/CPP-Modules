/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:41:13 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/16 15:59:34 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include <string>

class Intern
{
	public:
		Intern(void);
		Intern(const Intern &);
		Intern	& operator=(const Intern &);
		~Intern(void);

		Form	*makeForm(const std::string &name, const std::string &target);
};

#endif /* !defined INTERN_HPP */
