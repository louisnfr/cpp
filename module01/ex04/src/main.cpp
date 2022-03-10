/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:47:41 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/11 00:37:26 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <stdlib.h>

static void	exit_error(std::string error_message, std::string option)
{
	std::cerr << "Error: " << error_message;
	if (!option.empty())
		std::cerr << ": " << option;
	std::cerr << std::endl;
	exit (EXIT_FAILURE);
}

static std::string	replace_line(std::string line, std::string s1, std::string s2)
{
	std::string	new_line;
	std::size_t	pos;

	pos = line.find(s1);
	new_line = line.substr(0, pos) + s2
			+ line.substr(pos + s1.length(), line.length());
	return (new_line);
}

static void	search_file(std::ifstream &infile, std::ofstream &outfile,
						std::string s1, std::string s2)
{
	std::string	line;

	if (s1.empty())
		exit_error("s1 is empty", "");
	while (!infile.eof())
	{
		std::getline(infile, line);
		if (line.empty())
			break ;
		while (line.find(s1) != std::string::npos)
			line = replace_line(line, s1, s2);
		outfile << line << std::endl;
	}
}

int	main(int ac, char **av)
{
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		replace;

	if (ac != 4)
		exit_error("bad arguments", "");
	infile.open(av[1]);
	if (infile.fail())
		exit_error("failed to open file", (std::string)av[1]);
	replace = (std::string)av[1] + ".replace";
	outfile.open(replace.c_str());
	if (outfile.fail())
		exit_error("failed to open file", (std::string)av[1]);
	search_file(infile, outfile, av[2], av[3]);
	infile.close();
	outfile.close();
	return (0);
}
