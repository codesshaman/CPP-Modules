/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:58:18 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/10 17:58:26 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_WrongCat_HPP
# define WRONG_WrongCat_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
	public:
		WrongCat(void);
		WrongCat(const WrongCat &);
		WrongCat		& operator=(const WrongCat &);
		~WrongCat(void);

		void				makeSound(void)const;
		const std::string	getType(void)const;
};

#endif /* !defined WRONG_WrongCat_HPP */
