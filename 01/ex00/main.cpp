/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 10:52:17 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/06 12:12:06 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

void    example(Zombie *zombor)
{
    zombor->announce();
}

int main(void)
{
    // Creating a zombie on the heap
    Zombie  *zombor = newZombie("Zombor");
    // We can use the newly created zombie everywhere
    example(zombor);

    // Creating a zombie on the stack, automatically deleted when done
    randomChump("Zombax");

    // Manually delete what we're done using on the heap
    delete zombor;

    return (0);
}
