/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 11:46:16 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/16 16:56:02 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(const Cure &);
	Cure(const std::string& type);
	Cure& operator=(const Cure &);
	~Cure();

	const std::string& getType() const; //Returns the materia type
	AMateria*          clone() const;

	void use(ICharacter& target);
};

#endif /* CURE_HPP */
