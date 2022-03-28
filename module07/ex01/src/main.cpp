/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:07:17 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/28 15:53:31 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename T>
void	increment(T &array)
{
	array++;
}

int	main(void)
{
	char		array1[4] = "oui";
	int			array2[5] = {-42, 0, 159, 2, 90};

	// Char

	std::cout << array1[0] << array1[1] << array1[2] << std::endl;
	iter(array1, 3, increment);
	std::cout << array1[0] << array1[1] << array1[2] << std::endl;

	std::cout << std::endl;

	// Integers

	for (int i = 0; i < 5; i++)
		std::cout << array2[i] << std::endl;

	iter(array2, 5, increment);
	
	for (int i = 0; i < 5; i++)
		std::cout << array2[i] << std::endl;

	return (0);
}
