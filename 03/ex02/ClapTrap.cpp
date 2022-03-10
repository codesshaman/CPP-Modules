/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 22:11:47 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/10 16:34:22 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

ClapTrap::ClapTrap(void): _name(""), _hp(10), _energy(10), _ad(0)
{
	std::cout << "Created a new ClapTrap with default constructor" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &src): _name(src._name), _hp(src._hp), _energy(src._energy), _ad(src._ad)
{
	std::cout << "Created a new ClapTrap named \'" << this->_name << "\' with copy constructor" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const std::string name): _name(name), _hp(10), _energy(10), _ad(0)
{
	std::cout << "Created a new ClapTrap with name \'" << this->_name << "\'" << std::endl;
	return ;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_energy = rhs._energy;
	this->_ad = rhs._ad;
	std::cout << "Copied ClapTrap " << rhs._name <<  " with assignment operator" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
	return ;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_hp == 0)
	{
		std::cout << this->_name << " is dead and cannot attack!" << std::endl;
		return ;
	}
	if (this->_energy == 0)
	{
		std::cout << this->_name << " has no energy left and cannot attack!" << std::endl;
		return ;
	}
	std::cout << this->_name << " attacks! ";
	std::cout << target << " lost " << this->_ad << " hit points!" << std::endl;
	if (this->_energy)
		this->_energy--;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp == 0)
	{
		std::cout << this->_name << " is already dead!" << std::endl;
		return ;
	}
	std::cout << this->_name << " took " << amount << " damage!" << std::endl;
	if ((int)(this->_hp - amount )<= 0)
	{
		std::cout << this->_name << " died!" << std::endl;
		this->_hp = 0;
	}
	else
		this->_hp -= amount;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hp == 0)
	{
		std::cout  << this->_name << " is dead and cannot be repaired!" << std::endl;
		return ;
	}
	if (this->_energy == 0)
	{
		std::cout << this->_name << " has no energy left and cannot be repaired!" << std::endl;
		return ;
	}
	std::cout << this->_name << " recovered " << amount << " hit points!" << std::endl;
	if (this->_energy)
		this->_energy--;
	return ;
}
