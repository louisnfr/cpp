/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 00:46:49 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/18 00:58:32 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->_type = "wrong animal";
	std::cout << _type << " constructor" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	*this = src;
	std::cout << _type << " copy constructor" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << _type << " destructor" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << _type << " screams" << std::endl;
}

std::ostream	&operator<<(std::ostream &cout, WrongAnimal const &i)
{
	cout << i.getType();
	return (cout);
}
