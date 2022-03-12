/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 14:25:47 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/12 15:13:20 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <string>
#include <iostream>

Character::Character(std::string const &name): _name(name), _nb_items(0)
{
	int		i;

	for (i = 0; i < 4; i++)
		this->_inventory[i] = nullptr;
	return ;
}

Character::Character(const Character &src): _name(src._name), _nb_items(src._nb_items)
{
	int		i;

	for (i = 0; i < src._nb_items; i++)
		this->equip(src._inventory[i]->clone());
	while (i < 4)
		this->_inventory[i++] = nullptr;
}

Character	&Character::operator=(const Character &rhs)
{
	int		i;

	this->_name = rhs._name;
	for (i = 0; i < this->_nb_items; i++)
		delete (this->_inventory[i]);
	this->_nb_items = 0;
	for (i = 0; i < rhs._nb_items; i++)
		this->equip(rhs._inventory[i]->clone());
	for (i = this->_nb_items; i < 4; i++)
		this->_inventory[i] = nullptr;
	return (*this);
}

Character::~Character(void)
{
	int		i;

	for (i = 0; i < this->_nb_items; i++)
		delete (this->_inventory[i]);
}

const std::string	&Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	int		i;

	if (this->_nb_items >= 4 || m == nullptr)
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
}

void	Character::unequip(int idx)
{
	int		i;

	if (idx < 0 || idx >= this->_nb_items || this->_inventory[idx] == nullptr)
		return ;
	std::cout << this->getName() << " dropped the " << this->_inventory[idx]->getType() << " Materia." << std::endl;
	for (i = idx; i < 3; i++)
	{
		this->_inventory[i] = this->_inventory[i + 1];
		this->_inventory[i + 1] = nullptr;
	}
	this->_nb_items--;
	return ;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= this->_nb_items || this->_inventory[idx] == nullptr)
		return ;
	this->_inventory[idx]->use(target);
	return ;
}
