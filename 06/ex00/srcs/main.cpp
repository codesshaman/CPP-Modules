/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 11:56:46 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/30 12:54:03 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"
#include "utils.hpp"
#include <iostream>

int	main(int argc, const char **argv)
{
	Converter	converter;

	if (argc == 2 && *argv[1])
		return (converter.convert(argv[1]));
	std::cerr << "error: expected 1 non-empty argument" << std::endl;
	return (1);
}
