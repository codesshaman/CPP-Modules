/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:18:02 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/10 17:51:16 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	private:
	public:
		Cat(void);
		Cat(const Cat &);
		Cat		& operator=(const Cat &);
		~Cat(void);

		void				makeSound(void)const;
		const std::string	getType(void)const;
};

#endif /* !defined CAT_HPP */
