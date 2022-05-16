/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 14:24:33 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/16 17:30:44 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include <string>
#include <iostream>

MateriaSource::MateriaSource()
	: _nb_items(0)
{
	int		i;

	for (i = 0;i < 4; i++)
		this->_sources[i] = 0;
	return ;
}

MateriaSource::MateriaSource(const MateriaSource &x)
	: _nb_items(0)
{
	int		i;

	for (i = 0; i < x._nb_items; i++)
		this->learnMateria(x._sources[i]->clone());
	while (i < 4)
		this->_sources[i++] = 0;
	return ;
}

MateriaSource&
MateriaSource::operator=(const MateriaSource &x)
{
	int		i;

	for (i = 0; i < this->_nb_items; i++)
		delete (this->_sources[i]);
	this->_nb_items = 0;
	for (i = 0; i < x._nb_items; i++)
		this->learnMateria(x._sources[i]->clone());
	for (i = this->_nb_items; i < 4; i++)
		this->_sources[i] = 0;
	return *this;
}

MateriaSource::~MateriaSource()
{
	int		i;

	for (i = 0; i < this->_nb_items; i++)
		delete (this->_sources[i]);
	return ;
}

void
MateriaSource::learnMateria(AMateria *m)
{
	if (this->_nb_items >= 4)
	{
		std::cout << "This source is already full!" << std::endl;
		return ;
	}
	if (m == 0)
		return ;
	this->_sources[this->_nb_items++] = m;
	return ;
}

AMateria*
MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < this->_nb_items; i++)
		if (this->_sources[i]->getType() == type)
			return (this->_sources[i]->clone());
	return (0);
}
