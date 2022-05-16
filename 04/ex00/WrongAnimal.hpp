/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:57:18 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/16 17:29:11 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <string>

class WrongAnimal
{
	protected:
		std::string	_type;

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal&);
		WrongAnimal& operator=(const WrongAnimal&);
		virtual	~WrongAnimal();
		
		/* virtual */ void        makeSound() const;
		virtual const std::string getType() const;
};

#endif /* WRONG_ANIMAL_HPP */
