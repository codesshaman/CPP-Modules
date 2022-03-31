/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:45:17 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/31 12:36:13 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	unsigned int		i;
	Array<int>			int_array(5);
	Array<int>			empty_array;
	Array<std::string>	str_array(4);

	std::cout << "> Int array" << std::endl;
	try {
		for (i = 0; i < int_array.size(); i++)
			int_array[i] = i * 42;
		for (i = 0; i < int_array.size() + 1; i++)
			std::cout << "int_array[" << i << "]: " << int_array[i] << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	std::cout << "> Empty array" << std::endl;
	try {
		for (i = 0; i < empty_array.size() + 1; i++)
			std::cout << "empty_array[" << i << "]: " << empty_array[i] << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "> Assignement operator: empty_array = int_array;" << std::endl;
	empty_array = int_array;
	try {
		for (i = 0; i < empty_array.size() + 1; i++)
			std::cout << "empty_array[" << i << "]: " << empty_array[i] << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "> String array" << std::endl;
	str_array[0] = "Hello";
	str_array[1] = ",";
	str_array[2] = " ";
	str_array[3] = "world!";
	try {
		for (i = 0; i < str_array.size(); i++)
			std::cout << str_array[i];
		std::cout << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}
