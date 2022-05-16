/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:57:43 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/16 17:30:44 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->_type = "WrongCat";
	return ;
}

WrongCat::WrongCat(const WrongCat &x)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	this->_type = x._type;
	return ;
}

WrongCat&
WrongCat::operator=(const WrongCat &x)
{
	std::cout << "WrongCat assignment operator called" << std::endl;
	this->_type = x._type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
	return ;
}

void
WrongCat::makeSound() const
{
	std::cout << "!woeM" << std::endl;
	return ;
}

const std::string
WrongCat::getType() const
{
	return this->_type;
}
