/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 13:14:58 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/16 16:55:57 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain
{
	private:
		std::string	ideas[100];

	public:
		Brain();
		Brain(const Brain &);
		Brain(const std::string);
		Brain& operator=(const Brain &);
		~Brain();

		void printIdeas() const;
};

#endif /* BRAIN_HPP */
