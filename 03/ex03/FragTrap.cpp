/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:50:05 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/10 16:40:45 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void)
{
	std::cout << "Created a new FragTrap with default constructor" << std::endl;
	this->_name = "";
	this->_hp = 100;
	this->_energy = 50;
	this->_ad = 20;
	return ;
}

FragTrap::FragTrap(const FragTrap &src)
{
	std::cout << "Created a new FragTrap with copy constructor" << std::endl;
	this->_name = src._name;
	this->_hp = src._hp;
	this->_energy = src._energy;
	this->_ad = src._ad;
	return ;
}

FragTrap::FragTrap(const std::string name)
{
	this->_name = name;
	this->_hp = 100;
	this->_energy = 50;
	this->_ad = 20;
	std::cout << "Created a new FragTrap with name \'" << this->_name << "\'" << std::endl;
	return ;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_energy = rhs._energy;
	this->_ad = rhs._ad;
	std::cout << "Copied FragTrap " << rhs._name <<  " with assignment operator" << std::endl;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called for " << this->_name << std::endl;
	return ;
}

void	FragTrap::highFivesGuys(void) const
{
	if (this->_hp == 0)
	{
		std::cout << this->_name << " is dead and cannot request a high five!" << std::endl;
		return ;
	}
	if (this->_energy == 0)
	{
		std::cout << this->_name << " has no energy left and cannot request a high five!" << std::endl;
		return ;
	}
	std::cout << this->_name << " requests a high five!" << std::endl;
}
