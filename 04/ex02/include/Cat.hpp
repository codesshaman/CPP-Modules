/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:18:02 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/16 16:56:13 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <string>

class Cat : public Animal
{
	private:
		Brain	*_brain;

	public:
		Cat();
		Cat(const Cat &);
		Cat(const std::string);
		Cat& operator=(const Cat &);
		~Cat();

		void              makeSound() const;
		const std::string getType() const;

		void printIdeas() const;
};

#endif /* CAT_HPP */
