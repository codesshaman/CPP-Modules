/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:17:01 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/10 16:38:59 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void)
{
	std::cout << "Created a new ScavTrap with default constructor" << std::endl;
	this->_name = "";
	this->_hp = 100;
	this->_energy = 50;
	this->_ad = 20;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	std::cout << "Created a new ScavTrap with copy constructor" << std::endl;
	this->_name = src._name;
	this->_hp = src._hp;
	this->_energy = src._energy;
	this->_ad = src._ad;
	return ;
}

ScavTrap::ScavTrap(const std::string name)
{
	this->_name = name;
	this->_hp = 100;
	this->_energy = 50;
	this->_ad = 20;
	std::cout << "Created a new ScavTrap with name \'" << this->_name << "\'" << std::endl;
	return ;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_energy = rhs._energy;
	this->_ad = rhs._ad;
	std::cout << "Copied ScavTrap " << rhs._name <<  " with assignment operator" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called for " << this->_name << std::endl;
	return ;
}

void	ScavTrap::guardGate(void)
{
	if (this->_hp == 0)
	{
		std::cout << "ScavTrap " << this->_name << " is dead and cannot enter Gate keeper mode!" << std::endl;
		return ;
	}
	if (this->_energy == 0)
	{
		std::cout << "ScavTrap " << this->_name << " has no energy left and cannot enter Gate keeper mode!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode!" << std::endl;
}
