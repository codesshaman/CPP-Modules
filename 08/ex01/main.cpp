/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:27:15 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/16 21:40:55 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <vector>
#include <iostream>
#include <ctime>

int	main(void)
{
	srand((unsigned) time(0));
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << "-------------" << std::endl;
	{
		Span	span1(5);
		Span	span2(20000);

		span1.addNumber(2);
		try
		{
			std::cout << span1 << std::endl;
		}
		catch (std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		span1.addNumber(5);
		span1.addNumber(10);
		std::cout << "'span1': " << span1 << std::endl;
		span1.addNumber(42);
		span1.addNumber(21);
		std::cout << "'span1': " << span1 << std::endl;
		try
		{
			span1.addNumber(100);
		}
		catch (std::exception& e)
		{
			std::cerr << "could not add number: " << e.what() << std::endl;
		}

		span2.fillRandomNumbers();
		std::cout << "'span2': " << span2 << std::endl;
	}

	return (0);
}
