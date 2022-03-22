/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:35:07 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/22 16:15:55 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined SPAN_HPP
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

		unsigned int	getMaxSize(void) const {
			return (this->_max_size);
		}

		int				getSize(void) const {
			return (this->_numbers.size());
		}
};

std::ostream	& operator<<(std::ostream &, const Span &);

#endif /* !defined SPAN_HPP */
