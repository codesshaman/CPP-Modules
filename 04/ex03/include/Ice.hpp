/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 11:46:20 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/16 17:06:27 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice &);
	Ice& operator=(const Ice &);
	~Ice();

	const std::string& getType() const; //Returns the materia type
	AMateria*          clone() const;

	void use(ICharacter& target);
};

#endif /* ICE_HPP */
