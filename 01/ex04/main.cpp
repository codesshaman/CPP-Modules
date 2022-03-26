/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:30:39 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/26 18:25:47 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

static void	read_file(std::ifstream *f, std::string &line)
{
	std::string		temp;

	line.empty();
	while ((*f).is_open() && std::getline(*f, temp))
	{
		line.append(temp);
		if (f->peek() != EOF)
			line += '\n';
	}
	line.append("\n");
}

static void output_to_new_file(const char *file_name, std::string &line)
{
	std::ofstream	replace_file;
	std::string		replace_path = std::string(file_name) + std::string(".replace");

	replace_file.open(replace_path, std::ios::out);
	if (!replace_file.is_open())
	{
		std::cerr << "error: could not create replacement file" << std::endl;
		return;
	}
	replace_file << line;
	replace_file.close();
	std::cout << file_name << " > " << replace_path << std::endl;
}

static void	replace_lines_in_file(std::ifstream *f, const char **av)
{
	std::string		line;
	std::string		s1(av[2]);
	std::string		s2(av[3]);

	read_file(f, line);
	for (size_t pos = 0; pos < line.length(); pos++)
	{
		if (line.compare(pos, s1.length(), s1) == 0)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
		}
	}
	output_to_new_file(av[1], line);
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
