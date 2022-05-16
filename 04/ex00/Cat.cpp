/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:17:10 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/16 17:30:44 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
	return ;
}

Cat::Cat(const Cat &x)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_type = x._type;
	return ;
}

Cat	&Cat::operator=(const Cat &x)
{
	std::cout << "Cat assignment operator called" << std::endl;
	this->_type = x._type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	return ;
}

void
Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
	return ;
}

const std::string
Cat::getType() const
{
	return this->_type;
}
