/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 11:50:20 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/12 13:44:03 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure()
{
	this->_type = "cure";
	return ;
}

Cure::Cure(const Cure &)
{
	this->_type = "cure";
	return ;
}

Cure	&Cure::operator=(const Cure &)
{
	return *this;
}

Cure::~Cure()
{
	return ;
}

AMateria*
Cure::clone() const
{
	return new Cure(*this);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "\'s wounds *" << std::endl;
	return ;
}
