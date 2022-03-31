/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:18:02 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/31 11:21:34 by ugdaniel         ###   ########.fr       */
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
		Cat(void);
		Cat(const Cat &);
		Cat		& operator=(const Cat &);
		~Cat(void);

		void				makeSound(void)const;
		const std::string	getType(void)const;

		Cat(const std::string);
		void	printIdeas(void)const;
};

#endif /* CAT_HPP */
