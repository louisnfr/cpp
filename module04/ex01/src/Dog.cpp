/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 23:49:36 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/20 17:55:09 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	prompt(CONSTRUCTOR, DOG);
	this->_type = "dog";
	this->_brain = new Brain();
}

Dog::Dog(Dog const &src) : Animal()
{
	std::cout << "copy ";
	prompt(CONSTRUCTOR, DOG);
	*this = src;
}

Dog	&Dog::operator=(Dog const &rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

Dog::~Dog(void)
{
	delete this->_brain;
	prompt(DESTRUCTOR, DOG);
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
