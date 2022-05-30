/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 20:35:00 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/30 14:22:07 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"
#include "utils.hpp"
#include <cstdlib>
#include <iostream>
#include <limits>

Converter::Converter(void)
	: _selected_type(typeNone),
	  _value_as_char(0),
	  _value_as_int(0),
	  _value_as_float(0.f),
	  _value_as_double(0)
{
}

Converter::Converter(const Converter& x)
	: _selected_type(x._selected_type),
	  _value_as_char(x._value_as_char),
	  _value_as_int(x._value_as_int),
	  _value_as_float(x._value_as_float),
	  _value_as_double(x._value_as_double)
{
}

Converter&
Converter::operator=(const Converter &rhs)
{
	this->_selected_type = rhs._selected_type;
	this->_value_as_char = rhs._value_as_char;
	this->_value_as_int = rhs._value_as_int;
	this->_value_as_float = rhs._value_as_float;
	this->_value_as_double = rhs._value_as_double;
	return (*this);
}

Converter::~Converter(void)
{
}

Converter::Type
Converter::check_for_pseudo_literals(const std::string &str) const
{
	int					i;
	const std::string	pseudo_floats[4] = {"inff", "+inff", "-inff", "nanf"};
	const std::string	pseudo_doubles[4] = {"inf", "+inf", "-inf", "nan"};

	for (i = 0; i < 4; i++)
	{
		if (str == pseudo_floats[i])
			return (typeFloat);
		if (str == pseudo_doubles[i])
			return (typeDouble);
	}
	return (typeNone);
}

Converter::Type
Converter::get_numeric_value_type(const std::string &str) const
{
	int    i;
	size_t nbdots;

	i = 0;
	if (str[0] == '-' && str[1])
		i++;
	if (str[i] == '.' && (str[i + 1] == 'f' || !str[i + 1]))
		return (typeNone);
	nbdots = 0;
	while (str[i] == '.' || ft_isdigit(str[i]))
	{
		if (str[i] == '.')
			nbdots++;
		if (nbdots > 1)
			return (typeNone);
		i++;
	}
	if (!str[i])
	{
		if (nbdots)
			return (typeDouble);
		return (typeInt);
	}
	if (str[i] == 'f' && !str[i + 1])
		return (typeFloat);
	return (typeNone);
}

bool
Converter::getType(const std::string &str)
{
	// int, float, double
	this->_selected_type = check_for_pseudo_literals(str);
	if (this->_selected_type != typeNone)
		return (true);
	if (ft_isdigit(str[0]) || str[0] == '.' || str[0] == '-')
	{
		this->_selected_type = get_numeric_value_type(str);
		if (this->_selected_type != typeNone)
			return (true);
	}

	// char
	if (str.length() > 1)
		return (false);
	this->_selected_type = typeChar;
	return (true);
}

void
Converter::setVariables(const char *str)
{
	if(this->_selected_type == typeChar)
		this->_value_as_char = str[0];
	else if (this->_selected_type == typeInt)
	{
		if (can_convert_to_int(atof(str), 0))
		{
			this->_value_as_int = atoi(str);
		}
		else
		{
			this->_value_as_int = 0;
			_selected_type = typeDouble;
			setVariables(str);
		}
	}
	else if (this->_selected_type == typeFloat)
	{
		if (can_convert_to_float(atof(str), 0))
			this->_value_as_float = atof(str);
		else
		{
			this->_value_as_float = 0;
			_selected_type = typeDouble;
			setVariables(str);
		}
	}
	else if (this->_selected_type == typeDouble)
		this->_value_as_double = atof(str);
}

void
Converter::printAsChar(void) const
{
	std::cout << "char: ";
	if (this->_selected_type == typeChar)
		std::cout << "\'" << this->_value_as_char << "\'";
	else if (this->_selected_type == typeInt && can_convert_to_char(this->_value_as_int))
		std::cout << static_cast<char>(this->_value_as_int);
	else if (this->_selected_type == typeFloat && can_convert_to_char(this->_value_as_float))
		std::cout << static_cast<char>(this->_value_as_float);
	else if (this->_selected_type == typeDouble && can_convert_to_char(this->_value_as_double))
		std::cout << static_cast<char>(this->_value_as_double);
	else if (this->_selected_type == typeImpossible)
		std::cout << "impossible";
	std::cout << std::endl;
}

void
Converter::printAsInt(void) const
{
	std::cout << "int: ";
	if (this->_selected_type == typeChar)
		std::cout << static_cast<int>(this->_value_as_char);
	else if (this->_selected_type == typeInt)
		std::cout << this->_value_as_int;
	else if (this->_selected_type == typeFloat && can_convert_to_int(this->_value_as_float, 1))
		std::cout << static_cast<int>(this->_value_as_float);
	else if (this->_selected_type == typeDouble && can_convert_to_int(this->_value_as_double, 1))
		std::cout << static_cast<int>(this->_value_as_double);
	else if (this->_selected_type == typeImpossible)
		std::cout << "impossible";
	std::cout << std::endl;
}

static inline
const char
*dot_zero(double n)
{
	if (n - static_cast<int>(n) == 0.0)
		return (".0");
	return ("");
}

void	Converter::printAsFloat(void) const
{
	std::cout << "float: ";
	if (this->_selected_type == typeChar)
		std::cout << static_cast<float>(this->_value_as_char) << ".0f";
	else if (this->_selected_type == typeInt)
		std::cout << static_cast<float>(this->_value_as_int) << ".0f";
	else if (this->_selected_type == typeFloat)
		std::cout << (this->_value_as_float) << dot_zero(this->_value_as_float) << "f";
	else if (this->_selected_type == typeDouble && can_convert_to_float(this->_value_as_double, 1))
		std::cout << (this->_value_as_double) << dot_zero(this->_value_as_double) << "f";
	else if (this->_selected_type == typeImpossible)
		std::cout << "impossible";
	std::cout << std::endl;
}

void	Converter::printAsDouble(void) const
{
	std::cout << "double: ";
	if (this->_selected_type == typeChar)
		std::cout << static_cast<double>(this->_value_as_char) << ".0";
	else if (this->_selected_type == typeInt)
		std::cout << static_cast<double>(this->_value_as_int) << ".0";
	else if (this->_selected_type == typeFloat)
		std::cout << (this->_value_as_float) << dot_zero(this->_value_as_float);
	else if (this->_selected_type == typeDouble)
		std::cout << (this->_value_as_double) << dot_zero(this->_value_as_double);
	else if (this->_selected_type == typeImpossible)
		std::cout << "impossible";
	std::cout << std::endl;
}

void
Converter::printTypes(void) const
{
	if (this->_selected_type == typeNone)
		return ;
	this->printAsChar();
	this->printAsInt();
	this->printAsFloat();
	this->printAsDouble();
}

int
Converter::convert(const char *str)
{
	if (!this->getType(str))
	{
		std::cerr << "error: invalid input" << std::endl;
		return (EXIT_FAILURE);
	}
	this->setVariables(str);
	this->printTypes();
	return (EXIT_SUCCESS);
}
