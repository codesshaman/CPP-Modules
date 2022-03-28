/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 20:51:25 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/28 18:33:27 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(void): _x(0), _y(0)
{
	return ;
}

Point::Point(const float x, const float y): _x(x), _y(y)
{
	return ;
}

Point::Point(const Point &rhs): _x(rhs._x), _y(rhs._y)
{
	return ;
}

Point	&Point::operator=(const Point &rhs)
{
	(void)rhs;
	return (*this);
}

float	Point::getX(void) const
{
	return (this->_x.toFloat());
}

float	Point::getY(void) const
{
	return (this->_y.toFloat());
}

Point::~Point(void)
{
	return ;
}

std::ostream	&operator<<(std::ostream &o, const Point &rhs)
{
	o << "(" << rhs.getX() << ", " << rhs.getY() << ")";
	return (o);
}
