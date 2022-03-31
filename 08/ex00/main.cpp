/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:27:15 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/31 12:44:33 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>


// test purposes
template <typename T>
static void	test_value(std::vector<int> &array, T &end, int value)
{
	T	it;

	it = easyfind(array, value);
	if (it != end)
		std::cout << "value " << value << " found" << std::endl;
	else
		std::cout << "no occurence found for value " << value << std::endl;
}

int	main(void)
{
	int							i;
	std::vector<int>				array;
	std::vector<int>::iterator	it;
	std::vector<int>::iterator	end;

	// fill array with values
	for (i = 0; i < 5; i++)
		array.push_back(i * 42);
	for (it = array.begin(); it != array.end(); it++)
		std::cout << "array[i]: " << *it << std::endl;
	std::cout << "----------------" << std::endl;

	// find values in array
	end = array.end();
	test_value(array, end, 42);
	test_value(array, end, 84);
	test_value(array, end, 85);
	test_value(array, end, 0);
	test_value(array, end, 100);

	return (0);
}
