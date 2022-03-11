/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:18:59 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/11 14:26:30 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*_brain;
	public:
		Dog(void);
		Dog(const Dog &);
		Dog		& operator=(const Dog &);
		~Dog(void);

		void				makeSound(void)const;
		const std::string	getType(void)const;

		Dog(const std::string);
		void	print_ideas(void)const;
};

#endif /* !defined DOG_HPP */
