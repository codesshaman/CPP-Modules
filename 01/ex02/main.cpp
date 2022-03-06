/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 14:34:31 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/06 14:42:41 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string	str = "HI THIS IS STRING";
	std::string	*stringPTR = &str;
	std::string	stringREF = *stringPTR;

	std::cout << &str << std::endl;
	std::cout << (void *)stringPTR << std::endl;

	return (0);
}
