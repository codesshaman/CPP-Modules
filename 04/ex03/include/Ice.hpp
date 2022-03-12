/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 11:46:20 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/12 14:04:26 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(const Ice &);
		Ice		& operator=(const Ice &);
		~Ice(void);

		std::string const & getType() const; //Returns the materia type
		AMateria* clone()const;
		void use(ICharacter& target);
};

#endif /* !defined ICE_HPP */
