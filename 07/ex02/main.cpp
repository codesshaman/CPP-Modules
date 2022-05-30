/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:45:17 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/30 15:31:34 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	{
		Array<int>	int_array(5);
		std::cout << "> Int array" << std::endl;
		std::cout << "int_array.size(): " << int_array.size() << std::endl;
		try
		{
			for (unsigned int i = 0; i < int_array.size(); i++)
				int_array[i] = i * 42;
			for (unsigned int i = 0; i < int_array.size() + 1; i++)
				std::cout << "int_array[" << i << "]: " << int_array[i] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;

		Array<int>	empty_array;
		std::cout << "> Empty array" << std::endl;
		std::cout << "empty_array.size(): " << empty_array.size() << std::endl;
		try
		{
			for (unsigned int i = 0; i < empty_array.size() + 1; i++)
				std::cout << "empty_array[" << i << "]: " << empty_array[i] << std::endl;
		}
		catch (std::out_of_range& e)
		{
			std::cerr << e.what() << ": index out of range"<< std::endl;
		}
		std::cout << "> Assignement operator: empty_array = int_array;" << std::endl;
		empty_array = int_array;
		try
		{
			for (unsigned int i = 0; i < empty_array.size() + 1; i++)
				std::cout << "empty_array[" << i << "]: " << empty_array[i] << std::endl;
		}
		catch (std::out_of_range& e)
		{
			std::cerr << e.what() << ": index out of range"<< std::endl;
		}
	}
	std::cout << std::endl;
	{
		Array<std::string>	str_array(4);

		std::cout << "> String array" << std::endl;
		str_array[0] = "Hello";
		str_array[1] = ",";
		str_array[2] = " ";
		str_array[3] = "world!";
		try
		{
			for (unsigned int i = 0; i < str_array.size(); i++)
				std::cout << str_array[i];
			std::cout << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	
	return (0);
}
