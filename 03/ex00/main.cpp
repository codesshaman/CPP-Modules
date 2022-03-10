/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 22:11:36 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/10 12:18:28 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	claptrap1("CL4P-TP1");
	ClapTrap	claptrap2("CL4P-TP2");
	ClapTrap	claptrap3;
	ClapTrap	claptrap4(claptrap1);

	claptrap3 = claptrap1;

	claptrap1.attack("Red target");
	claptrap1.attack("Red target");
	claptrap1.attack("Red target");
	claptrap3.attack("Red target");
	claptrap3.attack("Red target");
	claptrap3.attack("Red target");

	claptrap1.takeDamage(5);
	claptrap1.attack("Red target");
	claptrap1.beRepaired(5);
	claptrap1.attack("Red target");
	claptrap1.takeDamage(20);
	claptrap1.attack("Red target");
	claptrap1.takeDamage(200);

	claptrap2.attack("Red target");
	claptrap2.attack("Blue target");
	claptrap2.attack("Green target");
	claptrap2.attack("Red target");
	claptrap2.attack("Blue target");
	claptrap2.attack("Green target");
	claptrap2.attack("Red target");
	claptrap2.attack("Blue target");
	claptrap2.attack("Green target");
	claptrap2.attack("Red target");
	claptrap2.attack("Blue target");	// Can't attack, no energy left!
	claptrap2.attack("Green target");
	claptrap2.beRepaired(20);			// Can't be repaired, no energy left!
	return (0);
}
