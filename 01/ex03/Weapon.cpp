/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 17:07:36 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/30 15:31:27 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

Weapon::Weapon()
{
	return ;
}

Weapon::Weapon(std::string type): _type(type)
{
	return ;
}

const std::string	Weapon::getType(void)const
{
	return (this->_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}

Weapon::~Weapon()
{
	return ;
}
