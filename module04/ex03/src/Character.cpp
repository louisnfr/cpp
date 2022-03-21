/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 02:44:59 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/21 02:46:51 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name(0)
{
}

Character::Character(Character const &src)
{
	*this = src;
}

Character	&Character::operator=(Character const &rhs)
{
	this->_name = rhs.getName();
	return (*this);
}

Character::~Character(void)
{
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
