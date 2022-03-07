/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 17:07:36 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/07 10:22:33 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

Weapon::Weapon(std::string type): _type(type)
{
	return ;
}

Weapon::Weapon()
{
	return ;
}

Weapon::~Weapon()
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
