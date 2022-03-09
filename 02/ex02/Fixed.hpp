/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:02:26 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/09 16:48:18 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					_number_value;
		static const int	_fractional_bits;

	public:
		Fixed();							// Default constructor
		Fixed(const Fixed &);				// Copy constructor
		Fixed & operator=(const Fixed &);	// Assignment operator overload
		~Fixed();							// Destructor

		Fixed(const int);
		Fixed(const float);

		int		toInt(void)const;
		float	toFloat(void)const;

		int					getRawBits(void)const;
		void				setRawBits(int const);
};

std::ostream & operator<<(std::ostream &, const Fixed &);

#endif /* FIXED_HPP */
