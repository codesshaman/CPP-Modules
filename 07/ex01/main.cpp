/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 22:05:32 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/21 11:49:30 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

// test purposes
template <typename T> void	print(const T &a) 
{
	std::cout << a;
}

// test purposes
static void	print(const int &a)
{
	std::cout << a;
}

int	main(void)
{
	int			intarr[5] = {0, 1, 2, 3, 4};
	char		chararr[3] = {'a', 'b', 'c'};
	std::string	strarr[4] = {"Hel", "lo, w", "orl", "d!"};

	// print(const int &)
	iter(intarr, 5, print);	 
	std::cout << std::endl;

	// print(const T &)
	iter(chararr, 3, print);
	std::cout << std::endl;

	// print(const T &)
	iter(strarr, 4, print);
	std::cout << std::endl;
	return (0);
}
