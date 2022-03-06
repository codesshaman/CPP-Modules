/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 12:18:42 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/06 13:56:34 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

Zombie  *zombieHorde(int N, std::string name);

static void	zombies(int N, std::string name)
{
	int		i;
	Zombie	*horde;

    horde = zombieHorde(N, name);
	for (i = 0; i < N; i++)
		horde[i].announce();
	
	// Horde is an array: add brackets before pointer
	delete [] horde;
}

int main(void)
{
	zombies(1, "1 zombie");
	zombies(5, "5 zombies");
	zombies(10, "10 zombies");
	zombies(0, "0 zombies");
	zombies(2, "2 zombies");
    return (0);
}
