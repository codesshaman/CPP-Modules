/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:20:43 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/31 11:14:20 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_MATERIA_HPP
# define A_MATERIA_HPP

# include "ICharacter.hpp"
# include <string>

class AMateria
{
	private:
		AMateria	& operator=(const AMateria &);

	protected:
		AMateria(void);
		AMateria(const AMateria &);

		std::string	_type;

	public:
		AMateria(std::string const & type);
		virtual ~AMateria(void);

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif /* A_MATERIA_HPP */
