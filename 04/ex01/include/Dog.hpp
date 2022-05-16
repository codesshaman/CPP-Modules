/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:18:59 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/16 17:29:14 by ugdaniel         ###   ########.fr       */
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
		Dog();
		Dog(const Dog &);
		Dog(const std::string&);
		Dog& operator=(const Dog&);
		~Dog();

		void              makeSound()  const;
		void	          printIdeas() const;
		const std::string getType()    const;
};

#endif /* DOG_HPP */
