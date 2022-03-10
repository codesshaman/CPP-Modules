/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 22:11:36 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/10 16:45:13 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	claptrap1("CL4P-TP1");
	ScavTrap	scavtrap1("SC4V-TP1");
	ScavTrap	scavtrap2("SC4V-TP2");
	ScavTrap	scavtrap3;
	ScavTrap	scavtrap4(scavtrap1);

	scavtrap3 = scavtrap1;

	scavtrap1.attack("Red target");
	scavtrap1.attack("Red target");
	scavtrap1.attack("Red target");
	scavtrap1.guardGate();
	scavtrap1.takeDamage(5);
	scavtrap1.attack("Red target");
	scavtrap1.beRepaired(5);
	scavtrap1.attack("Red target");
	scavtrap1.takeDamage(20);
	scavtrap1.attack("Red target");
	scavtrap1.takeDamage(200);
	scavtrap1.beRepaired(20);
	
	scavtrap2.guardGate();
	scavtrap2.attack("Green target");
	scavtrap2.takeDamage(30);
	scavtrap2.beRepaired(300);
	scavtrap2.attack("Blue target");
	scavtrap2.takeDamage(1000);
	scavtrap2.attack("Red target");
	scavtrap2.takeDamage(10);
	scavtrap2.beRepaired(20);
	return (0);
}
