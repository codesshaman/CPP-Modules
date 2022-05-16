/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 14:25:47 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/16 17:30:44 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <string>
#include <iostream>

Character::Character(std::string const &name): _name(name), _nb_items(0)
{
	int		i;

	for (i = 0; i < 4; i++)
		this->_inventory[i] = 0;
	return ;
}

Character::Character(const Character &x): _name(x._name), _nb_items(x._nb_items)
{
	int		i;

	for (i = 0; i < x._nb_items; i++)
		this->equip(x._inventory[i]->clone());
	while (i < 4)
		this->_inventory[i++] = 0;
	return ;
}

Character	&Character::operator=(const Character &x)
{
	int		i;

	this->_name = x._name;
	for (i = 0; i < this->_nb_items; i++)
		delete (this->_inventory[i]);
	this->_nb_items = 0;
	for (i = 0; i < x._nb_items; i++)
		this->equip(x._inventory[i]->clone());
	for (i = this->_nb_items; i < 4; i++)
		this->_inventory[i] = 0;
	return *this;
}

Character::~Character()
{
	return ;
}

const std::string	&Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	int		i;

	if (this->_nb_items >= 4)
	{
		std::cout << this->getName() << "'s inventory is full." << std::endl;
		return ;
	}
	if (m == 0)
		return ;
	for (i = 0; i < this->_nb_items; i++)
	{
		if (this->_inventory[i] == m)
		{
			std::cout << this->getName() << " already holds this Materia!" << std::endl;
			return ;
		}
	}
	this->_inventory[this->_nb_items++] = m;
	std::cout << this->getName() << " equipped a new " << m->getType() << " Materia!" << std::endl;
	return ;
}

void	Character::unequip(int idx)
{
	int		i;

	if (this->_nb_items <= 0)
	{
		std::cout << this->getName() << "'s inventory is empty." << std::endl;
		return ;
	}
	if (idx < 0 || idx >= this->_nb_items || this->_inventory[idx] == 0)
		return ;
	std::cout << this->getName() << " dropped the " << this->_inventory[idx]->getType() << " Materia." << std::endl;
	for (i = idx; i < 3; i++)
	{
		this->_inventory[i] = this->_inventory[i + 1];
		this->_inventory[i + 1] = 0;
	}
	this->_nb_items--;
	return ;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= this->_nb_items || this->_inventory[idx] == 0)
		return ;
	this->_inventory[idx]->use(target);
	return ;
}
