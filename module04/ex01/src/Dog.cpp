/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 23:49:36 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/18 01:47:16 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	this->_type = "dog";
	std::cout << "constructor dog" << std::endl;
}

Dog::Dog(Dog const &src) : Animal()
{
	*this = src;
	std::cout << "copy constructor dog" << std::endl;
}

Dog	&Dog::operator=(Dog const &rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "destructor dog" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "dog barks" << std::endl;
}

std::ostream	&operator<<(std::ostream &cout, Dog const &i)
{
	cout << i.getType();
	return (cout);
}
