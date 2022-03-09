/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 21:11:47 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/09 21:45:58 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float	ft_absf(float n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static float area(Point const &a, Point const &b, Point const &c)
{
   return ft_absf((a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / 2.0);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	// std::cout << "a" << a << " b" << b << " c" << c << " p" << point << std::endl;
	/* Calculate area of triangle ABC */
	float A = area(a, b, c);

	/* Calculate area of triangle PBC */
	float A1 = area(point, b, c);

	/* Calculate area of triangle PAC */
	float A2 = area(point, a, c);

	/* Calculate area of triangle PAB */
	float A3 = area(point, a, b);

	if (point.getX() == a.getX() || point.getY() == a.getY())
		return (0);
	if (point.getX() == b.getX() || point.getY() == b.getY())
		return (0);
	if (point.getX() == c.getX() || point.getY() == c.getY())
		return (0);
	return (A == A1 + A2 + A3);
}
