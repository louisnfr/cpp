/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 23:16:37 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/17 23:44:54 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
}

Animal::Animal(Animal const &src)
{
	*this = src;
}

Animal	&Animal::operator=(Animal const &rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

Animal::~Animal(void)
{
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}

std::ostream	&operator<<(std::ostream &cout, Animal const &i)
{
	cout << i.getType();
	return (cout);
}
