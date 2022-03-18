/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 23:16:37 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/18 01:49:21 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	this->_type = "animal";
	std::cout << "constructor animal" << std::endl;
}

Animal::Animal(Animal const &src)
{
	*this = src;
	std::cout << "copy constructor animal" << std::endl;
}

Animal	&Animal::operator=(Animal const &rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "destructor animal" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::makeSound(void) const
{
	std::cout << "animal ?" << std::endl;
}

std::ostream	&operator<<(std::ostream &cout, Animal const &i)
{
	cout << i.getType();
	return (cout);
}
