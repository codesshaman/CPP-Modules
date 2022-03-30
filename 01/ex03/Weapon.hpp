/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 17:08:02 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/30 15:09:34 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
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

#endif /* WEAPON_HPP */
