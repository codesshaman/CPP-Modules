/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:37:20 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/06/03 17:29:23 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <algorithm>
#include <limits>
#include <stdexcept>
#include <cstdlib>

Span::Span()
	: _max_size(0)
{
}

Span::Span(unsigned int max_size)
	: _max_size(max_size)
{
}

Span::Span(const Span &src)
	: _max_size(src._max_size)
{
}

Span&
Span::operator=(const Span& src)
{
	if (this == &src)
		return (*this);
	this->_max_size = src._max_size;
	this->_numbers = src._numbers;
	return (*this);
}

Span::~Span(void)
{
}

void
Span::addNumber(int nb)
{
	if (this->_numbers.size() >= this->_max_size)
		throw (std::length_error("size limit reached"));
	this->_numbers.push_back(nb);
}

int
Span::shortestSpan(void) const
{
	std::vector<int> numbers = this->_numbers;

	if (numbers.size() <= 1)
		throw std::logic_error("not enough numbers to return a span");
	std::sort(numbers.begin(), numbers.end());
	int ret = *(numbers.begin() + 1) - *(numbers.begin());
	if (_max_size == 2)
		return (ret);
	for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end() - 1 && ret != 0; it++)
	{
		if (*(it + 1) - *it < ret)
			ret = *(it + 1) - *it;
	}
	return ret;
}

int
Span::longestSpan(void) const
{
	std::vector<int> numbers = this->_numbers;

	if (numbers.size() <= 1)
		throw std::logic_error("not enough numbers to return a span");
	std::sort(numbers.begin(), numbers.end());
	return *(numbers.end() - 1) - *(numbers.begin());
}

void
Span::fillRandomNumbers(void)
{
	int nb_left = this->_max_size - this->getSize();
	for (int i = 0; i < nb_left; i++)
		this->addNumber(rand() % 42 + 1);
}

void
Span::rangeFill(iterator first, iterator last)
{
	for (; first != last; first++)
		addNumber(*first);
}

unsigned int
Span::getMaxSize(void) const
{
	return _max_size;
}

int
Span::getSize(void) const
{
	return _numbers.size();
}

std::ostream&
operator<<(std::ostream& o, const Span& s)
{
	o << "numbers limit: " << s.getMaxSize() << ", size: " << s.getSize() << ", shortest span: " << s.shortestSpan() << ", longest span: " << s.longestSpan();
	return (o);
}
