/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 13:18:13 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/11 17:07:45 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <string>

Brain::Brain(void)
{
	int		i;

	std::cout << "Brain default constructor called" << std::endl;
	for (i = 0; i < 100; i++)
		this->ideas[i] = "";
	return ;
}

Brain::Brain(const Brain &src)
{
	int		i;

	std::cout << "Brain copy constructor called" << std::endl;
	for (i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
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

Brain	&Brain::operator=(const Brain &rhs)
{
	int		i;

	for (i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	std::cout << "Brain assignment operator called" << std::endl;
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain default destructor called" << std::endl;
	return ;
}

void	Brain::printIdeas(void) const
{
	for (int i = 0; i < 100; i++)
		std::cout << this->ideas[i] << std::endl;
}
