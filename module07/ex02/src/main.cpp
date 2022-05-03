/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:25:36 by lraffin           #+#    #+#             */
/*   Updated: 2022/04/28 02:07:05 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "Array.hpp"

#define SIZE 5

int main(void)
{
	std::cout << YLW << "***** INTEGER *****" << NOC << std::endl;
	{
		std::srand(time(NULL));

		Array<int> const	empty;
		Array<int>			orig(SIZE);

		// empty[0] = 1; // compilation error

		for (int i = 0; i < SIZE; i++)
		{
			int const value = std::rand() % 100 - 50;
			orig[i] = value;
		}

		std::cout << orig;
		Array<int>	copy(orig);
		std::cout << copy;

		try
		{
			copy[5] = 12;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << YLW << "***** STRING *****" << NOC << std::endl;
	{
		Array<std::string>	strs(SIZE);

		strs[0] = "Ceci";
		strs[1] = "est";
		strs[2] = "un";
		strs[3] = "message";
		strs[4] = "secret";

		std::cout << strs;

		try
		{
			strs[SIZE] = "test";
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << YLW << "***** CHAR *****" << NOC << std::endl;
	{
		Array<char> b = Array<char>(3);

		b[0] = 'a';
		b[1] = 'b';
		b[2] = 'c';

		std::cout << b;
		Array<char> c = Array<char>(b);
		c[2] = 'z';
		std::cout << c;
	}
	return (0);
}
