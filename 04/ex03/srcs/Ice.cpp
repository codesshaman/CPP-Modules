/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 11:50:20 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/16 16:56:00 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>

Ice::Ice()
{
	this->_type = "ice";
	return ;
}

Ice::Ice(const Ice &)
{
	this->_type = "ice";
	return ;
}

Ice&
Ice::operator=(const Ice &)
{
	return *this;
}

Ice::~Ice()
{
	return ;
}

AMateria*
Ice::clone() const
{
	return new Ice(*this);
}

void
Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}
