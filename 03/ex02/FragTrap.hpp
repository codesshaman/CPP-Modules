/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:05:21 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/10 16:39:39 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(const FragTrap &);
		FragTrap(std::string);
		FragTrap	& operator=(const FragTrap &);
		~FragTrap(void);
		void		highFivesGuys(void)const;
};

#endif /* !defined FRAGTRAP_HPP */
