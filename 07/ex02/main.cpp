/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:45:17 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/06/02 15:07:31 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

#define MAX_VAL 750
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
	if (0)
	{
		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		//SCOPE
		{
			Array<int> tmp = numbers;
			Array<int> test(tmp);
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		try
		{
			numbers[-2] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			numbers[i] = rand();
		}
		delete [] mirror;//
		return 0;
	}
	return (0);
}
