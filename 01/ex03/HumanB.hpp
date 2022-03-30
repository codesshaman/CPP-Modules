/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 19:58:42 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/30 15:30:34 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		HumanB();

		std::string	_name;
		Weapon		*_weapon;

	public:
		HumanB(std::string, Weapon&);
		HumanB(std::string);
		~HumanB();

		void	setWeapon(Weapon&);
		void	dropWeapon(void);
		void	attack(void)const;
};

#endif /* HUMAN_B_HPP */
