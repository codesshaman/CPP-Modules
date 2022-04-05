/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:37:20 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/04/05 16:04:32 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <algorithm>
#include <iterator>
#include <limits>
#include <stdexcept>
#include <cstdlib>

Span::Span(void): _max_size(0)
{
	return ;
}

Span::Span(unsigned int max_size): _max_size(max_size)
{
	return ;
}

Span::Span(const Span &src): _max_size(src._max_size)
{
	return ;
}

Span	&Span::operator=(const Span &src)
{
	if (this == &src)
		return (*this);
	this->_max_size = src._max_size;
	this->_numbers = src._numbers;
	return (*this);
}

Span::~Span(void)
{
	return ;
}

void	Span::addNumber(int nb)
{
	if (this->_numbers.size() >= this->_max_size)
		throw (std::length_error("size limit reached"));
	this->_numbers.push_back(nb);
}

int	Span::shortestSpan(void) const
{
	int							ret;
	int							tmp;
	std::vector<int>::iterator	it;
	std::vector<int>::iterator	it2;
	std::vector<int>			numbers = this->_numbers;

	if (numbers.size() <= 1)
		throw std::logic_error("not enough numbers to return a span");
	ret = -1;
	for (it = numbers.begin(); it + 1 != numbers.end(); it++)
	{
		for (it2 = it + 1; it2 != numbers.end(); it2++)
		{
			tmp = *it2 > *it ? *it2 - *it : *it - *it2;
			if (ret == -1 || tmp < ret)
				ret = tmp;
		}
	}
	return (ret);
}

int	Span::longestSpan(void) const
{
	int							ret;
	int							tmp;
	std::vector<int>::iterator	it;
	std::vector<int>::iterator	it2;
	std::vector<int>			numbers = this->_numbers;

	if (numbers.size() <= 1)
		throw std::logic_error("not enough numbers to return a span");
	ret = -1;
	for (it = numbers.begin(); it + 1 != numbers.end(); it++)
	{
		for (it2 = it + 1; it2 != numbers.end(); it2++)
		{
			tmp = *it2 > *it ? *it2 - *it : *it - *it2;
			if (ret == -1 || tmp > ret)
				ret = tmp;
		}
	}
	return (ret);
}

void	Span::fillRandomNumbers(void)
{
	int		nb_left;

	nb_left = this->_max_size - this->getSize();
	for (int i = 0; i < nb_left; i++)
		this->addNumber(rand() % 42 + 1);
}

unsigned int	Span::getMaxSize(void) const
{
	return (this->_max_size);
}

int	Span::getSize(void) const
{
	return (this->_numbers.size());
}

std::ostream	& operator<<(std::ostream &o, const Span &s)
{
	o << "numbers limit: " << s.getMaxSize() << ", size: " << s.getSize() << ", shortest span: " << s.shortestSpan() << ", longest span: " << s.longestSpan();
	return (o);
}
