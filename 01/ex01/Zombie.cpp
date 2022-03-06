/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 11:47:41 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/06 13:27:32 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void    Zombie::announce(void) const
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setZombieName(std::string name)
{
	this->_name = name;	
}

Zombie::Zombie(std::string name): _name(name)
{
    std::cout << "[DEBUG] " << this->_name << " was created." << std::endl;
}

Zombie::Zombie(void)
{
    std::cout << "[DEBUG] A new unnamed zombie was created." << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << "[DEBUG] " << this->_name << " was destroyed." << std::endl;
}
