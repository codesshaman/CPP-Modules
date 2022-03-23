/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 10:56:47 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/23 11:53:32 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined ZOMBIE_HPP
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

#endif /* !defined ZOMBIE_HPP */
