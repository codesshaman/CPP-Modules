/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:30:39 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/08 14:50:45 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

static void	replace_lines_in_file(std::ifstream *f, const char **av)
{
	std::string		line;
	std::ofstream	replace_file;
	std::string		replace_path;

	replace_path = std::string(av[1]) + std::string(".replace"); // Add '.replace' to our file name
	replace_file.open(replace_path, std::ios::out);
	if (!replace_file.is_open())
	{
		std::cerr << "error: could not create replacement file" << std::endl;
		return ;
	}
	while (std::getline(*f, line) && (*f).is_open())
	{
		if (line.compare(std::string(av[2])) == 0)
			replace_file << std::string(av[3]);
		else
			replace_file << line;
		replace_file << std::endl;
	}
	replace_file.close();
	std::cout << av[1] << " > " << replace_path << std::endl;
}

int	main(int argc, const char **argv)
{
	std::ifstream	file;

	if (argc != 4)
	{
		std::cerr << "error: expected 3 arguments" << std::endl;
		return (1);
	}
	file.open(argv[1], std::ios::in);
	if (!file.is_open())
	{
		std::cerr << "error: could not open file: " << argv[1] << std::endl;
		return (1);
	}
	replace_lines_in_file(&file, argv);
	file.close();
	return (0);
}
