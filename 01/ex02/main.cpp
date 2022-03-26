/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 14:34:31 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/26 17:20:42 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "Address of string:\t\t" << &str << std::endl
		<< "Address held by stringPTR:\t" << stringPTR << std::endl
		<< "Address held by stringREF:\t" << &stringREF << std::endl
		<< std::endl
		<< "Value of string:\t\t" << str << std::endl
		<< "Value pointed to by stringPTR:\t" << *stringPTR << std::endl
		<< "Value pointed to by stringREF:\t" << stringREF << std::endl;

	return (0);
}
