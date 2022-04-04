/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 19:58:42 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/04/02 20:30:37 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		HumanB(void);

		std::string	_name;
		Weapon		*_weapon;

	public:
		HumanB(std::string, Weapon&);
		HumanB(std::string);
		~HumanB(void);

		void	setWeapon(Weapon&);
		void	dropWeapon(void);
		void	attack(void)const;
};

#endif /* HUMAN_B_HPP */
