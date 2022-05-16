/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:25:10 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/16 17:30:44 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>
#include <string>

AMateria::AMateria(): _type("AMateria")
{
	return ;
}

AMateria::AMateria(const AMateria &x): _type(x._type)
{
	return ;
}

AMateria::AMateria(const std::string &type): _type(type)
{
	return ;
}

AMateria	&AMateria::operator=(const AMateria &)
{
	return *this;
}

AMateria::~AMateria()
{
	return ;
}

const std::string&
AMateria::getType() const
{
	return this->_type;
}

void
AMateria::use(ICharacter &)
{
}
