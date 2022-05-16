/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:17:10 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/16 17:30:44 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
	return ;
}

Dog::Dog(const Dog &x)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_type = x._type;
	this->_brain = new Brain(*(x._brain));
	return ;
}

Dog::Dog(const std::string idea)
{
	std::cout << "Dog string constructor called" << std::endl;
	this->_brain = new Brain(idea);
	return ;
}

Dog	&Dog::operator=(const Dog &x)
{
	std::cout << "Dog assignment operator called" << std::endl;
	this->_type = x._type;
	delete (this->_brain);
	this->_brain = new Brain(*(x._brain));
	return *this;
}

Dog::~Dog()
{
	delete (this->_brain);
	std::cout << "Dog destructor called" << std::endl;
	return ;
}

void
Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
	return ;
}

const std::string
Dog::getType() const
{
	return this->_type;
}

void
Dog::printIdeas() const
{
	this->_brain->printIdeas();
}
