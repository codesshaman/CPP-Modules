/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:52:35 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/30 17:04:55 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <string>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
	: Form("ShrubberyCreationForm", 145, 137),
	  _target("")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
	: Form("ShrubberyCreationForm", 145, 137),
	  _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &x)
	: Form("ShrubberyCreationForm", 145, 137),
	  _target(x._target)
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm&)
{
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

const std::string&
ShrubberyCreationForm::getTarget() const
{
	return _target;
}

void
ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	std::ofstream	file;
	std::string		file_path;

	if (!isExecutable(executor))
		throw (Form::CannotExecuteException());
	file_path = this->_target + "_shrubbery";
	file.open(file_path.c_str(), std::fstream::out);
	if (!file.is_open())
	{
		std::cerr << "Could not open file \'" << file_path << "\'" << std::endl;
		return ;
	}
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
}
