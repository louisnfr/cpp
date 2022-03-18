/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 00:46:51 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/18 01:48:11 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	this->_type = "wrong cat";
	std::cout << "constructor wrong cat" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal()
{
	*this = src;
	std::cout << "copy constructor wrong cat" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "destructor wrong cat" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "wrong cat yells" << std::endl;
}

std::ostream	&operator<<(std::ostream &cout, WrongCat const &i)
{
	cout << i.getType();
	return (cout);
}
