/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 23:49:33 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/18 00:37:03 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	this->_type = "cat";
	std::cout << _type << " constructor" << std::endl;
}

Cat::Cat(Cat const &src) : Animal(src)
{
	*this = src;
}

Cat	&Cat::operator=(Cat const &rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << _type << " destructor" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << _type << " moews" << std::endl;
}

std::ostream	&operator<<(std::ostream &cout, Cat const &i)
{
	cout << i.getType();
	return (cout);
}
