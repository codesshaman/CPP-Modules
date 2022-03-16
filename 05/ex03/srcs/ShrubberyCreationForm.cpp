/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:52:35 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/16 16:48:34 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <string>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void):
	Form("ShrubberyCreationForm", 145, 137), _target("")
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target):
	Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src):
	Form("ShrubberyCreationForm", 145, 137), _target(src._target)
{
	return ;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	(void)rhs;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

const std::string	&ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	std::ofstream	file;
	std::string		file_path;

	if (!this->isExecutable(executor))
		throw (Form::CannotExecuteException());
	file_path = this->_target + "_shrubbery";
	file.open(file_path, std::fstream::out);
	file << "       _-_" << std::endl;
	file << "    /~~   ~~\\" << std::endl;
	file << " /~~         ~~\\" << std::endl;
	file << "{               }" << std::endl;
	file << " \\  _-     -_  /" << std::endl;
	file << "   ~  \\\\ //  ~" << std::endl;
	file << "_- -   | | _- _" << std::endl;
	file << "       | |   -_" << std::endl;
	file << "      // \\\\" << std::endl;
	file << std::endl;
	file << "       _-_" << std::endl;
	file << "    /~~   ~~\\" << std::endl;
	file << " /~~      __ ~~\\" << std::endl;
	file << "{     -         }" << std::endl;
	file << " \\  _-     -_  /" << std::endl;
	file << "   ~  \\\\ //  ~" << std::endl;
	file << "_- -   | |    _" << std::endl;
	file << "   -_  | |   -_" << std::endl;
	file << "      // \\\\" << std::endl;
	file.close();
	return ;
}
