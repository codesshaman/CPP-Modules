/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:13:23 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/03 22:31:41 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact	contacts[8];
		int		_nbContacts;
		void	show_contacts_list(void)const;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	add_contact(void);
		void	search_contact(void)const;
};

#endif /* !defined PHONEBOOK_HPP */
