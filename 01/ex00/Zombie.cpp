/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 11:47:41 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/06 12:51:08 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void    Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name): _name(name)
{
    std::cout << "[DEBUG] " << this->_name << " was created." << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << "[DEBUG] " << this->_name << " was destroyed." << std::endl;
}
