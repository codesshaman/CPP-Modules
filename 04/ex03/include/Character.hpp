/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 13:20:50 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/16 17:06:35 by ugdaniel         ###   ########.fr       */
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
	std::string _name;
	int         _nb_items;
	AMateria*   _inventory[4];

public:
	Character(std::string const &);
	Character(const Character &);
	Character& operator=(const Character &);
	~Character();

	const std::string& getName() const;

	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);

private:
	Character();
};

#endif /* CHARACTER_HPP */
