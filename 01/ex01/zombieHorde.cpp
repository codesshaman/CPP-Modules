/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 12:17:55 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/26 17:16:42 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie  *zombieHorde(int N, std::string name)
{
    int     i;
	Zombie	*zombie_horde = new Zombie[N];

	if (!zombie_horde)
	{
		std::cerr << "[DEBUG]: error: could not allocate a new horde of " << N << " zombie(s)" << std::endl;
		return (nullptr);
	}
    for (i = 0;i < N; i++)
        zombie_horde[i].setZombieName(name);
	return (zombie_horde);
}
