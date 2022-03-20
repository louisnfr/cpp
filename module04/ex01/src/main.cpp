/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 23:16:34 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/20 19:34:38 by lraffin          ###   ########.fr       */
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
	Dog	original;
	Dog	copy = original;

	std::cout << std::endl;

	Dog	*p1 = new Dog;
	Dog	*p2 = new Dog(*p1);
	delete p1;
	delete p2;
	return (0);
}
