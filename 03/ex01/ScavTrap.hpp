/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:14:22 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/10 12:25:15 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string);
		ScavTrap	& operator=(const ScavTrap &);
		~ScavTrap(void);
		void	guardGate(void);
};

#endif /* !defined SCAVTRAP_HPP */
