/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 14:24:43 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/14 13:49:40 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_sources[4];
		int			_nb_items;
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &);
		MateriaSource	& operator=(const MateriaSource &);
		~MateriaSource(void);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const &);
};

#endif /* !defined MATERIA_SOURCE_HPP */
