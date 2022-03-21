/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 02:44:59 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/21 03:02:08 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : _name(name)
{
	std::cout << "[CONST] Character" << std::endl;
}

Character::Character(Character const &src)
{
	std::cout << "[COPY] Character" << std::endl;
	*this = src;
}

Character	&Character::operator=(Character const &rhs)
{
	this->_name = rhs.getName();
	return (*this);
}

Character::~Character(void)
{
	std::cout << "[DEST] Character" << std::endl;
}

std::string const	&Character::getName(void) const
{
	return (this->_name);
}

std::ostream	&operator<<(std::ostream &cout, Character const &i)
{
	cout << i.getName();
	return (cout);
}
