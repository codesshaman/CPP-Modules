/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 22:11:36 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/10 16:46:32 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	dtrap("DI4MOND-TP");
	DiamondTrap	dtrap2("DI4MOND-TP2");
	DiamondTrap	dtrap3(dtrap);

	dtrap2 = dtrap;
	dtrap.guardGate();
	dtrap.highFivesGuys();
	dtrap.attack("Green target");
	dtrap.takeDamage(30);
	dtrap.beRepaired(300);
	dtrap.attack("Green target");
	dtrap.takeDamage(1000);
	dtrap.attack("Green target");
	dtrap.takeDamage(10);
	dtrap.beRepaired(20);
	dtrap.guardGate();
	dtrap.highFivesGuys();

	dtrap.whoAmI();
	return (0);
}
