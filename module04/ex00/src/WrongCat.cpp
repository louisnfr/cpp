/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 00:46:51 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/18 01:12:06 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->_type = "wrong cat";
	std::cout << _type << " constructor" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src)
{
	*this = src;
	std::cout << _type << " copy constructor" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << _type << " destructor" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << _type << " yells" << std::endl;
}

std::ostream	&operator<<(std::ostream &cout, WrongCat const &i)
{
	cout << i.getType();
	return (cout);
}
