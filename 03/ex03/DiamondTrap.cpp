/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:22:06 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/10 16:46:53 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <string>
#include <iostream>

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap default constructor called for " << this->_name << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src)
{
	this->_name = src._name;
	this->_hp = src._hp;
	this->_energy = src._energy;
	this->_ad = src._ad;
	std::cout << "DiamondTrap copy constructor called for " << this->_name << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(const std::string name)
{
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_hp = FragTrap::_hp;
	this->_energy = ScavTrap::_energy;
	this->_ad = FragTrap::_ad;
	std::cout << "Created a new DiamondTrap with name \'" << this->_name << "\'" << std::endl;
	return ;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &rhs)
{
	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_energy = rhs._energy;
	this->_ad = rhs._ad;
	std::cout << "Copied DiamondTrap " << rhs._name <<  " with assignment operator" << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called for " << this->_name << std::endl;
	return ;
}


void	DiamondTrap::whoAmI(void) const
{
	std::cout << "I am " << this->_name << "! My ClapTrap name is " << ClapTrap::_name << std::endl;
}
