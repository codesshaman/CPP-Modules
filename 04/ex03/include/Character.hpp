/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 13:20:50 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/31 11:25:41 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <string>

class Character : public ICharacter
{
	private:
		Character(void);
		std::string	_name;
		AMateria	*_inventory[4];
		int			_nb_items;

	public:
		Character(std::string const &);
		Character(const Character &);
		Character	& operator=(const Character &);
		~Character(void);

		std::string const & getName(void)const;

		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
};

#endif /* CHARACTER_HPP */
