/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraffin <lraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:51:18 by lraffin           #+#    #+#             */
/*   Updated: 2022/03/17 20:30:54 by lraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap()
{
	this->_hit = 100;
	this->_energy = 50;
	this->_attack = 20;
	std::cout << "[\033[34mDIAM\033[0m] ";
	std::cout << _name << " is born." << std::endl;
}

DiamondTrap::DiamondTrap(std::string const name) : ClapTrap(name)
{
	this->_hit = 100;
	this->_energy = 50;
	this->_attack = 20;
	std::cout << "[\033[34mDIAM\033[0m] ";
	std::cout << _name << " is born." << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(src)
{
	std::cout << "[\033[34mDIAM\033[0m] ";
	std::cout << _name << " has been cloned." << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &rhs)
{
	*this = rhs;
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "[\033[34mDIAM\033[0m] ";
	std::cout << _name << " has been destroyed." << std::endl;
}

std::ostream	&operator<<(std::ostream &cout, DiamondTrap const &i)
{
	cout << "[\033[34mDIAM\033[0m] " << i.getName();
	return (cout);
}
