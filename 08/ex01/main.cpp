/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:27:15 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/06/03 17:34:00 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

int	main(void)
{
	srand(time(0));
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
		std::vector<int>	v;
		Span				sp2(10);

		v.reserve(5);
		for (int i = 0; i < 10; i++)
			v.push_back(i * 42);
		sp2.rangeFill(v.begin(), v.end());
		std::cout << sp2 << std::endl;
	}
	std::cout << "-------------" << std::endl;
	{
		Span	sp(20000);

		sp.fillRandomNumbers();
		std::cout << sp << std::endl;
	}

	return (0);
}
