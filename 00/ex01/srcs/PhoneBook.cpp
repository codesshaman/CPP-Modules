/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:13:02 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/03 22:31:41 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <iomanip>

void	PhoneBook::show_contacts_list(void)const
{
	int	i;

	Contact::show_contacts_list();
	for (i = 0;i < this->_nbContacts; i++)
	{
		std::cout << "----------|----------|----------|----------" << std::endl;
		this->contacts[i].contact_header();
	}
}

void	PhoneBook::search_contact(void)const
{
	int	index;

	if (this->_nbContacts == 0)
	{
		std::cout << "PhoneBook: no contacts yet" << std::endl;
		return ;
	}
	if (this->_nbContacts > 1)
	{
		this->show_contacts_list();
		std::cout << "PhoneBook: which index? [1;" << (int)this->_nbContacts << "] ";
		if (!(std::cin >> index) || index <= 0 || index > this->_nbContacts)
			std::cout << "Phonebook: invalid index" << std::endl;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // No limit, ignore up to EOF or newline
	}
	else
		index = 1;
	if (index > 0 && index <= this->_nbContacts)
		this->contacts[index - 1].display_contact();
	std::cout << std::endl;
}

void	PhoneBook::add_contact(void)
{
	static int	contact = 0;

	if (this->_nbContacts >= 8)
		std::cout << "PhoneBook: warning: contacts limit reached: adding a new contact will overwrite the oldest one" << std::endl;
	std::cout << "PhoneBook: enter new contact info" << std::endl;
	if (contact == 8)
		contact = 0;
	if (this->contacts[contact].set_info(contact))
	{
		contact++;
		if (this->_nbContacts < 8)
			this->_nbContacts++;
	}
}

PhoneBook::PhoneBook(void)
{
	this->_nbContacts = 0;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}
