/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 22:11:36 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/10 16:41:55 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ScavTrap	scavtrap1("SC4V-TP1");
	FragTrap	fragtrap1("FR4G-TP1");
	FragTrap	fragtrap2(fragtrap1);
	FragTrap	fragtrap3;
	
	fragtrap3 = fragtrap1;
	scavtrap1.guardGate();
	scavtrap1.attack("Red target");
	scavtrap1.takeDamage(30);
	scavtrap1.beRepaired(300);
	scavtrap1.attack("Red target");
	scavtrap1.takeDamage(1000);
	scavtrap1.attack("Red target");
	scavtrap1.takeDamage(10);
	scavtrap1.beRepaired(20);

	fragtrap1.highFivesGuys();
	fragtrap1.attack("Green target");
	fragtrap1.takeDamage(30);
	fragtrap1.beRepaired(300);
	fragtrap1.attack("Green target");
	fragtrap1.takeDamage(1000);
	fragtrap1.attack("Green target");
	fragtrap1.takeDamage(10);
	fragtrap1.beRepaired(20);
	fragtrap1.highFivesGuys();
	return (0);
}
