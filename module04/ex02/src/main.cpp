/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 23:16:34 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/20 22:56:29 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void	prompt(std::string structor, std::string animal)
{
	std::cout << structor << " " << animal << std::endl;
}

int	main(void)
{
	// Animal	error;

	// ex01

	Animal	*animals[4];

	for (int i = 0; i < 4; i++)
		if (i % 2)
			animals[i] = new Dog;
		else
			animals[i] = new Cat;

	for (int i = 0; i < 4; i++)
		delete animals[i];

	std::cout << std::endl;

	const Animal	*i = new Cat();
	const Animal	*j = new Dog();

	delete i;
	delete j;

	std::cout << std::endl;

	Dog	*one = new Dog;
	Dog	*two = new Dog(*one);

	delete one;
	delete two;

	return (0);
}
