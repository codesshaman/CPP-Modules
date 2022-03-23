/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:22:28 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/23 11:38:28 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
	private:
		enum Fields {
			firstName = 0,
			lastName,
			nickname,
			phoneNumber,
			darkestSecret,
			lastField = darkestSecret
		}; // Contact::Fields

		const static std::string	_fields_name[];
		std::string					_infos[lastField + 1];
		int							index;
		void						eraseContact(void);

	public:
		Contact();
		~Contact();
		static void	show_contacts_list(void);
		void	contact_header(void)const;
		void	display_contact(void)const;
		int		set_info(int index);
}; // class Contact

#endif // CONTACT_HPP
