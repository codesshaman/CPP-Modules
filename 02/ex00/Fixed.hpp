/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:02:26 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/09 14:57:52 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

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
};

#endif /* FIXED_HPP */
