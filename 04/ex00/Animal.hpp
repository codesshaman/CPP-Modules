/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:18:50 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/31 11:23:44 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal
{
	protected:
		std::string	_type;

	public:
		Animal(void);
		Animal(const Animal &);
		Animal		& operator=(const Animal &);
		virtual	~Animal(void);
		
		virtual void				makeSound(void)const;
		virtual const std::string	getType(void)const;
};

#endif /* ANIMAL_HPP */
