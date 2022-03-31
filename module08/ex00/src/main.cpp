/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:26:34 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/31 22:45:05 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int	main(void)
{
	std::vector<int>	vectorInt;

	for (int i = 0; i < 10; i++)
		vectorInt.push_back(i);

	std::cout << "Vector of integers: " << std::endl;
	easyfind(vectorInt, 0);
	easyfind(vectorInt, -45);
	easyfind(vectorInt, 798);
	easyfind(vectorInt, 8);

	std::list<int>	listInt;

	for (int i = -100; i < 0; i++)
		listInt.push_back(i);

	std::cout << std::endl << "List of integers: " << std::endl;
	easyfind(listInt, 0);
	easyfind(listInt, -45);
	easyfind(listInt, -100);
	easyfind(listInt, 8);

	return (0);
}
