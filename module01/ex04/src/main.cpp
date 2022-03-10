/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:47:41 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/10 23:26:28 by lraffin          ###   ########.fr       */
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
	(void)s1;
	(void)s2;
	(void)line;
	return (line);
}

static void	search_file(std::ifstream &infile, std::ofstream &outfile,
						std::string s1, std::string s2)
{
	std::string	line;

	(void)outfile;
	(void)s1;
	(void)s2;
	if (s1.empty())
		exit_error("s1 is empty", "");
	while (!infile.eof())
	{
		std::getline(infile, line);
		if (line.empty())
			break ;
		if (line.find(s1) != std::string::npos)
			line = replace_line(line, s1, s2);
		else
			outfile << line << std::endl;
	}
}

int	main(int ac, char **av)
{
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		replace;

	// errors check
	if (ac != 4)
		exit_error("bad arguments", "");
	infile.open(av[1]);
	if (infile.fail())
		exit_error("failed to open file", (std::string)av[1]);
	replace = (std::string)av[1] + ".replace";
	outfile.open(replace.c_str());
	if (outfile.fail())
		exit_error("failed to open file", (std::string)av[1]);

	// search s1 occurences
	search_file(infile, outfile, av[2], av[3]);
	infile.close();
	outfile.close();
	return (0);
}
