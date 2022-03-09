/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:06:01 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/09 21:52:13 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

bool bsp(Point const a, Point const b, Point const c, Point const point);

static void	is_inside(Point const &a, Point const &b, Point const &c, Point const &p)
{
	if (bsp(a, b, c, p))
		std::cout << "Inside";
	else
		std::cout << "Not inside";
	std::cout << std::endl;
}

int	main(void)
{
	// Point(x, y);
	Point	a(0, 0);
	Point	b(20, 0);
	Point	c(10, 30);

	Point	p1(5, 5);
	Point	p2(10, 0);
	Point	p3(13, 26);
	Point	p4(9, 22);

	is_inside(a, b, c, p1);
	is_inside(a, b, c, p2);
	is_inside(a, b, c, p3);
	is_inside(a, b, c, p4);
	return (0);
}
