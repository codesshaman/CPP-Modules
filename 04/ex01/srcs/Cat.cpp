/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:17:10 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/11 14:28:51 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

Cat::Cat(void)
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
	return ;
}

Cat::Cat(const Cat &src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_type = src._type;
	this->_brain = new Brain(*(src._brain));
	return ;
}

Cat::Cat(const std::string idea)
{
	std::cout << "Cat string constructor called" << std::endl;
	this->_brain = new Brain(idea);
	return ;
}

Cat	&Cat::operator=(const Cat &rhs)
{
	std::cout << "Cat assignment operator called" << std::endl;
	this->_type = rhs._type;
	delete (this->_brain);
	this->_brain = new Brain(*(rhs._brain));
	return (*this);
}

Cat::~Cat(void)
{
	delete (this->_brain);
	std::cout << "Cat destructor called" << std::endl;
	return ;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow!" << std::endl;
	return ;
}

const std::string	Cat::getType(void) const
{
	return (this->_type);
}

void	Cat::print_ideas(void) const
{
	this->_brain->print_ideas();
}
