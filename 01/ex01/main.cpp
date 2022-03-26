/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 12:18:42 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/26 17:17:21 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie  *zombieHorde(int N, std::string name);

static void	create_zombie_horde(int N, std::string name)
{
	int		i;
	Zombie	*horde;

    horde = zombieHorde(N, name);
	if (!horde)
		return ;
	for (i = 0; i < N; i++)
		horde[i].announce();

	delete [] horde;
}

int main(void)
{
	create_zombie_horde(1, "1 zombie");
	create_zombie_horde(5, "5 zombies");
	create_zombie_horde(10, "10 zombies");
	create_zombie_horde(0, "0 zombies");
	create_zombie_horde(2, "2 zombies");
    return (0);
}
