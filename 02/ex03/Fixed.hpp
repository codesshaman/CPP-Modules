/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:02:26 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/09 20:49:30 by ugdaniel         ###   ########.fr       */
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

		int					getRawBits(void)const;
		void				setRawBits(int const);

		Fixed(const int);
		Fixed(const float);

		int					toInt(void)const;
		float				toFloat(void)const;

		bool				operator>(const Fixed &)const;
		bool				operator<(const Fixed &)const;
		bool				operator>=(const Fixed &)const;
		bool				operator<=(const Fixed &)const;
		bool				operator==(const Fixed &)const;
		bool				operator!=(const Fixed &)const;

		Fixed				operator+(const Fixed &)const;
		Fixed				operator-(const Fixed &)const;
		Fixed				operator*(const Fixed &)const;
		Fixed				operator/(const Fixed &)const;

		/* pre-increment/pre-decrement */
		Fixed				&operator++(void);
		Fixed				&operator--(void);

		/* post-increment/post-decrement
		 * int is unused, though the compiler needs it to tell the functions apart */
		Fixed				operator++(int);
		Fixed				operator--(int);

		static Fixed		&min(Fixed &, Fixed &);
		const static Fixed	&min(const Fixed &, const Fixed &);
		static Fixed		&max(Fixed &, Fixed &);
		const static Fixed	&max(const Fixed &, const Fixed &);
};

std::ostream & operator<<(std::ostream &, const Fixed &fixed);

#endif /* FIXED_HPP */
