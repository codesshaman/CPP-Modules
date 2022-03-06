/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 17:08:02 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/06 21:12:20 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
	private:
		std::string	_type;
	public:
		Weapon(std::string);
		Weapon();
		~Weapon();
		const std::string	getType(void)const;
		void				setType(std::string type);
};

#endif /* !defined WEAPON_HPP */
