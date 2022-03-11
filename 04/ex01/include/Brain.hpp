/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 13:14:58 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/11 17:07:45 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain
{
	private:
		std::string	ideas[100];
	public:
		Brain(void);
		Brain(const Brain &);
		Brain	& operator=(const Brain &);
		~Brain(void);

		Brain(const std::string);
		void	printIdeas(void)const;
};

#endif /* !defined BRAIN_HPP */
