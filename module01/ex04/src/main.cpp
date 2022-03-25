/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:47:41 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/25 14:41:23 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstdlib>

static void	exit_error(char const *error_message)
{
	std::cerr << "Error: " << error_message << std::endl;
	exit (EXIT_FAILURE);
}

static void	replace_line(std::string *line, std::string s1, std::string s2)
{
	std::size_t	pos;
	std::size_t	i;

	i = 0;
	while ((pos = line->find(s1, i)) != std::string::npos)
	{
		line->erase(pos, s1.length());
		line->insert(pos, s2);
		i = pos + s2.length();
	}
}

static void	search_file(std::ifstream &infile, std::ofstream &outfile,
						std::string s1, std::string s2)
{
	std::string	line;

	if (s1.empty())
		exit_error("s1 is empty");
	while (!infile.eof())
	{
		std::getline(infile, line);
		if (line.empty())
			break ;
		if (line.find(s1) != std::string::npos)
			replace_line(&line, s1, s2);
		outfile << line << std::endl;
	}
}

int	main(int ac, char **av)
{
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		replace;

	if (ac != 4)
		exit_error("bad arguments");
	infile.open(av[1]);
	if (infile.fail())
		exit_error("failed to open file");
	replace = (std::string)av[1] + ".replace";
	outfile.open(replace.c_str());
	if (outfile.fail())
		exit_error("failed to open file");
	search_file(infile, outfile, av[2], av[3]);
	infile.close();
	outfile.close();
	return (0);
}
