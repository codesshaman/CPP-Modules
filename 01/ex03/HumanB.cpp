/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 20:27:33 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/06 22:10:16 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack(void) const
{
	if (this->_weapon)
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " throws a punch" << std::endl;
}

HumanB::HumanB(std::string name, Weapon &weapon): _name(name), _weapon(&weapon)
{
	return ;
}

HumanB::HumanB(std::string name): _name(name)
{
	this->_weapon = nullptr;
	return ;
}

HumanB::HumanB(void)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}
