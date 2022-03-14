/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 13:37:01 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/14 14:17:14 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include <iostream>

int	main(void)
{
	{ // subject tests
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
	
		AMateria* tmp;
		tmp = src->createMateria("ice");

		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}
	std::cout << "--------------" << std::endl;
	{
		Character	bob("Bob");
		ICharacter	*jim = new Character("Jim");
		IMateriaSource	*src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		AMateria	*ice = src->createMateria("ice");
		AMateria	*ice2 = new Ice();
		AMateria	*ice3 = src->createMateria("ice");
		AMateria	*cure = new Cure();
		AMateria	*cure2 = src->createMateria("cure");

		bob.equip(ice);
		bob.use(0, *jim);

		bob.equip(cure);
		bob.use(1, *jim);

		bob.equip(ice2);
		bob.equip(ice3);

		bob.unequip(1); // cure
		bob.unequip(0); // ice

		bob.equip(ice);
		bob.equip(ice2);
		bob.equip(ice3);
		bob.equip(cure);
		bob.equip(cure2);

		bob.use(0, bob);
		bob.use(1, bob);
		bob.use(2, bob);
		bob.use(3, bob);
		bob.use(4, bob);

		bob.unequip(0);
		bob.unequip(0);
		bob.unequip(0);
		bob.unequip(0);
		bob.unequip(0);

		delete (ice);
		delete (ice2);
		delete (ice3);
		delete (cure);
		delete (cure2);
		delete (jim);
	}
	return (0);
}

