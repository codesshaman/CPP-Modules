/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:05:05 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/10 16:43:17 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <string>

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		DiamondTrap(void);
		std::string	_name;
	public:
		DiamondTrap(const DiamondTrap &);
		DiamondTrap(const std::string);
		DiamondTrap		& operator=(const DiamondTrap &);
		~DiamondTrap(void);

		void			whoAmI(void)const;
};

#endif /* !defined DIAMONDTRAP_HPP */
