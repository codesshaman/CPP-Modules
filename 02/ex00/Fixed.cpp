/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:34:33 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/09 15:01:10 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	_fractional_bits = 8;

/* Default constructor */
Fixed::Fixed(void): _number_value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

/* Copy constructor */
Fixed::Fixed(const Fixed & rhs): _number_value(rhs._number_value)
{
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

/* Assignment operator overload */
Fixed & Fixed::operator=(const Fixed & rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	this->_number_value = rhs._number_value;
	return *this;
}

/* Destructor */
Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_number_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_number_value = raw;
	return ;
}
