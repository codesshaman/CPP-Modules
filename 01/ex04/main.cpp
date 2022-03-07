/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:30:39 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/07 11:01:12 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

static void	replace_lines_in_file(std::ifstream *f, std::ofstream *r, const char **av)
{
	std::string		line;

	while (std::getline(*f, line))
	{
		if (line.compare(std::string(av[2])) == 0)
			*r << std::string(av[3]);
		else
			*r << line;
		if ((*f).peek() != EOF)
        	*r << std::endl;
	}
}

int	main(int argc, const char **argv)
{
	std::ifstream	file;
	std::ofstream	replace;
	std::string		replace_path;

	if (argc != 4)
	{
		std::cerr << "error: expected 3 arguments" << std::endl;
		return (1);
	}
	file.open(argv[1], std::ios::in);
	if (!file.is_open())
	{
		std::cerr << "error: could not open file" << std::endl;
		return (1);
	}
	replace_path = std::string(argv[1]) + std::string(".replace");
	replace.open(replace_path, std::ios::out);
	if (!replace.is_open())
	{
		file.close();
		std::cerr << "error: could not create replace file" << std::endl;
		return (1);
	}
	replace_lines_in_file(&file, &replace, argv);
	file.close();
	replace.close();
	std::cout << argv[1] << " > " << replace_path << std::endl;
	return (0);
}
