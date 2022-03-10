/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:47:41 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/10 17:54:42 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int ac, char **av)
{
	std::fstream	file;
	std::string		s1;

	(void)ac;
	if (ac != 4)
		return (EXIT_FAILURE);
	// s1 = "";
	file.open(av[1], std::fstream::in);
	while (s1 != "louis")
	{
		file >> s1;
		std::cout << s1 << std::endl;
	}
	file.close();
	file.open((std::string)av[1] + ".replace", std::fstream::out);
	file << s1 << std::endl;
	file.close();
	return (EXIT_SUCCESS);
}
