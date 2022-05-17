/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:27:15 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/16 21:39:21 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>

// test purposes
template <class Tp>
static
void
test_value(std::vector<int>& array, Tp& end, int value)
{
	Tp it = easyfind(array, value);
	if (it != end)
		std::cout << "value " << value << " found" << std::endl;
	else
		std::cout << "no occurence found for value " << value << std::endl;
}

int	main(void)
{
	std::vector<int> array;

	// fill array with values
	for (int i = 0; i < 5; i++)
		array.push_back(i * 42);
	std::vector<int>::iterator end = array.end();
	for (std::vector<int>::iterator it = array.begin(); it != end; it++)
		std::cout << "array[i]: " << *it << std::endl;
	std::cout << "----------------" << std::endl;

	// find values in array
	test_value(array, end, 42);
	test_value(array, end, 84);
	test_value(array, end, 85);
	test_value(array, end, 0);
	test_value(array, end, 100);

	return (0);
}
