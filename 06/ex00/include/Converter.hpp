/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 20:02:59 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/31 11:55:08 by ugdaniel         ###   ########.fr       */
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

		int8_t	_selected_type;
		char	_value_as_char;
		int		_value_as_int;
		float	_value_as_float;
		double	_value_as_double;

		void		initValues(void);
		bool		getType(const std::string &);
		int			check_for_pseudo_literals(const std::string &str) const;
		int			get_numeric_value_type(const std::string &str) const;
		void		setVariables(const std::string &str);
		void		printTypes(void) const;
		void		printAsChar(void) const;
		void		printAsInt(void) const;
		void		printAsFloat(void) const;
		void		printAsDouble(void) const;

	public:
		Converter(void);
		Converter(const Converter &);
		Converter	& operator=(const Converter &);
		~Converter(void);

		int			convert(const std::string);
};

#endif /* CONVERT_HPP */
