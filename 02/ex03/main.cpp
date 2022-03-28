/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:06:01 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/28 18:43:40 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

bool bsp(Point const a, Point const b, Point const c, Point const point);

static void	is_inside(Point const &a, Point const &b, Point const &c, Point const &p)
{
	static int	x = 1;

	std::cout << "p" << x << p << " is ";
	if (bsp(a, b, c, p))
		std::cout << "inside";
	else
		std::cout << "not inside";
	std::cout << " the triangle" << std::endl;
	x++;
}

int	main(void)
{
	{
		// Point(x, y);
		Point	a(0, 0);
		Point	b(20, 0);
		Point	c(10, 30);
		Point	p1(5, 5);
		Point	p2(10, 0);
		Point	p3(13, 26);
		Point	p4(9, 22);
		Point	p5(-1, -1);
		Point	p6(7, 18);

		std::cout << "Triangle ABC: (" << a << ", " << b << ", " << c << ")" << std::endl;
		is_inside(a, b, c, p1);
		is_inside(a, b, c, p2);
		is_inside(a, b, c, p3);
		is_inside(a, b, c, p4);
		is_inside(a, b, c, p5);
		is_inside(a, b, c, p6);
	}
	std::cout << std::endl;
	{
		Point	a(-7, -11);
		Point	b(19, 2);
		Point	c(12, 21);
		Point	p7(5, 5);
		Point	p8(10, 0);
		Point	p9(13, 26);
		Point	p10(3, -6);
		Point	p11(-1, -5);
		Point	p12(-3, 8);

		std::cout << "Triangle ABC: (" << a << ", " << b << ", " << c << ")" << std::endl;
		is_inside(a, b, c, p7);
		is_inside(a, b, c, p8);
		is_inside(a, b, c, p9);
		is_inside(a, b, c, p10);
		is_inside(a, b, c, p11);
		is_inside(a, b, c, p12);
	}
	return (0);
}
