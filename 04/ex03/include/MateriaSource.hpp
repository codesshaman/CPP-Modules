/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 14:24:43 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/16 16:56:07 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	int       _nb_items;
	AMateria* _sources[4];

public:
	MateriaSource();
	MateriaSource(const MateriaSource &);
	MateriaSource& operator=(const MateriaSource &);
	~MateriaSource();

	void      learnMateria(AMateria*);
	AMateria* createMateria(const std::string&);
};

#endif /* MATERIA_SOURCE_HPP */
