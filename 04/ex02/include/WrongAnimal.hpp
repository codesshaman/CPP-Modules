/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:57:18 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/31 11:27:30 by ugdaniel         ###   ########.fr       */
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
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &);
		WrongAnimal		& operator=(const WrongAnimal &);
		virtual	~WrongAnimal(void);
		
		virtual void				makeSound(void)const;
		virtual const std::string	getType(void)const;
};

#endif /* WRONG_ANIMAL_HPP */
