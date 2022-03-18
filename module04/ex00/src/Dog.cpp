/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 23:49:36 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/18 00:52:19 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	this->_type = "dog";
	std::cout << _type << " constructor" << std::endl;
}

Dog::Dog(Dog const &src) : Animal(src)
{
	*this = src;
	std::cout << _type << " copy constructor" << std::endl;
}

Dog	&Dog::operator=(Dog const &rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << _type << " destructor" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << _type << " barks" << std::endl;
}

std::ostream	&operator<<(std::ostream &cout, Dog const &i)
{
	cout << i.getType();
	return (cout);
}
