/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:35:07 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/16 21:45:41 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>

class Span
{
private:
	unsigned int     _max_size;
	std::vector<int> _numbers;

public:
	Span(void);
	Span(unsigned int);
	Span(const Span&);
	Span& operator=(const Span &);
	~Span(void);

	void         addNumber(int);
	void         fillRandomNumbers(void);
	int          shortestSpan(void) const;
	int          longestSpan(void) const;
	int          getSize(void) const;
	unsigned int getMaxSize(void) const;
};

std::ostream&
operator<<(std::ostream &, const Span &);

#endif /* SPAN_HPP */
