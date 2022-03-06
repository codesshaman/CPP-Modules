/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 12:17:55 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/06 13:15:38 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    int     i;
	Zombie	*zombie_horde = new Zombie[N];

    for (i = 0;i < N; i++)
        zombie_horde[i].setZombieName(name);
	return (zombie_horde);
}
