/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:07:17 by lraffin           #+#    #+#             */
/*   Updated: 2022/04/27 20:26:16 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "Awesome.hpp"

int	main(void)
{
	/* **************************************************************** */

	std::cout << RED << "* CHAR *" << NOC << std::endl;
	char	word[4] = "oui";

	std::cout << word[0] << word[1] << word[2] << std::endl;
	iter(word, 3, increment);
	std::cout << word[0] << word[1] << word[2] << std::endl;

	/* **************************************************************** */

	std::cout << RED << "* INT *" << NOC << std::endl;
	int		array[5] = {-42, 0, 159, 2, 90};

	for (int i = 0; i < 5; i++)
		std::cout << array[i] << std::endl;

	iter(array, 5, increment);

	for (int i = 0; i < 5; i++)
		std::cout << array[i] << std::endl;

	/* **************************************************************** */

	std::cout << RED << "* AWESOME *" << NOC << std::endl;
	int		tab[] = {0, 1, 2, 3, 4};
	Awesome	tab2[5];

	iter(tab, 5, print);
	iter(tab2, 5, print_color);

	return (0);
}
