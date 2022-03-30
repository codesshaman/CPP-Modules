/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 10:56:47 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/30 15:08:27 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
    private:
        std::string _name;
        Zombie(void);

    public:
        Zombie(std::string);
        ~Zombie(void);
        void    announce(void);
}; // class Zombie

#endif /* ZOMBIE_HPP */
