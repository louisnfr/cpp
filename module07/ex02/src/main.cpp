/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:25:36 by lraffin           #+#    #+#             */
/*   Updated: 2022/04/27 20:51:23 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "Array.hpp"

#define SIZE 10

int main(void)
{
	Array<int>	abort;

	Array<int>	numbers(SIZE);
	int			*mirror = new int[SIZE];

	std::srand(time(NULL));

	for (int i = 0; i < SIZE; i++)
	{
		int const value = std::rand();
		numbers[i] = value;
		mirror[i] = value;
	}

	for (int i = 0; i < SIZE; i++)
		std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;

	Array<int> tmp = numbers;
	Array<int> test(tmp);

	for (int i = 0; i < SIZE; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return (1);
		}
	}

	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		numbers[SIZE] = 0;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	for (int i = 0; i < SIZE; i++)
	{
		numbers[i] = rand();
	}

	delete [] mirror;

	return (0);
}
