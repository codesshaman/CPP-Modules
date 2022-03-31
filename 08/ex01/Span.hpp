/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:35:07 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/31 12:47:06 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>

class Span
{
	private:
		unsigned int		_max_size;
		std::vector<int>	_numbers;

	public:
		Span(void);
		Span(unsigned int);
		Span(const Span &);
		Span	&		operator=(const Span &);
		~Span(void);

		void			addNumber(int);
		int				shortestSpan(void) const;
		int				longestSpan(void) const;
		void			fillRandomNumbers(void);

		unsigned int	getMaxSize(void) const;
		int				getSize(void) const;
};

std::ostream	& operator<<(std::ostream &, const Span &);

#endif /* SPAN_HPP */
