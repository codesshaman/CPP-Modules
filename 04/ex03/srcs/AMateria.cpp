/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:25:10 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/31 11:15:48 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>
#include <string>

AMateria::AMateria(void): _type("AMateria")
{
	return ;
}

AMateria::AMateria(const AMateria &src): _type(src._type)
{
	return ;
}

AMateria::AMateria(const std::string &type): _type(type)
{
	return ;
}

AMateria	&AMateria::operator=(const AMateria &)
{
	return (*this);
}

AMateria::~AMateria(void)
{
	return ;
}

const std::string &AMateria::getType(void) const
{
	return (this->_type);
}

void	AMateria::use(ICharacter &target)
{
	(void)target;
	return ;
}
