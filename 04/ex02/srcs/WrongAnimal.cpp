/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:30:23 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/10 17:50:40 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(): _type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &x)
{
	this->_type = x._type;
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	return ;
}

WrongAnimal&
WrongAnimal::operator=(const WrongAnimal &x)
{
	this->_type = x._type;
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
	return ;
}

void
WrongAnimal::makeSound() const
{
	std::cout << "A WrongAnimal made some noise..." << std::endl;
	return ;
}

const std::string
WrongAnimal::getType() const
{
	return this->_type;
}
