/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:30:23 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/10 17:50:40 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(void): _type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
	return ;
}

Animal::Animal(const Animal &src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->_type = src._type;
	return ;
}

Animal	&Animal::operator=(const Animal &rhs)
{
	std::cout << "Animal assignment operator called" << std::endl;
	this->_type = rhs._type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

void	Animal::makeSound(void) const
{
	std::cout << "An animal made some noise..." << std::endl;
	return ;
}

const std::string	Animal::getType(void) const
{
	return (this->_type);
}
