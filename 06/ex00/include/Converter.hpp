/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 20:02:59 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/30 13:10:24 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <string>

class	Converter
{
private:
	enum Type
	{
		typeNone = -1,
		typeChar,
		typeInt,
		typeFloat,
		typeDouble,
		typeImpossible
	};

	Type   _selected_type;
	char   _value_as_char;
	int    _value_as_int;
	float  _value_as_float;
	double _value_as_double;

private:
	bool getType(const std::string&);
	Type check_for_pseudo_literals(const std::string& str) const;
	Type get_numeric_value_type(const std::string& str) const;
	void setVariables(const char *str);
	void printTypes(void) const;
	void printAsChar(void) const;
	void printAsInt(void) const;
	void printAsFloat(void) const;
	void printAsDouble(void) const;

public:
	Converter(void);
	Converter(const Converter&);
	Converter& operator=(const Converter&);
	~Converter(void);

	int convert(const char *str);
};

#endif /* CONVERT_HPP */
