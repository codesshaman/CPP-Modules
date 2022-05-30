/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 20:02:50 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/30 13:31:31 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits>	// std::numeric_limits
#include <cmath>	// std::isnan
#include <iostream>	// std::cout

bool	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

bool	can_convert_to_char(double n)
{
	if (n - static_cast<int>(n) || n < 0 || n > 127)
		std::cout << "impossible";
	else if (n < 32)
		std::cout << "non displayable";
	else
		return (true);
	return (false);
}

bool	can_convert_to_int(double n, bool p)
{
	if (n >= std::numeric_limits<int>::min() && n <= std::numeric_limits<int>::max()
		&& n != std::numeric_limits<double>::infinity()
		&& n != -std::numeric_limits<double>::infinity()
		&& n != std::numeric_limits<double>::quiet_NaN())
		return (true);
	if (p)
		std::cout << "impossible";
	return (false);
}

bool	can_convert_to_float(double n, bool p)
{
	if ((n >= -std::numeric_limits<float>::max() && n <= std::numeric_limits<float>::max())
		|| n == std::numeric_limits<double>::infinity()
		|| n == -std::numeric_limits<double>::infinity()
		|| std::isnan(n))
		return (true);
	if (p)
		std::cout << "impossible";
	return (false);
}
