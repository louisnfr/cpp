/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 23:49:33 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/20 18:32:11 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	prompt(CONSTRUCTOR, CAT);
	this->_type = "cat";
	this->_brain = new Brain();
}

Cat::Cat(Cat const &src) : Animal()
{
	std::cout << "(copy)";
	prompt(CONSTRUCTOR, CAT);
	*this = src;
}

Cat	&Cat::operator=(Cat const &rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

Cat::~Cat(void)
{
	delete this->_brain;
	prompt(DESTRUCTOR, CAT);
}

void	Cat::makeSound(void) const
{
	std::cout << "cat moews" << std::endl;
}

std::ostream	&operator<<(std::ostream &cout, Cat const &i)
{
	cout << i.getType();
	return (cout);
}
