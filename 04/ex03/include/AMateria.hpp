/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:20:43 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/11 17:29:58 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined A_MATERIA_HPP
# define A_MATERIA_HPP

# include <string>

class AMateria
{
	private:
		std::string	_type;
	protected:
		AMateria(void);
		AMateria(const AMateria &);
		AMateria	& operator=(const AMateria &);
	public:
		AMateria(std::string const & type);
		~AMateria(void);

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif /* !defined A_MATERIA_HPP */
