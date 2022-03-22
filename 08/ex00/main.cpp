/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:27:15 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/22 14:34:00 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>


// test purposes
template <typename T>
static void	test_it(T &it, T end)
{
	if (it != end)
		std::cout << "value: " << *it << std::endl;
	else
		std::cout << "no occurence found" << std::endl;
}

int	main(void)
{
	int							i;
	std::vector<int>				array;
	std::vector<int>::iterator	it;

	// fill array with values
	for (i = 0; i < 5; i++)
		array.push_back(i * 42);
	for (it = array.begin(); it != array.end(); it++)
		std::cout << *it << std::endl;
	std::cout << "---" << std::endl;

	// find values in array
	it = easyfind(array, 42);
	test_it(it, array.end());

	it = easyfind(array, 84);
	test_it(it, array.end());

	it = easyfind(array, 85);
	test_it(it, array.end());

	return (0);
}
