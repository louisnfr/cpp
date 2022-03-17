/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:51:18 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/17 19:42:32 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap()
{
	this->_hit = 100;
	this->_energy = 100;
	this->_attack = 30;
	std::cout << "[\033[33mFRAG\033[0m] ";
	std::cout << _name << " is born." << std::endl;
}

DiamondTrap::DiamondTrap(std::string const name) : ClapTrap(name)
{
	this->_hit = 100;
	this->_energy = 100;
	this->_attack = 30;
	std::cout << "[\033[33mFRAG\033[0m] ";
	std::cout << _name << " is born." << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(src)
{
	this->_hit = 100;
	this->_energy = 100;
	this->_attack = 30;
	std::cout << "[\033[33mFRAG\033[0m] ";
	std::cout << _name << " has been cloned." << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &rhs)
{
	*this = rhs;
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "[\033[33mFRAG\033[0m] ";
	std::cout << _name << " has been destroyed." << std::endl;
}

void	DiamondTrap::attack(std::string const &target)
{
	if (_energy == 0 || _hit == 0)
	{
		std::cout << "[\033[33mFRAG\033[0m] ";
		std::cout << _name << " can't attack." << std::endl;
		return ;
	}
	std::cout << "[\033[33mFRAG\033[0m] ";
	std::cout << _name << " deals " << _attack << " damage to "
			<< target << "." << std::endl;
	_energy--;
}

void	DiamondTrap::highFivesGuys(void)
{
	std::cout << "[\033[33mFRAG\033[0m] ";
	std::cout << _name << " asks for a high five." << std::endl;
}

std::ostream	&operator<<(std::ostream &cout, DiamondTrap const &i)
{
	cout << "[\033[33mFRAG\033[0m] " << i.getName();
	return (cout);
}
