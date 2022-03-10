/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:57:43 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/10 17:59:27 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->_type = "WrongCat";
	return ;
}

WrongCat::WrongCat(const WrongCat &src)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	this->_type = src._type;
	return ;
}

WrongCat	&WrongCat::operator=(const WrongCat &rhs)
{
	std::cout << "WrongCat assignment operator called" << std::endl;
	this->_type = rhs._type;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
	return ;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "!woeM" << std::endl;
	return ;
}

const std::string	WrongCat::getType(void) const
{
	return (this->_type);
}
