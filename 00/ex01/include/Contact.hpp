/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:22:28 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/30 12:06:09 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined CONTACT_HPP
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
		};

		const static std::string	_fields_name[];
		std::string					_infos[lastField + 1];
		int							index;

		void		eraseContact(void);

	public:
		Contact();
		~Contact();

		static void	show_contacts_list(void);
		void		contact_header(void)const;
		void		display_contact(void)const;
		int			set_info(int index);
};

#endif /* !defined CONTACT_HPP */
