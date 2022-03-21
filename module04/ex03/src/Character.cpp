/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 02:44:59 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/21 04:09:41 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : _name(name)
{
	std::cout << "[CONST] Character" << std::endl;
	for (size_t i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
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
	for (size_t i = 0; i < 4; i++)
		delete this->_inventory[i];
}

std::string const	&Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	size_t	i;

	i = 0;
	while (i < 4)
		if (this->_inventory != NULL)
			i++;
	this->_inventory[i] = m;
}

void	Character::unequip(int idx)
{
	(void)idx;
}

void	Character::use(int idx, ICharacter &target)
{
	(void)idx;
	(void)target;
}

std::ostream	&operator<<(std::ostream &cout, Character const &i)
{
	cout << i.getName();
	return (cout);
}
