/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 20:43:36 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/09 21:31:21 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	private:
		const Fixed			_x;
		const Fixed			_y;
	public:
		Point(void);
		Point(const float x, const float y);
		Point(const Point &);
		Point	& operator=(const Point &);
		~Point();
		
		float	getX(void) const;
		float	getY(void) const;
};

std::ostream	&operator<<(std::ostream &, const Point &);

#endif /* !defined POINT_HPP */
