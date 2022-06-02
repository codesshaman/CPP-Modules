/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:27:15 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/06/02 15:20:46 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>

// test purposes
template <class Tp>
static inline void
test_value(std::vector<Tp>& v, Tp value)
{
	if (easyfind(v, value) != v.end())
		std::cout << "value " << value << " found" << std::endl;
	else
		std::cout << "no occurence found for value " << value << std::endl;
}

int	main(void)
{
	std::vector<int> v;

	// fill vector with values
	v.reserve(5);
	for (int i = 0; i < 5; i++)
	{
		v.push_back(i * 42);
		std::cout << "v[" << i << "]: " << v[i] << std::endl;
	}
	std::cout << "----------------" << std::endl;

	// find values in vector
	test_value(v, 0);
	test_value(v, 42);
	test_value(v, 84);
	test_value(v, 85);
	test_value(v, 100);
	test_value(v, 168);
	test_value(v, 99999);

	return (0);
}
