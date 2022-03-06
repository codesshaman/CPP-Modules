/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:23:09 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/02/24 16:06:49 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>

const std::string Contact::fields_name[5] = {
	"First name",
	"Last name",
	"Nickname",
	"Phone number",
	"Darkest secret"
};

void	Contact::erase_contact(void)
{
	int		i;

	for (i = firstName; i <= lastField; i++)
		this->infos[i] = "N/A";
}

int	Contact::set_info(int index)
{
	int			i;
	Contact		temp;

	temp.index = index + 1;
	for (i = firstName; i <= lastField; i++)
	{
		std::cout << "\033[4m" << fields_name[i] << "\033[m: ";
		std::getline(std::cin, temp.infos[i]);
		if (std::cin.eof() || temp.infos[i].length() < 1)
		{
			//this->erase_contact();
			std::cout << std::endl << "PhoneBook: contact not added: fields cannot be empty." << std::endl;
			return (0);
		}
	}
	std::cout << std::endl << "PhoneBook: contact added!" << std::endl;
	for (i = firstName; i <= lastField; i++)
		this->infos[i] = temp.infos[i];
	this->index = temp.index;
	return (1);
}

void	Contact::display_contact(void)const
{
	std::cout << "\033[4mContact " << (int)this->index << "\033[m:" << std::endl;
	for (int i = firstName; i <= lastField; i++)
	{
		std::cout << Contact::fields_name[i] << ":\t";
		std::cout << this->infos[i] << std::endl;
	}
}

void	Contact::contact_header(void)const
{
	int		i;

	std::cout << std::setw(10) << this->index;
	for (i = 0; i <= nickname; i++)
	{
		std::cout << "|";
		if (this->infos[i].length() > 10)
			std::cout << this->infos[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->infos[i];
	}
	std::cout << std::endl;
}

void	Contact::show_contacts_list(void)
{
	int		i;

	std::cout << "PhoneBook: current contacts:" << std::endl;
	std::cout << std::setw(10) << "Index";
	for (i = firstName;i <= nickname; i++)
		std::cout << "|" << std::setw(10) << fields_name[i];
	std::cout << std::endl;
}

Contact::Contact(void)
{
	this->index = 0;
	for (int i = firstName; i <= lastField; i++)
		this->infos[i] = std::string();
}

Contact::~Contact()
{
	
}
