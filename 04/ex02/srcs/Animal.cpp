/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:30:23 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/16 17:30:44 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(): _type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
	return ;
}

Animal::Animal(const Animal &x)
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->_type = x._type;
	return ;
}

Animal&
Animal::operator=(const Animal &x)
{
	this->_type = x._type;
	std::cout << "Animal assignment operator called" << std::endl;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

void
Animal::makeSound() const
{
	std::cout << "An animal made some noise..." << std::endl;
	return ;
}

const std::string
Animal::getType() const
{
	return this->_type;
}
