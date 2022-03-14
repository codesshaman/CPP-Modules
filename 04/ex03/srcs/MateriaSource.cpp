/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 14:24:33 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/14 13:55:32 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include <string>
#include <iostream>

MateriaSource::MateriaSource(void): _nb_items(0)
{
	int		i;

	for (i = 0;i < 4; i++)
		this->_sources[i] = nullptr;
	return ;
}

MateriaSource::MateriaSource(const MateriaSource &src): _nb_items(0)
{
	int		i;

	for (i = 0; i < src._nb_items; i++)
		this->learnMateria(src._sources[i]->clone());
	while (i < 4)
		this->_sources[i++] = nullptr;
	return ;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &rhs)
{
	int		i;

	for (i = 0; i < this->_nb_items; i++)
		delete (this->_sources[i]);
	this->_nb_items = 0;
	for (i = 0; i < rhs._nb_items; i++)
		this->learnMateria(rhs._sources[i]->clone());
	for (i = this->_nb_items; i < 4; i++)
		this->_sources[i] = nullptr;
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	int		i;

	for (i = 0; i < this->_nb_items; i++)
		delete (this->_sources[i]);
	return ;
}

void	MateriaSource::learnMateria(AMateria *m)
{
	if (this->_nb_items >= 4)
	{
		std::cout << "This source is already full!" << std::endl;
		return ;
	}
	if (m == nullptr)
		return ;
	this->_sources[this->_nb_items++] = m;
	return ;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	int		i;

	for (i = 0; i < this->_nb_items; i++)
		if (this->_sources[i]->getType() == type)
			return (this->_sources[i]->clone());
	return (nullptr);
}
