/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:41:13 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/16 20:52:31 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include <string>

class Intern
{
public:
	Intern();
	Intern(const Intern&);
	Intern& operator=(const Intern&);
	~Intern();

	Form *makeForm(const std::string& name, const std::string& target);
};

#endif /* INTERN_HPP */
