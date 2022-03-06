/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 19:58:42 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/06 22:01:36 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined HUMAN_B_HPP
# define HUMAN_B_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		std::string	_name;
		Weapon		*_weapon;
		HumanB();
	public:
		HumanB(std::string, Weapon&);
		HumanB(std::string);
		~HumanB();
		void	setWeapon(Weapon&);
		void	attack(void)const;
};

#endif /* !defined HUMAN_B_HPP */
