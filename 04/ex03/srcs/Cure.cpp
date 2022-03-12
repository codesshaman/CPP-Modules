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

Cure::Cure(void)
{
	this->_type = "Cure";
	return ;
}

Cure::Cure(const Cure &)
{
	this->_type = "Cure";
	return ;
}

Cure	&Cure::operator=(const Cure &)
{
	return (*this);
}

Cure::~Cure(void)
{
	return ;
}

AMateria	*Cure::clone(void) const
{
	Cure	*cure = new Cure();

	return (cure);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "\'s wounds *" << std::endl;
	return ;
}
