/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:34:33 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/30 16:01:32 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int Fixed::_fractional_bits = 8;

/* Default constructor */
Fixed::Fixed(void): _number_value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

/* Copy constructor */
Fixed::Fixed(const Fixed &rhs): _number_value(rhs._number_value)
{
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

/* Assignment operator overload */
Fixed & Fixed::operator=(const Fixed &rhs)
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

/* Converts an int to the corresponding fixed-point value */
Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	this->_number_value = i << this->_fractional_bits;
	return ;
}

/* Converts a float to the corresponding fixed-point value */
Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_number_value = roundf(f * pow(2, this->_fractional_bits));
	return ;
}

int	Fixed::toInt(void) const
{
	return (this->_number_value >> this->_fractional_bits);
}

float	Fixed::toFloat(void) const
{
	return ((float)(this->_number_value / pow(2, this->_fractional_bits)));
}

std::ostream & operator<<(std::ostream &o, const Fixed &rhs)
{
	o << rhs.toFloat();
	return (o);
}
