/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:49:49 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/26 19:11:38 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main(int ac, const char **av)
{
	Harl		harl;
	std::string	filter;

	if (ac != 2)
	{
		std::cerr << "error: expected 1 filter argument: DEBUG, INFO, WARNING, ERROR" << std::endl;
		return (1);
	}
	filter = std::string(av[1]);
	if (filter != "DEBUG" && filter != "INFO" && filter != "WARNING" && filter != "ERROR")
	{
		std::cout << "* Probably complaining about insignificant problems... *" << std::endl;
		return (0);
	}
	std::cout << "[" << filter << "]" << std::endl;
	harl.complain("DEBUG", filter);
	harl.complain("INFO", filter);
	harl.complain("WARNING", filter);
	harl.complain("ERROR", filter);
	harl.complain("TEST", filter);
	return (0);
}
