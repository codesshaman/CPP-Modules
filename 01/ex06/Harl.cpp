/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 11:34:30 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/08 12:44:36 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>
#include <iostream>

const std::string	Harl::_levels[4] = {"ERROR", "WARNING", "INFO", "DEBUG"};

void	Harl::debug(void)
{
	std::cout << "[DEBUG]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-"
		"pickle-specialketchup burger. I really do !" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO]" << std::endl << "I cannot believe adding extra bacon costs more money."
		" You didn't put enough bacon in my burger ! If you did, I wouldn't be"
		" asking for more !" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING]" << std::endl << "I think I deserve to have some extra bacon for free. I've"
		" been coming for years whereas you started working here since last month."
		<< std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR]" << std::endl << "This is unacceptable ! I want to speak to the manager now."
		<< std::endl;
}

static int	get_filter(const std::string *levels, const std::string &s)
{
	for (int i = 0; i < 4; i++)
		if (s == levels[i])
			return (i);
	return (-1);
}

void	Harl::complain(std::string filter)
{
	int	level = get_filter(this->_levels, filter);

	if (level <= this->_filter)
	{
		switch (level)
		{
			case 3:
				this->debug();
				break ;
			case 2:
				this->info();
				break ;
			case 1:
				this->warning();
				break ;
			default:
				this->error();
		}
	}
}

Harl::Harl(void): _filter(4)
{
	return ;
}

Harl::Harl(const std::string &s)
{
	this->_filter = get_filter(this->_levels, s);
	if (this->_filter == -1)
		std::cout << "* Probably complaining about insignificant problems... *" << std::endl;
}

Harl::~Harl(void)
{
	return ;
}
