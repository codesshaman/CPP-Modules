/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 11:34:30 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/07 20:13:30 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <string>
#include <iostream>

void	Karen::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-"
		"pickle-specialketchup burger. I really do !" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money."
		" You didn't put enough bacon in my burger ! If you did, I wouldn't be"
		"asking for more !" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've"
		" been coming for years whereas you started working here since last month."
		<< std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now."
		<< std::endl;
}

void	Karen::complain(std::string level)
{
	int			i;
	std::string	levels[4] = {"debug", "info", "warning", "error"};
	void		(Karen::*complaints[4])(void) = {&Karen::debug,
												&Karen::info,
												&Karen::warning,
												&Karen::error};

	for (i = 0; i < 4; i++)
		if (level == levels[i])
			(this->*complaints[i])();
}

Karen::Karen(void)
{
	return ;
}

Karen::~Karen(void)
{
	return ;
}
