/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 14:22:49 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/16 16:56:04 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I_MATERIA_SOURCE_HPP
# define I_MATERIA_SOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource()
	{
	}

	virtual void      learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(const std::string& type) = 0;
};

#endif /* I_MATERIA_SOURCE_HPP */
