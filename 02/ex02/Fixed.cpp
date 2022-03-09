/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:34:33 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/09 20:59:15 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

static int		ft_pow(const int val, const int power)
{
	int		i;
	int		result;

	i = 0;
	result = 1;
	while (i < power)
	{
		result *= val;
		i++;
	}
	return (result);
}

const int Fixed::_fractional_bits = 8;

/* Default constructor */
Fixed::Fixed(void) : _number_value(0)
{
	//std::cout << "Default constructor called" << std::endl;
	return;
}

/* Copy constructor */
Fixed::Fixed(const Fixed &rhs) : _number_value(rhs._number_value)
{
	//std::cout << "Copy constructor called" << std::endl;
	return;
}

/* Assignment operator overload */
Fixed &Fixed::operator=(const Fixed &rhs)
{
	//std::cout << "Assignment operator called" << std::endl;
	this->_number_value = rhs._number_value;
	return (*this);
}

/* Destructor */
Fixed::~Fixed(void)
{
	//std::cout << "Destructor called" << std::endl;
	return;
}

int Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_number_value);
}

void Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->_number_value = raw;
	return;
}

/* Converts an int to the corresponding fixed-point value */
Fixed::Fixed(const int i)
{
	//std::cout << "Int constructor called" << std::endl;
	this->_number_value = i << Fixed::_fractional_bits;
	return;
}

/* Converts a float to the corresponding fixed-point value */
Fixed::Fixed(const float f)
{
	//std::cout << "Float constructor called" << std::endl;
	this->_number_value = roundf(f * ft_pow(2, Fixed::_fractional_bits));
	return;
}

int Fixed::toInt(void) const
{
	return (this->_number_value >> Fixed::_fractional_bits);
}

float Fixed::toFloat(void) const
{
	return ((float)this->_number_value / ft_pow(2, Fixed::_fractional_bits));
}

std::ostream &operator<<(std::ostream &o, const Fixed &rhs)
{
	o << rhs.toFloat();
	return (o);
}

bool	Fixed::operator>(const Fixed &rhs) const
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator<(const Fixed &rhs) const
{
	return (rhs > *this);
}

bool	Fixed::operator>=(const Fixed &rhs) const
{
	return (!(*this < rhs));
}

bool	Fixed::operator<=(const Fixed &rhs) const
{
	return (!(*this > rhs));
}

bool	Fixed::operator==(const Fixed &rhs) const
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool	Fixed::operator!=(const Fixed &rhs) const
{
	return (!(*this == rhs));
}

/* To add or subtract two values with the same implicit scaling factor,
 * it is sufficient to add or subtract the underlying integers;
 * the result will have their common implicit scaling factor,can thus can be
 * stored in the same program variables as the operands.
 * 
 * Both factors have the same scaling factor, we can add/substract them directly */
Fixed	Fixed::operator+(const Fixed &rhs) const
{
	Fixed	result;

	result.setRawBits(this->getRawBits() + rhs.getRawBits());
	return (result);
}

Fixed	Fixed::operator-(const Fixed &rhs) const
{
	Fixed	result;

	result.setRawBits(this->getRawBits() - rhs.getRawBits());
	return (result);
}

/* Multiplication and division are done first. The scaling factor for the product
 * is the multiplicand's fractional bits + the multiplier fractional bits */
Fixed	Fixed::operator*(const Fixed &rhs) const
{
	Fixed	result(this->toFloat() * rhs.toFloat());

	return (result);
}

Fixed	Fixed::operator/(const Fixed &rhs) const
{
	Fixed	result(this->toFloat() / rhs.toFloat());

	return (result);
}

/* pre-increment */
Fixed &Fixed::operator++(void)
{
	this->_number_value++;
	return (*this);
}

/* pre-decrement */
Fixed &Fixed::operator--(void)
{
	this->_number_value--;
	return (*this);
}

/* post-increment
 * int is unused, though the compiler needs it to tell the functions apart */
Fixed Fixed::operator++(int)
{
	Fixed	old(*this);

	++(*this);
	return (old);
}

/* post-decrement */
Fixed Fixed::operator--(int)
{
	Fixed	old(*this);

	--(*this);
	return (old);
}

Fixed &Fixed::min(Fixed &lhs, Fixed &rhs)
{
	if (lhs < rhs)
		return (lhs);
	return (rhs);
}

const Fixed &Fixed::min(const Fixed &lhs, const Fixed &rhs)
{
	if (lhs < rhs)
		return (lhs);
	return (rhs);
}

Fixed &Fixed::max(Fixed &lhs, Fixed &rhs)
{
	if (lhs > rhs)
		return (lhs);
	return (rhs);
}

const Fixed &Fixed::max(const Fixed &lhs, const Fixed &rhs)
{
	if (lhs > rhs)
		return (lhs);
	return (rhs);
}
