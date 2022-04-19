/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 23:16:34 by lraffin           #+#    #+#             */
/*   Updated: 2022/04/19 15:01:36 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal	*ani = new Animal();
	const Animal	*cat = new Cat();
	const Animal	*dog = new Dog();

	std::cout << std::endl;

	std::cout << ani->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;

	std::cout << std::endl;

	ani->makeSound();
	cat->makeSound();
	dog->makeSound();

	std::cout << std::endl;

	delete ani;
	delete cat;
	delete dog;

	// Wrong animals
	std::cout << std::endl;

	const WrongAnimal	*w_ani = new WrongAnimal();
	const WrongAnimal	*w_cat = new WrongCat();
	const WrongCat		*w_cat2 = new WrongCat();

	std::cout << std::endl;

	std::cout << w_ani->getType() << " " << std::endl;
	std::cout << w_cat->getType() << " " << std::endl;
	std::cout << w_cat2->getType() << " " << std::endl;

	std::cout << std::endl;

	w_ani->makeSound();
	w_cat->makeSound();
	w_cat2->makeSound();

	std::cout << std::endl;

	delete w_ani;
	delete w_cat;

	return (0);
}
