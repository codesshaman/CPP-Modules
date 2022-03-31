/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:41:13 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/31 11:32:18 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
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

#endif /* INTERN_HPP */
