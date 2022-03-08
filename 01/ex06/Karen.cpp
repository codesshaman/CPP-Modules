/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 11:34:30 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/08 12:44:36 by ugdaniel         ###   ########.fr       */
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

static int	get_index(std::string *levels, std::string level)
{
	int		i;
	int		index;

	index = -1;
	for (i = 0; i < 4; i++)
		if (level == levels[i])
			index = i;
	return (index);
}

void	Karen::complain(std::string level, std::string filter)
{
	int			level_index;
	int			filter_index;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Karen::*complaints[4])(void) = {&Karen::debug,
												&Karen::info,
												&Karen::warning,
												&Karen::error};

	level_index = get_index(levels, level);
	filter_index = get_index(levels, filter);
	if (level_index - filter_index >= 0)
	{
		(this->*complaints[level_index])();
	}
}

Karen::Karen(void)
{
	return ;
}

Karen::~Karen(void)
{
	return ;
}
