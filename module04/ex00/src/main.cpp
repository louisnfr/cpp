/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 23:16:34 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/18 00:42:18 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	const Animal	*meta = new Animal();
	const Animal	*i = new Cat();
	const Animal	*j = new Dog();

	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete i;
	delete j;

	return (0);
}
