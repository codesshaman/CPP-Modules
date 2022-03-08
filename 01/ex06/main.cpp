/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:49:49 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/08 12:44:40 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int	main(int ac, const char **av)
{
	Karen		karen;
	std::string	filter;

	if (ac != 2)
	{
		std::cerr << "error: expected 1 argument" << std::endl;
		return (1);
	}
	filter = std::string(av[1]);
	if (filter != "DEBUG" && filter != "INFO" && filter != "WARNING" && filter != "ERROR")
	{
		std::cout << "Probably complaining about insignificant problems..." << std::endl;
		return (0);
	}
	std::cout << "[" << filter << "]" << std::endl;
	karen.complain("DEBUG", filter);
	karen.complain("INFO", filter);
	karen.complain("WARNING", filter);
	karen.complain("ERROR", filter);
	karen.complain("TEST", filter);
	return (0);
}
