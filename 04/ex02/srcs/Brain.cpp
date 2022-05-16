/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 13:18:13 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/16 17:30:44 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <string>

Brain::Brain()
{
	int		i;

	std::cout << "Brain default constructor called" << std::endl;
	for (i = 0; i < 100; i++)
		this->ideas[i] = "";
	return ;
}

Brain::Brain(const Brain &x)
{
	int		i;

	std::cout << "Brain copy constructor called" << std::endl;
	for (i = 0; i < 100; i++)
		this->ideas[i] = x.ideas[i];
	return ;
}

Brain::Brain(const std::string idea)
{
	int		i;

	std::cout << "Brain string constructor called" << std::endl;
	for (i = 0; i < 100; i++)
		this->ideas[i] = idea;
	return ;
}

Brain&
Brain::operator=(const Brain &x)
{
	int		i;

	for (i = 0; i < 100; i++)
		this->ideas[i] = x.ideas[i];
	std::cout << "Brain assignment operator called" << std::endl;
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain default destructor called" << std::endl;
	return ;
}

void
Brain::printIdeas() const
{
	for (int i = 0; i < 100; i++)
		std::cout << this->ideas[i] << std::endl;
}
