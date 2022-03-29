/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:25:36 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/29 17:40:25 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <cstdlib>
#include "Array.hpp"

#define MAX_VAL 750

int main(void)
{
	Array<unsigned int>	a(5);
	// Array<int>	numbers(MAX_VAL);
	// int			*mirror = new int[MAX_VAL];

	// std::srand(time(NULL));

	// for (int i = 0; i < MAX_VAL; i++)
	// {
	// 	const int value = std::rand();
	// 	numbers[i] = value;
	// 	mirror[i] = value;
	// }

	// {
	// 	Array<int> tmp = numbers;
	// 	Array<int> test(tmp);
	// }

	// for (int i = 0; i < MAX_VAL; i++)
	// {
	// 	if (mirror[i] != numbers[i])
	// 	{
	// 		std::cerr << "didn't save the same value!!" << std::endl;
	// 		return 1;
	// 	}
	// }
	// try
	// {
	// 	numbers[-2] = 0;
	// }
	// catch(const std::exception &e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }

	// try
	// {
	// 	numbers[MAX_VAL] = 0;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }

	// for (int i = 0; i < MAX_VAL; i++)
	// {
	// 	numbers[i] = rand();
	// }

	// delete [] mirror;

	return (0);
}
