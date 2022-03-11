/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:18:50 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/11 17:15:50 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined ANIMAL_HPP
# define ANIMAL_HPP

# include "Animal.hpp"
# include <string>

class Animal
{
	protected:
		std::string	_type;
		Animal(void);
		Animal(const Animal &);
	public:
		Animal		& operator=(const Animal &);
		virtual	~Animal(void);
		
		virtual void				makeSound(void)const;
		virtual const std::string	getType(void)const;
};

#endif /* !defined ANIMAL_HPP */
