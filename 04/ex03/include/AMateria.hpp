/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:20:43 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/16 15:08:44 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_MATERIA_HPP
# define A_MATERIA_HPP

# include "ICharacter.hpp"
# include <string>

class AMateria
{
private:
	AMateria& operator=(const AMateria &);

protected:
	std::string	_type;

protected:
	AMateria();
	AMateria(const AMateria &);

public:
	AMateria(std::string const & type);
	virtual ~AMateria();

	const std::string& getType() const;
	virtual AMateria*  clone() const = 0;
	virtual void       use(ICharacter& target);
};

#endif /* A_MATERIA_HPP */
