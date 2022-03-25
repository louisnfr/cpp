/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:47:41 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/25 14:54:51 by lraffin          ###   ########.fr       */
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

static void	is_empty(std::ifstream &infile)
{
	std::string		line;

	std::getline(infile, line);
	if (line.empty())
	{
		infile.close();
		exit_error("file empty");
	}
	infile.close();
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

static void	search_file(std::ifstream &infile, std::string replace,
						std::string s1, std::string s2)
{
	std::string		line;
	std::ofstream	outfile;

	if (s1.empty())
	{
		infile.close();
		exit_error("s1 is empty");
	}
	outfile.open(replace.c_str());
	if (outfile.fail())
		exit_error("failed to open file");
	while (!infile.eof())
	{
		std::getline(infile, line);
		if (line.empty())
			break ;
		if (line.find(s1) != std::string::npos)
			replace_line(&line, s1, s2);
		outfile << line << std::endl;
	}
	outfile.close();
}
int	main(int ac, char **av)
{
	std::ifstream	infile;
	std::string		replace;

	if (ac != 4)
		exit_error("bad arguments");
	infile.open(av[1]);
	if (infile.fail())
		exit_error("failed to open file");
	is_empty(infile);
	infile.open(av[1]);
	replace = (std::string)av[1] + ".replace";
	search_file(infile, replace, av[2], av[3]);
	infile.close();
	return (0);
}
