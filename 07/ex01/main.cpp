/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 22:05:32 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/21 17:01:50 by ugdaniel         ###   ########.fr       */
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

int	main(void)
{
	int			intarr[5] = {0, 1, 2, 3, 4};
	char		chararr[3] = {'a', 'b', 'c'};
	std::string	strarr[4] = {"Hel", "lo, w", "orl", "d!"};

	iter(intarr, 5, print<int>);	 
	std::cout << std::endl;

	iter(chararr, 3, print<char>);
	std::cout << std::endl;

	iter(strarr, 4, print<std::string>);
	std::cout << std::endl;
	return (0);
}
