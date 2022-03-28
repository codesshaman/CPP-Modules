/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:06:01 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/28 18:44:39 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

static void	tests(int value_of_b, float value_of_c)
{
	std::cout << "Fixed a created" << std::endl;
	Fixed a;
	std::cout << "Value of a: " << a << std::endl;

	const Fixed b(value_of_b);
	std::cout << "Fixed b created with int value (" << value_of_b << ")." << std::endl;
	std::cout << "Value of b: " << b << std::endl;

	const Fixed c(value_of_c);
	std::cout << "Fixed c created with float value (" << value_of_c << ")" << std::endl;
	std::cout << "Value of c: " << c << std::endl;

	Fixed d(c);
	std::cout << "Fixed d created with Fixed value (c)" << std::endl;
	std::cout << "Value of d is: " << d << std::endl;

	std::cout << "Assignment operator called on a with b" << std::endl;
	a = b;
	std::cout << "Value of a: " << a << std::endl << std::endl;

	std::cout << "a < c is " << (a < c) << std::endl;
	std::cout << "a < b is " << (a < b) << std::endl;
	std::cout << "a > c is " << (a > c) << std::endl;
	std::cout << "a > b is " << (a > b) << std::endl;
	std::cout << "a <= c is " << (a <= c) << std::endl;
	std::cout << "a <= b is " << (a <= b) << std::endl;
	std::cout << "a >= c is " << (a >= c) << std::endl;
	std::cout << "a >= b is " << (a >= b) << std::endl;
	std::cout << "a == c is " << (a == c) << std::endl;
	std::cout << "a == b is " << (a == b) << std::endl;
	std::cout << "a != c is " << (a != c) << std::endl;
	std::cout << "a != b is " << (a != b) << std::endl << std::endl;

	std::cout << "c + a = " << (c + a) << std::endl;
	std::cout << "c - a = " << (c - a) << std::endl;
	std::cout << "c * a = " << (c * a) << std::endl;
	std::cout << "c / a = " << (c / a) << std::endl << std::endl;

	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "Value of a is: " << a << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "Value of a is: " << a << std::endl;
	std::cout << "a-- = " << a-- << std::endl;
	std::cout << "Value of a is: " << a << std::endl;
	std::cout << "--a = " << --a << std::endl;
	std::cout << "Value of a is: " << a << std::endl << std::endl;

	std::cout << "c.toInt() = " << c.toInt() << std::endl;
	std::cout << "c.toFloat() = " << c.toFloat() << std::endl;
	std::cout << "min(a, d) = " << Fixed::min(a, d) << std::endl;
	std::cout << "min(b, c) = " << Fixed::min(b, c) << std::endl;
	std::cout << "max(a, d) = " << Fixed::max(a, d) << std::endl;
	std::cout << "max(b, c) = " << Fixed::max(b, c) << std::endl;
}

int	main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << "---------------------------------------" << std::endl;
	tests(14, 50.125f);
	std::cout << "---------------------------------------" << std::endl;
	tests(-12, -80.175829380f);

	return (0);
}
