/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:49:49 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/04/02 20:27:11 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

static void	test_complain(const char *filter)
{
	Harl	harl(filter);

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
}

int	main(int ac, const char **av)
{
	if (ac != 2)
	{
		std::cerr << "error: expected 1 filter argument: DEBUG, INFO, WARNING, ERROR" << std::endl;
		return (1);
	}
	test_complain(av[1]);
	return (0);
}
