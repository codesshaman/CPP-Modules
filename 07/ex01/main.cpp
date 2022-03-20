/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 22:05:32 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/20 22:16:47 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template <typename T> void	print(const T &a) // test purposes
{
	std::cout << a << " ";
}

static void	print(const int &a)	// test purposes
{
	std::cout << a << " ";
}

int	main(void)
{
	int		intarr[5] = {0, 1, 2, 3, 4};
	char	chararr[3] = {'a', 'b', 'c'};

	iter(intarr, 5, print);	 // this will call the int version of print
	std::cout << std::endl;
	iter(chararr, 3, print); // this will call the template version of print
	std::cout << std::endl;
	return (0);
}
