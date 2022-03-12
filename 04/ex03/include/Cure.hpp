/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 11:46:16 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/12 13:46:59 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(const Cure &);
		Cure	& operator=(const Cure &);
		~Cure(void);
		Cure(std::string const & type);

		std::string const & getType() const; //Returns the materia type

		AMateria* clone()const;
		void use(ICharacter& target);
};

#endif /* !defined CURE_HPP */
