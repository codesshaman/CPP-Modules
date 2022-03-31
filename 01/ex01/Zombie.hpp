/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 10:56:47 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/30 15:16:55 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
    private:
        std::string _name;
    public:
        Zombie(void);
        Zombie(std::string);
        ~Zombie(void);

        void    announce(void)const;
		void	setZombieName(std::string);
};

#endif /* ZOMBIE_HPP */
