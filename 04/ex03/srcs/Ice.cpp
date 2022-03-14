/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 11:50:20 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/14 14:00:29 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>

Ice::Ice(void)
{
	this->_type = "ice";
	return ;
}

Ice::Ice(const Ice &)
{
	this->_type = "ice";
	return ;
}

Ice	&Ice::operator=(const Ice &)
{
	return (*this);
}

Ice::~Ice(void)
{
	return ;
}

AMateria	*Ice::clone(void) const
{
	Ice		*ice = new Ice(*this);

	return (ice);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}
