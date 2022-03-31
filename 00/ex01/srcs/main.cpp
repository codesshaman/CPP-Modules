/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:09:05 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/30 12:46:25 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	PhoneBook	phonebook;
	std::string	line;

	while (std::cout << "PhoneBook> " && std::getline(std::cin, line))
	{
		if (line == "ADD")
			phonebook.add_contact();
		else if (line == "SEARCH")
			phonebook.search_contact();
		else if (line == "EXIT")
			return (0);
		else if (line[0])
			std::cout << "PhoneBook: available commands: ADD, SEARCH, EXIT" << std::endl;
	}
	std::cout << "\033[2K\rPhoneBook> EXIT" << std::endl;
	return (0);
}
