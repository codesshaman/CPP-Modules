/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:18:50 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/16 17:29:14 by ugdaniel         ###   ########.fr       */
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
		Animal();
		Animal(const Animal &);
		Animal& operator=(const Animal &);
		virtual	~Animal();
		
		virtual void              makeSound() const;
		virtual const std::string getType() const;
};

#endif /* ANIMAL_HPP */
