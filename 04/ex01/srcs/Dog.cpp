/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:17:10 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/11 14:28:32 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>

Dog::Dog(void)
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
	return ;
}

Dog::Dog(const Dog &src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_type = src._type;
	this->_brain = new Brain(*(src._brain));
	return ;
}

Dog::Dog(const std::string idea)
{
	std::cout << "Dog string constructor called" << std::endl;
	this->_brain = new Brain(idea);
	return ;
}

Dog	&Dog::operator=(const Dog &rhs)
{
	std::cout << "Dog assignment operator called" << std::endl;
	this->_type = rhs._type;
	delete (this->_brain);
	this->_brain = new Brain(*(rhs._brain));
	return (*this);
}

Dog::~Dog(void)
{
	delete (this->_brain);
	std::cout << "Dog destructor called" << std::endl;
	return ;
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof!" << std::endl;
	return ;
}

const std::string	Dog::getType(void) const
{
	return (this->_type);
}

void	Dog::print_ideas(void) const
{
	this->_brain->print_ideas();
}
